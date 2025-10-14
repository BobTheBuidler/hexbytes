#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-1/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-1/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4651960971581144e-05 | 2.3742079655049166e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4914589877013902e-05 | 2.3721452695396386e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4870298768105796e-05 | 2.3683938066914603e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4441135785164883e-05 | 2.3603704740361955e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4629223292141224e-05 | 2.3549131802973782e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5146059330733922e-05 | 2.3483815893506455e-05 | 6.61% | 7.08% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.474791267091099e-05 | 2.3673202583450512e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4539493474144706e-05 | 2.357505416173682e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4801258886605904e-05 | 2.356331295261873e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4722036842682627e-05 | 2.3684410506043172e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.462301380722871e-05 | 2.350778553800804e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4732560758196835e-05 | 2.3666414323639715e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4828387895957752e-05 | 2.3510741330565454e-05 | 5.31% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.417106165572371e-05 | 2.3641289360599036e-05 | 2.19% | 2.24% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4761245496400876e-05 | 2.3513523976292314e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.470209957743426e-05 | 2.3561682920752914e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4785439338627667e-05 | 2.3539953770655566e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4602124917944918e-05 | 2.37010509465164e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4786898517207075e-05 | 2.385015756790433e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.506776108026341e-05 | 2.374638694500302e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4716235667745476e-05 | 2.372554353504267e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4991224042452845e-05 | 2.3761606567373045e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.48612457179913e-05 | 2.373565527421482e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.476836353946959e-05 | 2.3506553561083275e-05 | 5.09% | 5.37% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.497758756549075e-05 | 2.3537885991152604e-05 | 5.76% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4912925424040037e-05 | 2.357351587115538e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3552392899033618e-05 | 2.2706469370209416e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3706932147929157e-05 | 2.277820757228196e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.376317693212643e-05 | 2.2997485431157426e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.375639410252125e-05 | 2.259090275280149e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3771039282453677e-05 | 2.2389388133951e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3652355422515932e-05 | 2.262054829524286e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3688476172809026e-05 | 2.267875758680969e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.5603807294365365e-05 | 2.25676997796218e-05 | 11.86% | 13.45% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3568021477888985e-05 | 2.2477354817355278e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3726669642236345e-05 | 2.2574931719763578e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3965766108147683e-05 | 2.24450657495643e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.358085325316612e-05 | 2.2403101267703223e-05 | 4.99% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3699287914925477e-05 | 2.248879324132225e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3658399290103703e-05 | 2.2534614930071396e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.372446570049721e-05 | 2.2309551750539106e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.361081601937645e-05 | 2.2580510202332043e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3853200325644165e-05 | 2.2326871825418786e-05 | 6.40% | 6.84% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3561004442665264e-05 | 2.257152154387967e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.385969297391155e-05 | 2.2704869154983565e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3706699030158312e-05 | 2.269054749681057e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3767635127293485e-05 | 2.2700208446505834e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3872602534973736e-05 | 2.2505738922799452e-05 | 5.73% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3650864158307702e-05 | 2.2505362808841013e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.389110668805602e-05 | 2.2517198282302654e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3749080797372078e-05 | 2.274016197100676e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.384500164707853e-05 | 2.26824494461279e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3710620325141458e-05 | 2.2563834589142225e-05 | 4.84% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3725237763328324e-05 | 2.275650995646531e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3963689968818588e-05 | 2.2947783670581576e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3764937664157905e-05 | 2.2400115317102403e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.39650643076325e-05 | 2.2360730932404967e-05 | 6.69% | 7.17% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.368946108563518e-05 | 2.277422869591683e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3821875072477958e-05 | 2.2966183704564473e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3945917187918905e-05 | 2.2039358030301282e-05 | 7.96% | 8.65% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3800010730992442e-05 | 2.2898180459583268e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.391173775042203e-05 | 2.2807688378797876e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3685970102818634e-05 | 2.286635158849624e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3904209846583215e-05 | 2.229993282354903e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3776399904698173e-05 | 2.282667082608641e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3717054602155944e-05 | 2.275532124231809e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3635144131737e-05 | 2.2794580002010076e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3642553013960808e-05 | 2.280008245099661e-05 | 3.56% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.37268151388951e-05 | 2.2878381172070876e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3764922052232538e-05 | 2.2983272495408684e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.389620277613219e-05 | 2.2868693419290814e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.381179689224361e-05 | 2.261058158338374e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3947274340818952e-05 | 2.230994834697093e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3976678552543847e-05 | 2.2726994986763895e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3622868411768784e-05 | 2.23159963043466e-05 | 5.53% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.4094650683047702e-05 | 2.230840450415285e-05 | 7.41% | 8.01% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.375249288072367e-05 | 2.261610529510791e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3664737814981775e-05 | 2.2788093813537335e-05 | 3.70% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.39430082328806e-05 | 2.2333154055712127e-05 | 6.72% | 7.21% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.380657528466817e-05 | 2.263174066927076e-05 | 4.93% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3759878489485154e-05 | 2.2421869826917465e-05 | 5.63% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3696033630537857e-05 | 2.2436542911204173e-05 | 5.32% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.4009031281243505e-05 | 2.2558009394689917e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3787578391980155e-05 | 2.2352974384459595e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.389483280493658e-05 | 2.217315086371502e-05 | 7.21% | 7.76% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3989364146550072e-05 | 2.2293362282276747e-05 | 7.07% | 7.61% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3929301695838763e-05 | 2.2243663880455482e-05 | 7.04% | 7.58% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.390094352471186e-05 | 2.2388085484846872e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3912838492563126e-05 | 2.223576054388474e-05 | 7.01% | 7.54% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3839805980868495e-05 | 2.2482428944202168e-05 | 5.69% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3946240708655286e-05 | 2.2134188439129625e-05 | 7.57% | 8.19% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3830132864498836e-05 | 2.2204587399637516e-05 | 6.82% | 7.32% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3956867057869268e-05 | 2.2297675060307316e-05 | 6.93% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3659258874574295e-05 | 2.229929744684334e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3948837913970947e-05 | 2.2253094320491686e-05 | 7.08% | 7.62% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3774163724281074e-05 | 2.2276505145158204e-05 | 6.30% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.403854006515259e-05 | 2.535659157177087e-05 | -5.48% | -5.20% | 0.95x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3719325230356465e-05 | 2.2243213526803864e-05 | 6.22% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3900143751114583e-05 | 2.2381869143738894e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.394913454453958e-05 | 2.271665308174575e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.381973442865675e-05 | 2.2428888583584435e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3711765423516114e-05 | 2.225850253344376e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3876108298483828e-05 | 2.2507732474511268e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3877181318422928e-05 | 2.2292052910813717e-05 | 6.64% | 7.11% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.391583873307995e-05 | 2.2260601128023153e-05 | 6.92% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.388620010775735e-05 | 2.254326163173068e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.374288242860744e-05 | 2.234580053706118e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3808221335763292e-05 | 2.242056561205241e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.360101179165709e-05 | 2.223899701096301e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3425022099941238e-05 | 2.2691252964576542e-05 | 3.13% | 3.23% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3570532426018685e-05 | 2.232126186648629e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3667104524828177e-05 | 2.2348126107982218e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3834274442930237e-05 | 2.2454221906176193e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.334232673854612e-05 | 2.213479558210342e-05 | 5.17% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.366026717609489e-05 | 2.2346918175273533e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3783580706241166e-05 | 2.2394678424258706e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.358496422944416e-05 | 2.2284603063809602e-05 | 5.51% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3616635596984097e-05 | 2.2230039609024826e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.358696974761443e-05 | 2.226369948315651e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3841421667314486e-05 | 2.224531700089243e-05 | 6.69% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3852856997623723e-05 | 2.245439670031442e-05 | 5.86% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.371245778804023e-05 | 2.2334016617086115e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3953630972695282e-05 | 2.2281194871917552e-05 | 6.98% | 7.51% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.360093194211216e-05 | 2.2504282923644097e-05 | 4.65% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3659343009664815e-05 | 2.233404501972741e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.382104850932273e-05 | 2.2296625606055568e-05 | 6.40% | 6.84% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3821292432792257e-05 | 2.231770656528545e-05 | 6.31% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.418370369398492e-05 | 2.223625909578257e-05 | 8.05% | 8.76% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3549914281609854e-05 | 2.239536854949025e-05 | 4.90% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3581715505717703e-05 | 2.233839016262871e-05 | 5.27% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3709003040145822e-05 | 2.253740515692887e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.37370651256261e-05 | 2.2626763019765507e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.363319125539605e-05 | 2.2483375411589478e-05 | 4.87% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.363345720554712e-05 | 2.2437279341295577e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3686750169933537e-05 | 2.249959353849564e-05 | 5.01% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3862702220155034e-05 | 2.2521624005521676e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3446334624891095e-05 | 2.2517943468318158e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.353666292773432e-05 | 2.2540378307715853e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3667148424653667e-05 | 2.23635845139677e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3616073790037003e-05 | 2.2477275695333708e-05 | 4.82% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.365667181938546e-05 | 2.2479638334589596e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.360863328195228e-05 | 2.2542688756548335e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3698144640379696e-05 | 2.2296469909688985e-05 | 5.91% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3669893692941123e-05 | 2.2279180024041587e-05 | 5.88% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3714192321174797e-05 | 2.2636048756140697e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.367463362629922e-05 | 2.2564731380060752e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.377896247538816e-05 | 2.2489893922902326e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3696862417507692e-05 | 2.2640943799683836e-05 | 4.46% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3757765037093327e-05 | 2.2508844821880213e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.355779781619912e-05 | 2.218344927203531e-05 | 5.83% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.318634217888085e-05 | 2.2556870903105894e-05 | 2.71% | 2.79% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3855517516910593e-05 | 2.2603117471540457e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3548196064566108e-05 | 2.2513663460124153e-05 | 4.39% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.365568277820364e-05 | 2.2617926049483086e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3675156919783204e-05 | 2.2538417021036196e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.359308668806988e-05 | 2.254536829014792e-05 | 4.44% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3556700839463984e-05 | 2.2490638055690138e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3625076355439547e-05 | 2.24613930939796e-05 | 4.93% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3586780005605462e-05 | 2.2593186975130276e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3491254037320052e-05 | 2.2481907616767723e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.369606246611395e-05 | 2.258547347118303e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3571789245281507e-05 | 2.240625755083801e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3654410983717284e-05 | 2.2519207884417063e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3638751655862992e-05 | 2.2522775552394233e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3437222548013353e-05 | 2.2482076455869534e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3643866628657753e-05 | 2.2597247884400497e-05 | 4.43% | 4.63% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3704150408769832e-05 | 2.2562529992604035e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.356418754687801e-05 | 2.2566689141872047e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.360664503832402e-05 | 2.254839829538522e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3430245806861645e-05 | 2.246184552307775e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3626169169951377e-05 | 2.2552721079885228e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3481735902666036e-05 | 2.252091484461108e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.188282262367498e-05 | 5.99705426521925e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.141414771790435e-05 | 5.958031697777583e-05 | 26.82% | 36.65% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.185049453614378e-05 | 5.953360796611001e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.180988682127241e-05 | 6.021565348336068e-05 | 26.40% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.20494837448135e-05 | 6.026773951574961e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.185850207773249e-05 | 6.0044394819668885e-05 | 26.65% | 36.33% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.0027600939987e-05 | 5.765484046166121e-05 | 27.96% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.205283582249193e-05 | 5.9543737100346765e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.153306992641606e-05 | 5.998235380632076e-05 | 26.43% | 35.93% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.170710250718827e-05 | 6.065065529506699e-05 | 25.77% | 34.72% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.157936641513887e-05 | 6.0288920775316713e-05 | 26.10% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.253511691621822e-05 | 5.990469783622166e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.151974089816915e-05 | 5.9817269764953106e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.178414979336885e-05 | 5.92868319185694e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.187080718583789e-05 | 5.996978094321253e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.221205846978547e-05 | 5.92096918939267e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.229906895712295e-05 | 6.032587733830027e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.194259915136483e-05 | 5.9341651236448896e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.25811681722612e-05 | 6.0564547076953155e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.195011578391536e-05 | 6.046045715784966e-05 | 26.22% | 35.54% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.165920985899151e-05 | 5.955459503695057e-05 | 27.07% | 37.12% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.140876584467526e-05 | 5.995998930321452e-05 | 26.35% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.179254091422523e-05 | 5.968083841606335e-05 | 27.03% | 37.05% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.220244454409264e-05 | 5.979644729236433e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.19769515467715e-05 | 5.9262351090209405e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.125058408894145e-05 | 5.981408511392185e-05 | 26.38% | 35.84% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.158868825405351e-05 | 5.805739666586402e-05 | 28.84% | 40.53% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.053243440307724e-05 | 5.909304117275174e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.179723215677768e-05 | 5.911160700487675e-05 | 27.73% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.219050969860988e-05 | 6.081678973282211e-05 | 26.01% | 35.14% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.267707809637939e-05 | 6.166161881146768e-05 | 25.42% | 34.08% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.296342580041108e-05 | 6.156329458313869e-05 | 25.79% | 34.76% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.227732619097291e-05 | 6.0536488469922664e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.336597972844179e-05 | 6.066461438404699e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.190254480276036e-05 | 6.027780990619787e-05 | 26.40% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.036711164065048e-05 | 5.815637378036025e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.243998121808049e-05 | 6.0979596059296965e-05 | 26.03% | 35.19% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.25695591275962e-05 | 6.10774964178927e-05 | 26.03% | 35.19% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.222716636929613e-05 | 6.153466817829526e-05 | 25.17% | 33.63% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.244713697933408e-05 | 6.0853900593699986e-05 | 26.19% | 35.48% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.29035276011581e-05 | 6.197360475266339e-05 | 25.25% | 33.77% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.257712605019676e-05 | 6.117768153554298e-05 | 25.91% | 34.98% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.200404447488137e-05 | 6.092355614417758e-05 | 25.71% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.27952734618027e-05 | 6.222057795313694e-05 | 24.85% | 33.07% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.300402060252565e-05 | 6.145479279308517e-05 | 25.96% | 35.07% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.210837511470977e-05 | 6.212990970776714e-05 | 24.33% | 32.16% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.191333606668248e-05 | 6.176405085010158e-05 | 24.60% | 32.62% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.350607343687452e-05 | 6.09613553610321e-05 | 27.00% | 36.98% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.253954564652985e-05 | 6.118946602672985e-05 | 25.87% | 34.89% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.220550520211693e-05 | 6.046883108258285e-05 | 26.44% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.288234812913995e-05 | 6.086559194851514e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.196839575122381e-05 | 6.109890468722255e-05 | 25.46% | 34.16% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.191663290814502e-05 | 6.024971062748656e-05 | 26.45% | 35.96% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.225538873975235e-05 | 6.0673947569751234e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.325470592758964e-05 | 6.021114049383146e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.152387208920414e-05 | 5.838766598850358e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.166747992629646e-05 | 5.818535163395908e-05 | 28.75% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.292456383558042e-05 | 6.066650219418695e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.283877970578877e-05 | 6.13965867593453e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.16315437396668e-05 | 6.080957531807193e-05 | 25.51% | 34.24% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.223987379899948e-05 | 6.152681982445922e-05 | 25.19% | 33.67% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.196550352010294e-05 | 6.102012109547479e-05 | 25.55% | 34.33% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.431489475056753e-05 | 6.0876450064232096e-05 | 27.80% | 38.50% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.26091212709668e-05 | 6.12711949432357e-05 | 25.83% | 34.83% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.028537546059318e-05 | 5.9679945053987706e-05 | 25.67% | 34.53% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.193302538636353e-05 | 6.19901118074846e-05 | 24.34% | 32.17% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.302082676689456e-05 | 6.0571752257095706e-05 | 27.04% | 37.06% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.410599399287703e-05 | 6.0223220900306696e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.289664339269829e-05 | 6.158656664520727e-05 | 25.71% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.327898518635638e-05 | 6.10641647916191e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.21226338529932e-05 | 6.127910837050417e-05 | 25.38% | 34.01% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.179871182855887e-05 | 6.0103943548498716e-05 | 26.52% | 36.10% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.240871194114127e-05 | 6.03633342702947e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.192926135507694e-05 | 6.0105782373000276e-05 | 26.64% | 36.31% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.183982794049471e-05 | 6.112623592059756e-05 | 25.31% | 33.89% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.247461364013947e-05 | 6.0855620172021904e-05 | 26.21% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.145200871196106e-05 | 6.036883602176715e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.240270163731342e-05 | 6.057206655519939e-05 | 26.49% | 36.04% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.170188522270842e-05 | 6.073954742684313e-05 | 25.66% | 34.51% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.174464010631686e-05 | 6.129174907747252e-05 | 25.02% | 33.37% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.424363581274513e-05 | 6.158069279722402e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.197006358576009e-05 | 6.105562823286938e-05 | 25.51% | 34.25% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.245318718939036e-05 | 6.0170784576533205e-05 | 27.02% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.14598674525449e-05 | 6.0583974002984e-05 | 25.63% | 34.46% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.967176815547012e-05 | 5.843648470642701e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.038728582652907e-05 | 5.834769884521148e-05 | 27.42% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.208553301500394e-05 | 6.039829369442206e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.132706316647871e-05 | 5.8234645074267526e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.194958213419803e-05 | 6.10462967018272e-05 | 25.51% | 34.24% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.241535458746012e-05 | 6.10384885898469e-05 | 25.94% | 35.02% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.196905008525878e-05 | 6.121337780149159e-05 | 25.32% | 33.91% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.17298383193159e-05 | 6.109188302321797e-05 | 25.25% | 33.78% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.143266574827366e-05 | 6.078094651070287e-05 | 25.36% | 33.98% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.923727885146362e-05 | 5.745183344169047e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.088500327257349e-05 | 6.01890287780394e-05 | 25.59% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.130393501572301e-05 | 5.9826485405613124e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.21625267430338e-05 | 6.146550890897575e-05 | 25.19% | 33.67% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010715455697350455 | 7.7884695648295e-05 | 27.32% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.96153606093641e-05 | 5.7551930299219345e-05 | 27.71% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.140783624259222e-05 | 6.0222790957131226e-05 | 26.02% | 35.18% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.116152702597893e-05 | 6.0336199715254506e-05 | 25.66% | 34.52% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.124745107842207e-05 | 6.050556664307744e-05 | 25.53% | 34.28% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.122748801309516e-05 | 5.9778224369593206e-05 | 26.41% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.140300722739676e-05 | 6.105837810975075e-05 | 24.99% | 33.32% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.989191752248823e-05 | 7.491857358025404e-05 | 25.00% | 33.33% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.997079477313963e-05 | 5.78103747751335e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010307101128697139 | 7.359069621298992e-05 | 28.60% | 40.06% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.182412250114438e-05 | 6.0800048570594684e-05 | 25.69% | 34.58% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.10068462877111e-05 | 5.9850938449238435e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.209061537737693e-05 | 5.991736330824162e-05 | 27.01% | 37.01% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.165903022661204e-05 | 6.076781056950024e-05 | 25.58% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.02655125921484e-05 | 6.132994569033027e-05 | 23.59% | 30.87% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.080847841677988e-05 | 5.902323867154604e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.859799611675312e-05 | 5.743726216263625e-05 | 26.92% | 36.84% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.895000319275955e-05 | 5.766566994998397e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.126600579755457e-05 | 6.050830558276442e-05 | 25.54% | 34.31% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.053997699614431e-05 | 5.864400884862508e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.129177499550509e-05 | 5.912117576582968e-05 | 27.27% | 37.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.085185537034994e-05 | 5.828823214042174e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.095446505844143e-05 | 5.7886503830423075e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.073987713275129e-05 | 5.733975367539536e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.054094636835294e-05 | 5.9038025349627365e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.745072433616554e-05 | 5.6565728770241404e-05 | 26.97% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.965826633864038e-05 | 5.840624778299748e-05 | 26.68% | 36.39% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.043739009012542e-05 | 5.726354314937087e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.08302955022355e-05 | 5.8779060934845705e-05 | 27.28% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010587511613295407 | 8.152667495033689e-05 | 23.00% | 29.87% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.94895493816294e-05 | 5.725209743542306e-05 | 27.98% | 38.84% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.047515235879133e-05 | 5.837150209456553e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.048947641030272e-05 | 5.7923306476959616e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.043531601493851e-05 | 5.858325237405438e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.968416127980274e-05 | 5.719394811358798e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.02864142358187e-05 | 5.721292826423238e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.976804489231354e-05 | 6.92643149099454e-05 | 30.57% | 44.04% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.00525940697233e-05 | 5.799280600524524e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 0.00010023892144228582 | 7.433617601471303e-05 | 25.84% | 34.85% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.190135737026516e-05 | 5.8626392425408464e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.108139452336353e-05 | 5.79455207205184e-05 | 28.53% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.125950024810618e-05 | 5.8060637058874196e-05 | 28.55% | 39.96% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.131956479014433e-05 | 5.815552257484653e-05 | 28.49% | 39.83% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.038686965603729e-05 | 5.693184291860686e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.136809358369172e-05 | 5.866405881602825e-05 | 27.90% | 38.70% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.875141040150117e-05 | 5.592423208194507e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.861621648895409e-05 | 5.610970326550653e-05 | 28.63% | 40.11% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.081124905182938e-05 | 5.827503624881302e-05 | 27.89% | 38.67% | 1.39x | ✅ |
| `hexbytes_new['']` | 7.131281614525125e-05 | 3.674571170359664e-05 | 48.47% | 94.07% | 1.94x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.334474182297979e-05 | 5.002092223893261e-05 | 46.41% | 86.61% | 1.87x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.332212376562862e-05 | 4.9688573185256294e-05 | 46.76% | 87.81% | 1.88x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.897483979299019e-05 | 4.717107068690907e-05 | 46.98% | 88.62% | 1.89x | ✅ |
| `hexbytes_new['0x']` | 7.859271584945845e-05 | 3.7248041998330384e-05 | 52.61% | 111.00% | 2.11x | ✅ |
| `hexbytes_new['0x1234']` | 8.623097748543887e-05 | 4.445432225880482e-05 | 48.45% | 93.98% | 1.94x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.534164171012035e-05 | 4.3372963790031904e-05 | 49.18% | 96.76% | 1.97x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.67185763250266e-05 | 4.455483574005099e-05 | 48.62% | 94.63% | 1.95x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.658706715658466e-05 | 4.344636172954605e-05 | 49.82% | 99.30% | 1.99x | ✅ |
| `hexbytes_new['abc']` | 8.292515782974168e-05 | 4.7843991558183755e-05 | 42.30% | 73.32% | 1.73x | ✅ |
| `hexbytes_new['deadbeef']` | 7.718485042166974e-05 | 4.04787813345739e-05 | 47.56% | 90.68% | 1.91x | ✅ |
| `hexbytes_new[0-9]` | 4.231792093549312e-05 | 2.5451141414617816e-05 | 39.86% | 66.27% | 1.66x | ✅ |
| `hexbytes_new[0]` | 0.00012300621169908922 | 6.0380405153025e-05 | 50.91% | 103.72% | 2.04x | ✅ |
| `hexbytes_new[123456]` | 0.00012830273207382816 | 6.532929183911044e-05 | 49.08% | 96.39% | 1.96x | ✅ |
| `hexbytes_new[2**16]` | 0.00012715477042007792 | 6.586500074308855e-05 | 48.20% | 93.05% | 1.93x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013127475948868122 | 7.162552601799069e-05 | 45.44% | 83.28% | 1.83x | ✅ |
| `hexbytes_new[2**32]` | 0.00012909899030330623 | 6.87847683413182e-05 | 46.72% | 87.69% | 1.88x | ✅ |
| `hexbytes_new[2**64]` | 0.00013082380064914468 | 7.23297716854257e-05 | 44.71% | 80.87% | 1.81x | ✅ |
| `hexbytes_new[2**8]` | 0.00012401706250032195 | 6.248346389739209e-05 | 49.62% | 98.48% | 1.98x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.365671612359027e-05 | 2.643552942035839e-05 | 39.45% | 65.14% | 1.65x | ✅ |
| `hexbytes_new[False]` | 5.998564665625443e-05 | 2.7018440393916153e-05 | 54.96% | 122.02% | 2.22x | ✅ |
| `hexbytes_new[True]` | 6.030799126926403e-05 | 2.7165876078291013e-05 | 54.95% | 122.00% | 2.22x | ✅ |
| `hexbytes_new[all byte values]` | 4.296420066652947e-05 | 2.6508217313219185e-05 | 38.30% | 62.08% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.2859126587784984e-05 | 2.6024256057515943e-05 | 39.28% | 64.69% | 1.65x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.318860514174584e-05 | 2.622396682693305e-05 | 39.28% | 64.69% | 1.65x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.3571666073357616e-05 | 2.5626769265913558e-05 | 41.18% | 70.02% | 1.70x | ✅ |
| `hexbytes_new[b'']` | 4.242551041226786e-05 | 2.5627476251042672e-05 | 39.59% | 65.55% | 1.66x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.291665145012345e-05 | 2.5688885937140336e-05 | 40.14% | 67.06% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.337699329369043e-05 | 2.5680748593699936e-05 | 40.80% | 68.91% | 1.69x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.340454259538618e-05 | 2.6030976413286714e-05 | 40.03% | 66.74% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.650313969787112e-05 | 3.7988764006587585e-05 | 32.77% | 48.74% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.1441968531657095e-05 | 2.5582851644495712e-05 | 38.27% | 61.99% | 1.62x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.334814660598144e-05 | 2.5473656619051085e-05 | 41.23% | 70.17% | 1.70x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.299352536456225e-05 | 2.57916928699872e-05 | 40.01% | 66.70% | 1.67x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.257729278163156e-05 | 2.5614936372892292e-05 | 39.84% | 66.22% | 1.66x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.3027180623284775e-05 | 2.5620470186368232e-05 | 40.46% | 67.94% | 1.68x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.2891169389391585e-05 | 2.636638420645834e-05 | 38.53% | 62.67% | 1.63x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.177837690782392e-05 | 3.318321308631852e-05 | 35.91% | 56.04% | 1.56x | ✅ |
| `hexbytes_new[b'abc']` | 4.2025070845850364e-05 | 2.5707930238955852e-05 | 38.83% | 63.47% | 1.63x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.857137987171737e-05 | 3.648192106839913e-05 | 46.80% | 87.96% | 1.88x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.925469430782842e-05 | 3.7684764952484636e-05 | 45.59% | 83.77% | 1.84x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.966291999385976e-05 | 3.7939080904727996e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.934033147383811e-05 | 3.7390071149242896e-05 | 46.08% | 85.45% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.913529425216894e-05 | 3.720184645744461e-05 | 46.19% | 85.84% | 1.86x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.89390375633696e-05 | 3.692158541086033e-05 | 46.44% | 86.72% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.657921329737774e-05 | 3.498702985417451e-05 | 47.45% | 90.30% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.974467984682716e-05 | 3.66649225570196e-05 | 47.43% | 90.22% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.813157795855745e-05 | 3.729734851214318e-05 | 45.26% | 82.67% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.942868792763909e-05 | 3.724968173535996e-05 | 46.35% | 86.39% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.248464725352624e-05 | 5.596309762596068e-05 | 39.49% | 65.26% | 1.65x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.871018576342032e-05 | 3.692052224340135e-05 | 46.27% | 86.10% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.944273118250012e-05 | 3.695582931162502e-05 | 46.78% | 87.91% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.969877030579308e-05 | 3.6792067649256717e-05 | 47.21% | 89.44% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.835225734833033e-05 | 3.652445295009898e-05 | 46.56% | 87.14% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.983915410011755e-05 | 3.773740761299638e-05 | 45.97% | 85.07% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.926805350883918e-05 | 3.822801460354347e-05 | 44.81% | 81.20% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.635688718709579e-05 | 5.193362604467308e-05 | 39.86% | 66.28% | 1.66x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.813005150075139e-05 | 3.740022913282253e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.709562230016446e-05 | 5.017746402674249e-05 | 42.39% | 73.58% | 1.74x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.950971618754891e-05 | 3.7842997732392495e-05 | 45.56% | 83.68% | 1.84x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.820170256215343e-05 | 3.6597542872320416e-05 | 46.34% | 86.36% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.841474700339718e-05 | 3.755793028274776e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.878712014857778e-05 | 3.769801178153598e-05 | 45.20% | 82.47% | 1.82x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.819899415354758e-05 | 3.719801693516349e-05 | 45.46% | 83.34% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.966693798531093e-05 | 3.726643545910852e-05 | 46.51% | 86.94% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.92218372941298e-05 | 3.7608169166181365e-05 | 45.67% | 84.06% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.962209900488615e-05 | 3.780280228059994e-05 | 45.70% | 84.17% | 1.84x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.920861849182834e-05 | 3.749633921084595e-05 | 45.82% | 84.57% | 1.85x | ✅ |
| `hexbytes_new[long alternating]` | 5.159495132199906e-05 | 3.308769512154607e-05 | 35.87% | 55.93% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.287889860728582e-05 | 4.2727305077680735e-05 | 48.45% | 93.97% | 1.94x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.171808752874566e-05 | 4.3136149613718545e-05 | 47.21% | 89.44% | 1.89x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.256301601316813e-05 | 4.367906161584491e-05 | 47.10% | 89.02% | 1.89x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.272460297603305e-05 | 4.260909824084246e-05 | 48.49% | 94.15% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.311275038620333e-05 | 4.273833763646143e-05 | 48.58% | 94.47% | 1.94x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.241427164965519e-05 | 4.26381348909767e-05 | 48.26% | 93.29% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.068140800595341e-05 | 4.022441332458065e-05 | 50.14% | 100.58% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.23535183161755e-05 | 4.257693218557696e-05 | 48.30% | 93.42% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.227866961361686e-05 | 4.2242032737624914e-05 | 48.66% | 94.78% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.367759081857251e-05 | 4.334902829685653e-05 | 48.20% | 93.03% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010710661932177443 | 6.275219850187019e-05 | 41.41% | 70.68% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.314378913028096e-05 | 4.2693573205169005e-05 | 48.65% | 94.75% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.176646614151828e-05 | 4.2635709961958026e-05 | 47.86% | 91.78% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.286830867871187e-05 | 4.346485853398484e-05 | 47.55% | 90.66% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.248276209488502e-05 | 4.325699180190259e-05 | 47.56% | 90.68% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.204779702012512e-05 | 4.270990821086162e-05 | 47.95% | 92.10% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.2459388711959e-05 | 4.284519058772579e-05 | 48.04% | 92.46% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010010044393146698 | 5.68532917622124e-05 | 43.20% | 76.07% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.274411400721749e-05 | 4.335850610109714e-05 | 47.60% | 90.84% | 1.91x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.00010076537341216057 | 5.723866681298617e-05 | 43.20% | 76.04% | 1.76x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.454846887039537e-05 | 4.294932863552669e-05 | 49.20% | 96.86% | 1.97x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.245803357250002e-05 | 4.275896508601862e-05 | 48.14% | 92.84% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.226666862613707e-05 | 4.322120909722521e-05 | 47.46% | 90.34% | 1.90x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.264503383990198e-05 | 4.313333596788622e-05 | 47.81% | 91.60% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.17596790228505e-05 | 4.3143714944438304e-05 | 47.23% | 89.51% | 1.90x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.327484685864827e-05 | 4.298848906873776e-05 | 48.38% | 93.71% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.264911074652624e-05 | 4.262318789190444e-05 | 48.43% | 93.91% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.400966988362832e-05 | 4.5119517305945794e-05 | 46.29% | 86.19% | 1.86x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.250392366393075e-05 | 4.233908895521254e-05 | 48.68% | 94.86% | 1.95x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3211471558634816e-05 | 2.6457080181705535e-05 | 38.77% | 63.33% | 1.63x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.2444978553650595e-05 | 2.557214861869313e-05 | 39.75% | 65.98% | 1.66x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.268600620202398e-05 | 2.5555415866223987e-05 | 40.13% | 67.03% | 1.67x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.301294462221504e-05 | 2.547051792056463e-05 | 40.78% | 68.87% | 1.69x | ✅ |
| `hexbytes_new[palindrome]` | 4.2689947302116406e-05 | 2.562523538297266e-05 | 39.97% | 66.59% | 1.67x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.4628749000750453e-05 | 2.6336091031623872e-05 | 40.99% | 69.46% | 1.69x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2341900454552596e-05 | 2.5345621179626575e-05 | 40.14% | 67.06% | 1.67x | ✅ |
| `hexbytes_new[single null byte]` | 4.2525391463418224e-05 | 2.523053461995226e-05 | 40.67% | 68.55% | 1.69x | ✅ |
| `hexbytes_new[two patterns]` | 4.369902588475111e-05 | 2.6249559665532792e-05 | 39.93% | 66.48% | 1.66x | ✅ |
| `hexbytes_repr[0-9]` | 2.9187304621569174e-05 | 1.4767182477565945e-05 | 49.41% | 97.65% | 1.98x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012095054334785625 | 4.073080271460914e-05 | 66.32% | 196.95% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012079475715495627 | 4.080656330244894e-05 | 66.22% | 196.02% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.879247173946032e-05 | 1.972718656821867e-05 | 59.57% | 147.34% | 2.47x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.907386938716735e-05 | 2.0031776270147567e-05 | 59.18% | 144.98% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.037500615403e-05 | 1.798608584618184e-05 | 55.45% | 124.48% | 2.24x | ✅ |
| `hexbytes_repr[b'']` | 2.1374154054112182e-05 | 1.1996002272361253e-05 | 43.88% | 78.18% | 1.78x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.6706308348955985e-05 | 1.672493529541419e-05 | 54.44% | 119.47% | 2.19x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.629904158189077e-05 | 1.445360420518436e-05 | 45.04% | 81.95% | 1.82x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.156156128892413e-05 | 2.3513707607178435e-05 | 61.80% | 161.81% | 2.62x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007640247680792069 | 0.00022208838299627866 | 70.93% | 244.02% | 3.44x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.641780942028035e-05 | 1.3975240327200895e-05 | 47.10% | 89.03% | 1.89x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.706146425852074e-05 | 1.3944181015269194e-05 | 48.47% | 94.07% | 1.94x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8317761728101958e-05 | 1.452182530084492e-05 | 48.72% | 95.00% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8246804651327292e-05 | 1.449871519197123e-05 | 48.67% | 94.82% | 1.95x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6556674396914108e-05 | 1.3960063447599712e-05 | 47.43% | 90.23% | 1.90x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.906146813993663e-05 | 1.9941398499679938e-05 | 59.35% | 146.03% | 2.46x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0003943572048768505 | 0.00011920687747521057 | 69.77% | 230.82% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 2.636133273036128e-05 | 1.4088210523049315e-05 | 46.56% | 87.12% | 1.87x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004009027828012222 | 0.00012224040825631327 | 69.51% | 227.96% | 3.28x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.74906938816574e-05 | 3.389073299281704e-05 | 65.24% | 187.66% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8980901472739657e-05 | 1.4768078790974174e-05 | 49.04% | 96.24% | 1.96x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7497650007931497e-05 | 1.4206513090344305e-05 | 48.34% | 93.56% | 1.94x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7167873682963378e-05 | 1.4074426174185583e-05 | 48.19% | 93.03% | 1.93x | ✅ |
| `hexbytes_repr[palindrome]` | 3.1805676812776164e-05 | 1.569448214240066e-05 | 50.66% | 102.66% | 2.03x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.202144388762241e-05 | 2.3521573515010182e-05 | 62.08% | 163.68% | 2.64x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5682551238886384e-05 | 1.3670211707782565e-05 | 46.77% | 87.87% | 1.88x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5739552433113837e-05 | 1.3692272049884517e-05 | 46.80% | 87.99% | 1.88x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8869286458867283e-05 | 1.9801979955166373e-05 | 59.48% | 146.79% | 2.47x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5507100781739503e-05 | 1.3720889616615897e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.160869849896216e-05 | 3.9532899704882e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.203209895051505e-05 | 3.966634079237324e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0528765549755123e-05 | 1.9060867073581375e-05 | 7.15% | 7.70% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0541844460125804e-05 | 1.904253573168782e-05 | 7.30% | 7.87% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8883281837479487e-05 | 1.7089710073088742e-05 | 9.50% | 10.50% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0087661560853127e-05 | 1.1426056170392028e-05 | -13.27% | -11.71% | 0.88x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.755908759655568e-05 | 1.588403147533557e-05 | 9.54% | 10.55% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4788934788884675e-05 | 1.3202085566789468e-05 | 10.73% | 12.02% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5236715245189543e-05 | 2.275266905241282e-05 | 9.84% | 10.92% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022311016033142175 | 0.00022127130409725708 | 0.82% | 0.83% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.479442719469979e-05 | 1.2880539704547602e-05 | 12.94% | 14.86% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5002000816647791e-05 | 1.3125483134257102e-05 | 12.51% | 14.30% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5185757284642895e-05 | 1.35887309395344e-05 | 10.52% | 11.75% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5156579193448804e-05 | 1.3370986444776743e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4873734311867481e-05 | 1.316189826343049e-05 | 11.51% | 13.01% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0543926774309124e-05 | 1.924749086826406e-05 | 6.31% | 6.74% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012653994401341594 | 0.00012202280081000878 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4669784406308202e-05 | 1.2947219349042556e-05 | 11.74% | 13.30% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001223113650088322 | 0.00012160198987206701 | 0.58% | 0.58% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4854023484979934e-05 | 3.302895178778691e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5497808532987216e-05 | 1.379875391961279e-05 | 10.96% | 12.31% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5222916836600922e-05 | 1.3193096140767923e-05 | 13.33% | 15.39% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.4942441585811032e-05 | 1.317183261852326e-05 | 11.85% | 13.44% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6303881224814978e-05 | 1.475977400827135e-05 | 9.47% | 10.46% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5400406723852176e-05 | 2.286319150446288e-05 | 9.99% | 11.10% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4636139161965622e-05 | 1.2782157128082903e-05 | 12.67% | 14.50% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.456926841651575e-05 | 1.261913417901959e-05 | 13.39% | 15.45% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0577188057685784e-05 | 1.899111175092068e-05 | 7.71% | 8.35% | 1.08x | ✅ |
