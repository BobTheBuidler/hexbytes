#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4754881906208523e-05 | 2.36101290408267e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.478487193494239e-05 | 2.3431113403435642e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.470368766320023e-05 | 2.364275939613159e-05 | 4.29% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4896610380112766e-05 | 2.361363987671643e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4731110648896462e-05 | 2.370604565036118e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4661189514374503e-05 | 2.3727241339910318e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.459202631467664e-05 | 2.3764809506726955e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4694652962089537e-05 | 2.3592214347367266e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.47202669441009e-05 | 2.3629964039164815e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4526826059437435e-05 | 2.340732067475789e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.450398621063975e-05 | 2.3638475156303192e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4684590057352116e-05 | 2.3653271956331653e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4751953902601515e-05 | 2.3555827154925643e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4720320137424888e-05 | 2.3647478742445188e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.468165859865056e-05 | 2.3423259512719994e-05 | 5.10% | 5.37% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4377689073240468e-05 | 2.3658937275614014e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4695952401237492e-05 | 2.366338024547864e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4800231674423054e-05 | 2.3452005299177345e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.464127714730724e-05 | 2.349964519133728e-05 | 4.63% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.490234386622281e-05 | 2.3673651752844787e-05 | 4.93% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.471712311112505e-05 | 2.3538268903849502e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4969699866733358e-05 | 2.3674475003669625e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4720960424348795e-05 | 2.35198337052224e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4730699765237392e-05 | 2.361908106747321e-05 | 4.49% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4778248510655504e-05 | 2.371700090864329e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4925916740350813e-05 | 2.355574189183202e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3574485924826352e-05 | 2.233714169508928e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3688561803606983e-05 | 2.2437420454966476e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3815792609252528e-05 | 2.225711666626083e-05 | 6.54% | 7.00% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3598852107127032e-05 | 2.2335021439197906e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3662492195827045e-05 | 2.2482525217041793e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3794392693218644e-05 | 2.230096771135748e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.365388249112569e-05 | 2.2362793690086348e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.373522166087113e-05 | 2.2352927595969076e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3810309165051318e-05 | 2.2268803262158138e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3865380270337903e-05 | 2.2433777460444585e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3687567012699863e-05 | 2.2142043598113183e-05 | 6.52% | 6.98% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3665175268832828e-05 | 2.22770555775527e-05 | 5.87% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.375633959321337e-05 | 2.210544040276182e-05 | 6.95% | 7.47% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.366345837231524e-05 | 2.2282313631059953e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3813665988852002e-05 | 2.225609869629857e-05 | 6.54% | 7.00% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.38010661143064e-05 | 2.23844079908076e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.387913994799082e-05 | 2.2221621747005114e-05 | 6.94% | 7.46% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3405791927593618e-05 | 2.238444648865565e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3848708237134662e-05 | 2.2604184928612543e-05 | 5.22% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3611310275487704e-05 | 2.2304260956267688e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3775802467868507e-05 | 2.249233952309131e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.388396453925264e-05 | 2.2408350203997427e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3615511099754482e-05 | 2.229416988361859e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3769869763035617e-05 | 2.2262362266245086e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.365069434437882e-05 | 2.2545686539260675e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3764204532388718e-05 | 2.231888352301192e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3688530707151423e-05 | 2.2451306821425064e-05 | 5.22% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.36301805484756e-05 | 2.2420918565641907e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.329318114513981e-05 | 2.2595021861281157e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.350705450220431e-05 | 2.241064176845273e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3514594342731333e-05 | 2.2383803789615347e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3456498513295538e-05 | 2.2794411416332482e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.33792320107034e-05 | 2.258775699764005e-05 | 3.39% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3534967809989544e-05 | 2.2409397832567892e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.357479555109983e-05 | 2.2443906695829757e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3748749032151378e-05 | 2.2240414077822714e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3662733513615578e-05 | 2.2441215871707897e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3709492840837744e-05 | 2.24685964209688e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.36027222668159e-05 | 2.2380020102669342e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3597789003283424e-05 | 2.2288636831188665e-05 | 5.55% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3691764469992e-05 | 2.2299293834068118e-05 | 5.88% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3826422020934128e-05 | 2.2412189972717277e-05 | 5.94% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.353906005495418e-05 | 2.2392269446532264e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.365230211027973e-05 | 2.2245732835752976e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3484244683977175e-05 | 2.236002527981225e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3704651914080182e-05 | 2.2448525457870448e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3598917101884618e-05 | 2.227244048933691e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3621775771809625e-05 | 2.2583749485366612e-05 | 4.39% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3693149230133233e-05 | 2.252206198034193e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3691940669726937e-05 | 2.239498737455051e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.365400554007733e-05 | 2.2371409895768863e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3675183340500855e-05 | 2.2237579616887215e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3692106062427222e-05 | 2.2339301694125923e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.347440318738751e-05 | 2.2597520456767633e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.355688845962313e-05 | 2.4261384212057037e-05 | -2.99% | -2.90% | 0.97x | ❌ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3608846660519697e-05 | 2.2332800032368067e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.36165716399943e-05 | 2.246791718745253e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3440142543499264e-05 | 2.2397256602394565e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.356465073497173e-05 | 2.243608283580368e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3505508604959207e-05 | 2.241275927913798e-05 | 4.65% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3589922841261772e-05 | 2.257320642403751e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.355475482912007e-05 | 2.2477188683986006e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.346727600324626e-05 | 2.2506590017179802e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.353005129369121e-05 | 2.2395722305092045e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.33074531422992e-05 | 2.237412942444611e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.321343591275329e-05 | 2.254406730437095e-05 | 2.88% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3527214043220956e-05 | 2.2674214666592336e-05 | 3.63% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.337044839325868e-05 | 2.2452453944729094e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.340673201496728e-05 | 2.240066612867552e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.360131229298037e-05 | 2.2244556857409582e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3665018000383798e-05 | 2.5125172281399264e-05 | -6.17% | -5.81% | 0.94x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.380289567004414e-05 | 2.245531909896443e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3655027207555663e-05 | 2.2388121833366522e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3737811757973662e-05 | 2.257145841923933e-05 | 4.91% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3642536640876452e-05 | 2.2526284317449725e-05 | 4.72% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.372753651435304e-05 | 2.2493329098700958e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3571672631195312e-05 | 2.253551626081466e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3547101832961222e-05 | 2.268268239536875e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3513220158121124e-05 | 2.227612777128761e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.340848905314925e-05 | 2.272821272161723e-05 | 2.91% | 2.99% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3576010352500134e-05 | 2.249933017323468e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.385000037840209e-05 | 2.2461119585210943e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3775252516393495e-05 | 2.248610239277294e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3620665725476133e-05 | 2.250075635537158e-05 | 4.74% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3541084222772135e-05 | 2.2464470518704077e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.346174931499305e-05 | 2.27957074799885e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3501243476908307e-05 | 2.2709342294336463e-05 | 3.37% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3555799904401475e-05 | 2.251219930254488e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.36993936183925e-05 | 2.264406873357705e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.378989579510454e-05 | 2.2989998400409215e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3634821435136594e-05 | 2.254072400583579e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.37200861957124e-05 | 2.2621822198159395e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.360496022752374e-05 | 2.2543848811819762e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.368350687795692e-05 | 2.2719638182910784e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3523289950363346e-05 | 2.248615551782306e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.354283917780575e-05 | 2.2464599159274333e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3579060017179824e-05 | 2.3978434677375887e-05 | -1.69% | -1.67% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3553754771224537e-05 | 2.282347126921508e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3750767141469264e-05 | 2.252582817330135e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.4650124072047144e-05 | 2.2396818517852645e-05 | 9.14% | 10.06% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.352077990326374e-05 | 2.274978676995817e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3587277870466196e-05 | 2.2615664850080164e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.408347461178827e-05 | 2.2835377243803067e-05 | 5.18% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3418577625506303e-05 | 2.2858807369489183e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3537196825790606e-05 | 2.2213506018573626e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3580105863717855e-05 | 2.230762278912365e-05 | 5.40% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3519478645725014e-05 | 2.2309578514028877e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.350723066814595e-05 | 2.246099095156534e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3685751734765844e-05 | 2.225148850941126e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.360457143146751e-05 | 2.2434029009138264e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3472392098610384e-05 | 2.2295223659813942e-05 | 5.02% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3047541559492632e-05 | 2.2170109285260752e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3743269875918887e-05 | 2.2303072436209178e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3478806726330697e-05 | 2.2301505267799543e-05 | 5.01% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.368720722307953e-05 | 2.2299659819566278e-05 | 5.86% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3515450278779338e-05 | 2.2334273562173423e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3499989406680296e-05 | 2.2232979503789415e-05 | 5.39% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.343938543778619e-05 | 2.2285731820629667e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3570199560485246e-05 | 2.238697799496658e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3729716972989387e-05 | 2.2674647575012118e-05 | 4.45% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3545089639028536e-05 | 2.2284937116599952e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.370522311246462e-05 | 2.226328353102064e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.372963640010582e-05 | 2.2155294143450594e-05 | 6.63% | 7.11% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3624213413572695e-05 | 2.2213138820311965e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3628146410634584e-05 | 2.2408982601033284e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.373264530951133e-05 | 2.2480844769105957e-05 | 5.27% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3602017481047336e-05 | 2.229941549805124e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3379511339428266e-05 | 2.247616470088032e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3576271504153953e-05 | 2.2634634900502964e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.373751669879084e-05 | 2.2234757221157685e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3745904341684655e-05 | 2.2399087543428368e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3691694466209017e-05 | 2.248142929640372e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3741275431181503e-05 | 2.2646020538464026e-05 | 4.61% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3633107982612668e-05 | 2.2275880076416084e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3710655249171262e-05 | 2.2344529408669472e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3730829173121472e-05 | 2.2404394033385047e-05 | 5.59% | 5.92% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3889296541693285e-05 | 2.2265206377808846e-05 | 6.80% | 7.29% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.36967651856715e-05 | 2.2562358699335254e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3507004000068462e-05 | 2.2543062239345965e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3991399752071886e-05 | 2.2383703385345844e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3742833746834207e-05 | 2.24864625182179e-05 | 5.29% | 5.59% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3786383813608743e-05 | 2.2349265596003387e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3569618000652596e-05 | 2.2358560365411047e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3655680235117278e-05 | 2.239778922748858e-05 | 5.32% | 5.62% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3812073408732064e-05 | 2.2412318671355585e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3765649823838392e-05 | 2.2320559177681606e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.30388151247685e-05 | 5.974196772849583e-05 | 28.06% | 39.00% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.375297990090131e-05 | 5.958217706474068e-05 | 28.86% | 40.57% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.361016821467982e-05 | 6.0172421187179344e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.30170166865535e-05 | 6.0370870116860724e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.313613171986278e-05 | 5.940580507392356e-05 | 28.54% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.296036855893063e-05 | 6.025149743431761e-05 | 27.37% | 37.69% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.135824719250991e-05 | 5.726857262743525e-05 | 29.61% | 42.06% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.220942673884756e-05 | 5.979658253378586e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.43643196448106e-05 | 6.004223358590643e-05 | 28.83% | 40.51% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.360289000301351e-05 | 5.962791279112184e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.265773682881185e-05 | 5.978796441306175e-05 | 27.67% | 38.25% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.319841360473207e-05 | 6.030960284287987e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.344373454053871e-05 | 5.929052449074296e-05 | 28.95% | 40.74% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.372106489945515e-05 | 5.920325731823158e-05 | 29.29% | 41.41% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.385600977202209e-05 | 5.9297395569426354e-05 | 29.29% | 41.42% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.314562369115489e-05 | 5.9369384408174854e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.332756490504269e-05 | 5.900826063304261e-05 | 29.19% | 41.21% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.312618840000476e-05 | 5.979495487066626e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.385703515856632e-05 | 6.028367402120767e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.364521787093274e-05 | 5.958557071333933e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.32932185994307e-05 | 6.0332581149115977e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.242906111749164e-05 | 5.981759992529685e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.385359967614687e-05 | 6.011068171486642e-05 | 28.31% | 39.50% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.40005908681848e-05 | 6.0068371114253004e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.518531691242643e-05 | 5.828737874627635e-05 | 31.58% | 46.15% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.538738885111364e-05 | 6.0281931253483786e-05 | 29.40% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.145036963290045e-05 | 5.8040992196251164e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.14418854953201e-05 | 5.8324130551876356e-05 | 28.39% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.589874325598071e-05 | 6.030384954395382e-05 | 29.80% | 42.44% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.454347599108936e-05 | 6.0587200907338523e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.45122004434002e-05 | 6.044426402384052e-05 | 28.48% | 39.82% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.392720968203999e-05 | 6.006694418480193e-05 | 28.43% | 39.72% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.499767119133119e-05 | 6.039528397418928e-05 | 28.94% | 40.74% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.456780765164754e-05 | 6.047287582876879e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.363027101268132e-05 | 6.001081544155575e-05 | 28.24% | 39.36% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.209503181091495e-05 | 5.7231600261878467e-05 | 30.29% | 43.44% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.429138601626187e-05 | 5.986777553262876e-05 | 28.98% | 40.80% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.449139418748611e-05 | 5.981647480210914e-05 | 29.20% | 41.25% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.41043787367813e-05 | 6.0102154281623076e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.463946603446461e-05 | 6.072507685626701e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.436062131286568e-05 | 6.042550742000852e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.407275288164303e-05 | 6.0208376267930425e-05 | 28.39% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.40359606450767e-05 | 5.9637132612793676e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.446455676838324e-05 | 6.021461019475137e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.441565492876512e-05 | 5.981740930704092e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.432145460865879e-05 | 6.013070263305703e-05 | 28.69% | 40.23% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.4256050816817e-05 | 6.055887485150245e-05 | 28.13% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.415672929454271e-05 | 6.040766485263629e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.460227761173369e-05 | 5.989251035535988e-05 | 29.21% | 41.26% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.303167669890931e-05 | 6.095096365297069e-05 | 26.59% | 36.23% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.42567242483147e-05 | 6.0837107937451675e-05 | 27.80% | 38.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.24238298322723e-05 | 6.026642387182083e-05 | 26.88% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.289118892881509e-05 | 6.009400343034516e-05 | 27.50% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.420060892436717e-05 | 5.976776123120024e-05 | 29.02% | 40.88% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.361435829002896e-05 | 5.988689040248024e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.207450641949347e-05 | 5.903174259825323e-05 | 28.08% | 39.03% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.15964000853899e-05 | 5.880622964172609e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.324148780953776e-05 | 6.018653663487212e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.43259519664925e-05 | 6.0631605718717184e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.355265614590987e-05 | 6.049882645663349e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.368752384188281e-05 | 6.0679565159777985e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.362879922802444e-05 | 6.089356041028733e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.305002411217038e-05 | 6.083435095464481e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.38274511249871e-05 | 6.219255540865889e-05 | 25.81% | 34.79% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.140288169666229e-05 | 5.787470290294113e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.30974847167894e-05 | 6.0225606615435476e-05 | 27.52% | 37.98% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.418443490975507e-05 | 5.958848967385628e-05 | 29.22% | 41.28% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.39191268148017e-05 | 6.050497942396702e-05 | 27.90% | 38.70% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.377991672370648e-05 | 6.129063686565741e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.429650567750775e-05 | 6.03085623201959e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.212733293390555e-05 | 6.024597141305707e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.349126006658662e-05 | 6.033781134604746e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.298766019753463e-05 | 6.0303527702103845e-05 | 27.33% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.375833712101175e-05 | 6.025837024860317e-05 | 28.06% | 39.00% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.279296606100152e-05 | 6.0354741832947256e-05 | 27.10% | 37.18% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.369726598136753e-05 | 6.0787394416353865e-05 | 27.37% | 37.69% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.33975953078815e-05 | 6.0670448482286404e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.325772790077907e-05 | 6.063150973065067e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.336834648226309e-05 | 6.0960333270751124e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.346109580505115e-05 | 6.075849272150297e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.367838453083825e-05 | 6.0235235916563827e-05 | 28.02% | 38.92% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.401544476774352e-05 | 6.0745205829970156e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.302556042199684e-05 | 6.036305062778827e-05 | 27.30% | 37.54% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.389499292946268e-05 | 6.025498283485574e-05 | 28.18% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.198046013101483e-05 | 5.807917593293117e-05 | 29.15% | 41.15% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.18057217505065e-05 | 5.801160666238077e-05 | 29.09% | 41.02% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.341036824341767e-05 | 6.058446907631278e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.056142928069139e-05 | 5.932610690953358e-05 | 26.36% | 35.79% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.280384736939069e-05 | 6.0699500740082045e-05 | 26.69% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.318570478366326e-05 | 6.0518874594629106e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.340139295848626e-05 | 5.9419763708352866e-05 | 28.75% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.343246143411365e-05 | 5.907229085978559e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.32739689693414e-05 | 5.872746802326737e-05 | 29.48% | 41.80% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 8.075462932427068e-05 | 5.7308668677736426e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.298614165392246e-05 | 6.0000392148342656e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.262015444463298e-05 | 5.968463608963788e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.321795590988354e-05 | 6.018480210622123e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010297547772419773 | 8.097321901724279e-05 | 21.37% | 27.17% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.044619363413883e-05 | 5.692465072729741e-05 | 29.24% | 41.32% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.327160135354066e-05 | 5.9627418448974144e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.23954223852242e-05 | 5.924491540849989e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.255868352253954e-05 | 5.879546558138738e-05 | 28.78% | 40.42% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.292055283612205e-05 | 5.9710332670067847e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.239734798712192e-05 | 5.922418072815931e-05 | 28.12% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.886175605970168e-05 | 7.357511382990991e-05 | 25.58% | 34.37% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.137093460040369e-05 | 5.734148142472723e-05 | 29.53% | 41.91% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010120346073662373 | 7.309737544020189e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.362987563184948e-05 | 5.9967447105371136e-05 | 28.29% | 39.46% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.15080897020665e-05 | 5.924169816872563e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.27725892009646e-05 | 5.923130601459847e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.26703357927777e-05 | 5.876092471873986e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.208866877468639e-05 | 5.880220555716517e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.376995296961262e-05 | 5.999609341153718e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.133537076097424e-05 | 5.642052344160219e-05 | 30.63% | 44.16% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 8.13738318311498e-05 | 5.616877701865991e-05 | 30.97% | 44.87% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.373585746322378e-05 | 5.9153407585947314e-05 | 29.36% | 41.56% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.194370514057105e-05 | 5.783746275315815e-05 | 29.42% | 41.68% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.2155750785384e-05 | 5.928462178174182e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.238038387224774e-05 | 5.941041951294707e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.213782279833962e-05 | 5.853302875060524e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.166474895011831e-05 | 5.851202699107647e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.127557261584109e-05 | 5.8510536960492956e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.864901946742648e-05 | 5.491276865981801e-05 | 30.18% | 43.23% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.140027224461524e-05 | 5.77354184890508e-05 | 29.07% | 40.99% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.136487169570919e-05 | 5.875159434414076e-05 | 27.79% | 38.49% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.175923869798613e-05 | 5.8572683798405825e-05 | 28.36% | 39.59% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010602691890342189 | 7.939717078611532e-05 | 25.12% | 33.54% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.196324379198659e-05 | 5.82050245295629e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.162627816565408e-05 | 5.843637970522368e-05 | 28.41% | 39.68% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.21471987960966e-05 | 5.77016628951427e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.176050058478607e-05 | 5.815095674391131e-05 | 28.88% | 40.60% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.151977191004657e-05 | 5.835655718975721e-05 | 28.41% | 39.69% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.113492237307905e-05 | 5.7470397829917084e-05 | 29.17% | 41.18% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.883113051157147e-05 | 7.245412861541862e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.202072545230366e-05 | 5.7844334915116016e-05 | 29.48% | 41.80% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 0.0001013935034848419 | 7.33083477501886e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.186370183391493e-05 | 5.89571046497168e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.191113723497395e-05 | 5.7948580598685945e-05 | 29.25% | 41.35% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.214716583361791e-05 | 5.843134069166401e-05 | 28.87% | 40.59% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.31435042714451e-05 | 5.8094353359514036e-05 | 30.13% | 43.12% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.12891802447415e-05 | 5.8349632564492215e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.17021352982232e-05 | 5.796983590232829e-05 | 29.05% | 40.94% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.988367261327101e-05 | 5.598729192832613e-05 | 29.91% | 42.68% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 8.021587345609672e-05 | 5.5331935433973326e-05 | 31.02% | 44.97% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.190176510660492e-05 | 5.8478507299448175e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_new['']` | 7.14638036365002e-05 | 3.6254154599672435e-05 | 49.27% | 97.12% | 1.97x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.287994327804942e-05 | 4.905492313816793e-05 | 47.18% | 89.34% | 1.89x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.321101875013893e-05 | 4.907705730375601e-05 | 47.35% | 89.93% | 1.90x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.872338912007005e-05 | 4.547720480524316e-05 | 48.74% | 95.09% | 1.95x | ✅ |
| `hexbytes_new['0x']` | 7.886365084985266e-05 | 3.715100207527047e-05 | 52.89% | 112.28% | 2.12x | ✅ |
| `hexbytes_new['0x1234']` | 8.623872816433201e-05 | 4.44025907047815e-05 | 48.51% | 94.22% | 1.94x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.614830473507889e-05 | 4.3958294405919485e-05 | 48.97% | 95.98% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.660338990843487e-05 | 4.4100506224403834e-05 | 49.08% | 96.38% | 1.96x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.635821698080613e-05 | 4.359479135929844e-05 | 49.52% | 98.09% | 1.98x | ✅ |
| `hexbytes_new['abc']` | 8.363837584385083e-05 | 4.6575349075679855e-05 | 44.31% | 79.58% | 1.80x | ✅ |
| `hexbytes_new['deadbeef']` | 7.768718423786706e-05 | 4.0718143640317914e-05 | 47.59% | 90.79% | 1.91x | ✅ |
| `hexbytes_new[0-9]` | 4.229327079289703e-05 | 2.6189287292384018e-05 | 38.08% | 61.49% | 1.61x | ✅ |
| `hexbytes_new[0]` | 0.00012447587940273987 | 6.0997476835458304e-05 | 51.00% | 104.07% | 2.04x | ✅ |
| `hexbytes_new[123456]` | 0.00012414348762016447 | 6.591816487667816e-05 | 46.90% | 88.33% | 1.88x | ✅ |
| `hexbytes_new[2**16]` | 0.00012762085052898652 | 6.546162987682679e-05 | 48.71% | 94.96% | 1.95x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013409927717393524 | 7.26471338089095e-05 | 45.83% | 84.59% | 1.85x | ✅ |
| `hexbytes_new[2**32]` | 0.00013075663267241125 | 6.891864001718936e-05 | 47.29% | 89.73% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.00013297397159393057 | 7.225898091470653e-05 | 45.66% | 84.02% | 1.84x | ✅ |
| `hexbytes_new[2**8]` | 0.0001269265283021604 | 6.288189451941512e-05 | 50.46% | 101.85% | 2.02x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.424933432149152e-05 | 2.7030373969690305e-05 | 38.91% | 63.70% | 1.64x | ✅ |
| `hexbytes_new[False]` | 6.206981214971313e-05 | 2.7338314186684588e-05 | 55.96% | 127.04% | 2.27x | ✅ |
| `hexbytes_new[True]` | 6.150845034740875e-05 | 2.7261251975765582e-05 | 55.68% | 125.63% | 2.26x | ✅ |
| `hexbytes_new[all byte values]` | 4.322321422405936e-05 | 2.7028676889111198e-05 | 37.47% | 59.92% | 1.60x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.318138167377625e-05 | 2.6125129045523777e-05 | 39.50% | 65.29% | 1.65x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.491875282572908e-05 | 2.663429475686673e-05 | 40.71% | 68.65% | 1.69x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.3688227632488575e-05 | 2.6074002344376176e-05 | 40.32% | 67.55% | 1.68x | ✅ |
| `hexbytes_new[b'']` | 4.27567283052601e-05 | 2.5998521918589314e-05 | 39.19% | 64.46% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.3667982472232435e-05 | 2.6417868318576768e-05 | 39.50% | 65.30% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.2964947713059645e-05 | 2.6608183224598657e-05 | 38.07% | 61.47% | 1.61x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.376604389693765e-05 | 2.64491821237421e-05 | 39.57% | 65.47% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.540759626494421e-05 | 3.874432058338106e-05 | 30.07% | 43.01% | 1.43x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2874337547385384e-05 | 2.6122196462722696e-05 | 39.07% | 64.13% | 1.64x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2539045725741594e-05 | 2.6071966965298128e-05 | 38.71% | 63.16% | 1.63x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.271227931088447e-05 | 2.6085148895624344e-05 | 38.93% | 63.74% | 1.64x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.330706012723817e-05 | 2.612571216773257e-05 | 39.67% | 65.76% | 1.66x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.290179181665324e-05 | 2.617464481603589e-05 | 38.99% | 63.91% | 1.64x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3763422880254916e-05 | 2.6631925494023984e-05 | 39.15% | 64.33% | 1.64x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0996850466108756e-05 | 3.315920795510173e-05 | 34.98% | 53.79% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 4.312344796893197e-05 | 2.6397335472610203e-05 | 38.79% | 63.36% | 1.63x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.95555467674014e-05 | 3.787057907977333e-05 | 45.55% | 83.67% | 1.84x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.033810763053322e-05 | 3.8262071396141393e-05 | 45.60% | 83.83% | 1.84x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.992101743916858e-05 | 3.861889486211478e-05 | 44.77% | 81.05% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.975086024358698e-05 | 3.796567324586105e-05 | 45.57% | 83.72% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.977925005524052e-05 | 3.8007883339629135e-05 | 45.53% | 83.59% | 1.84x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.91287659557757e-05 | 3.75018620534071e-05 | 45.75% | 84.33% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.733192041830041e-05 | 3.590439204503096e-05 | 46.68% | 87.53% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 7.004709397931802e-05 | 3.747602878282135e-05 | 46.50% | 86.91% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.009933825365818e-05 | 3.7876488164147304e-05 | 45.97% | 85.07% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.983202728868121e-05 | 3.841461380354141e-05 | 44.99% | 81.79% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.150336627404717e-05 | 5.591526537763019e-05 | 38.89% | 63.65% | 1.64x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.063389487397726e-05 | 3.773388102263764e-05 | 46.58% | 87.19% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.99340591666782e-05 | 3.816299995835928e-05 | 45.43% | 83.25% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.913010985696697e-05 | 3.795018571018686e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.94580309780633e-05 | 3.737236839794092e-05 | 46.19% | 85.85% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.98104776195999e-05 | 3.805968160332621e-05 | 45.48% | 83.42% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.93433961727389e-05 | 3.808602398676135e-05 | 45.08% | 82.07% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.577753287473044e-05 | 4.940095330343995e-05 | 42.41% | 73.64% | 1.74x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.86498958009881e-05 | 3.740953128780973e-05 | 45.51% | 83.51% | 1.84x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.583357432264511e-05 | 4.96066843390949e-05 | 42.21% | 73.03% | 1.73x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.996455194799104e-05 | 3.8434577296362995e-05 | 45.07% | 82.04% | 1.82x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.936167396151872e-05 | 3.770843136921391e-05 | 45.64% | 83.94% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.930844696518391e-05 | 3.7852213938648755e-05 | 45.39% | 83.10% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 7.001840905081622e-05 | 4.173124907948678e-05 | 40.40% | 67.78% | 1.68x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.923400331803462e-05 | 3.766781415488292e-05 | 45.59% | 83.80% | 1.84x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.961646736643518e-05 | 3.8171665332991254e-05 | 45.17% | 82.38% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.951539313093669e-05 | 3.7905807957240355e-05 | 45.47% | 83.39% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.002705185730866e-05 | 3.780377030057523e-05 | 46.02% | 85.24% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.021730955006781e-05 | 3.819433051883357e-05 | 45.61% | 83.84% | 1.84x | ✅ |
| `hexbytes_new[long alternating]` | 5.152918805766896e-05 | 3.300556594521577e-05 | 35.95% | 56.12% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.022331148780298e-05 | 4.3579981072928074e-05 | 45.68% | 84.08% | 1.84x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.341540154237858e-05 | 4.38445649168893e-05 | 47.44% | 90.25% | 1.90x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.293859730349804e-05 | 4.380901119766068e-05 | 47.18% | 89.32% | 1.89x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.1489545647376e-05 | 4.3979571726363436e-05 | 46.03% | 85.29% | 1.85x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.099116148905616e-05 | 4.3424935085864754e-05 | 46.38% | 86.51% | 1.87x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.310321258598485e-05 | 4.3297633791979736e-05 | 47.90% | 91.93% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.188410303758324e-05 | 4.016491724069025e-05 | 50.95% | 103.87% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.338688091957809e-05 | 4.3429359304459876e-05 | 47.92% | 92.01% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.340909693892604e-05 | 4.3500825943088554e-05 | 47.85% | 91.74% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 7.997783175652987e-05 | 4.388274631699859e-05 | 45.13% | 82.25% | 1.82x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010169240252214409 | 6.311411081140181e-05 | 37.94% | 61.12% | 1.61x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.4460586551187e-05 | 4.3752511320158954e-05 | 48.20% | 93.04% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.22274015848023e-05 | 4.289337845164596e-05 | 47.84% | 91.70% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.324568531610435e-05 | 4.351649760335474e-05 | 47.73% | 91.30% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.33645322052042e-05 | 4.338391968277489e-05 | 47.96% | 92.16% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.484956625465498e-05 | 4.353813319345513e-05 | 48.69% | 94.89% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.3430397782451e-05 | 4.3927261484952914e-05 | 47.35% | 89.93% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010047904689140954 | 5.6443398731331476e-05 | 43.83% | 78.02% | 1.78x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.34114766484776e-05 | 4.346394261952448e-05 | 47.89% | 91.91% | 1.92x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.787971164049838e-05 | 5.676548435978873e-05 | 42.00% | 72.43% | 1.72x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.378598033602691e-05 | 4.328265993514059e-05 | 48.34% | 93.58% | 1.94x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.20253774114009e-05 | 4.366698741190707e-05 | 46.76% | 87.84% | 1.88x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.268911083692241e-05 | 4.3133538000604524e-05 | 47.84% | 91.70% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.306993737839588e-05 | 4.3364824052142434e-05 | 47.80% | 91.56% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.31876279291165e-05 | 4.370661270418656e-05 | 47.46% | 90.33% | 1.90x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.23495604683162e-05 | 4.3603825282673034e-05 | 47.05% | 88.86% | 1.89x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.268373658642514e-05 | 4.341736780573953e-05 | 47.49% | 90.44% | 1.90x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.208563618100804e-05 | 4.3837933169361676e-05 | 46.59% | 87.25% | 1.87x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.267537679797833e-05 | 4.333163509742315e-05 | 47.59% | 90.80% | 1.91x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.392505894371362e-05 | 2.6601866589359637e-05 | 39.44% | 65.12% | 1.65x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.343348036656633e-05 | 2.6273067206239062e-05 | 39.51% | 65.32% | 1.65x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.251207849330514e-05 | 2.6162733710625447e-05 | 38.46% | 62.49% | 1.62x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.2583072652377186e-05 | 2.62861354412074e-05 | 38.27% | 62.00% | 1.62x | ✅ |
| `hexbytes_new[palindrome]` | 4.2269347982501034e-05 | 2.6127132199485306e-05 | 38.19% | 61.78% | 1.62x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.382144246311918e-05 | 2.669771834215431e-05 | 39.08% | 64.14% | 1.64x | ✅ |
| `hexbytes_new[single 0xff]` | 4.285055823609423e-05 | 2.5757956684936326e-05 | 39.89% | 66.36% | 1.66x | ✅ |
| `hexbytes_new[single null byte]` | 4.315406991503432e-05 | 2.580524445125473e-05 | 40.20% | 67.23% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.37496933715355e-05 | 2.6224226509567357e-05 | 40.06% | 66.83% | 1.67x | ✅ |
| `hexbytes_repr[0-9]` | 2.906798628681222e-05 | 1.4531913113973036e-05 | 50.01% | 100.03% | 2.00x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011935082533055303 | 4.083441099235044e-05 | 65.79% | 192.28% | 2.92x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011953885360769618 | 4.0906192772751766e-05 | 65.78% | 192.23% | 2.92x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.8766614966374895e-05 | 1.9830588723513578e-05 | 59.34% | 145.92% | 2.46x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.879737396349098e-05 | 1.991196490103694e-05 | 59.19% | 145.07% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.0355017432216155e-05 | 1.8182835967215847e-05 | 54.94% | 121.94% | 2.22x | ✅ |
| `hexbytes_repr[b'']` | 2.1396382325640314e-05 | 1.2031822807425543e-05 | 43.77% | 77.83% | 1.78x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.636127133370274e-05 | 1.6711449068402516e-05 | 54.04% | 117.58% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6344754874310393e-05 | 1.3998785811927036e-05 | 46.86% | 88.19% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.141888043507738e-05 | 2.389577750429593e-05 | 61.09% | 157.03% | 2.57x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007651395210586643 | 0.00022305139081562906 | 70.85% | 243.03% | 3.43x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.632420191094396e-05 | 1.4028082142250416e-05 | 46.71% | 87.65% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.706277390156218e-05 | 1.403789537331631e-05 | 48.13% | 92.78% | 1.93x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8376596198488254e-05 | 1.432204194824075e-05 | 49.53% | 98.13% | 1.98x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8549436341641795e-05 | 1.4395340086866826e-05 | 49.58% | 98.32% | 1.98x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6362181300417332e-05 | 1.396854297532199e-05 | 47.01% | 88.73% | 1.89x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.8686630362055564e-05 | 1.9830965235271825e-05 | 59.27% | 145.51% | 2.46x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039941884942643676 | 0.00012258952376106996 | 69.31% | 225.82% | 3.26x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6385804359140176e-05 | 1.3872932654247955e-05 | 47.42% | 90.20% | 1.90x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003999947155260777 | 0.00012260052332378147 | 69.35% | 226.26% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.765705535730533e-05 | 3.3752756622427605e-05 | 65.44% | 189.33% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.9054582291393952e-05 | 1.4535057836989328e-05 | 49.97% | 99.89% | 2.00x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.764780958800019e-05 | 1.3997407078561349e-05 | 49.37% | 97.52% | 1.98x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7119834752884084e-05 | 1.3884448310409815e-05 | 48.80% | 95.33% | 1.95x | ✅ |
| `hexbytes_repr[palindrome]` | 3.19139538471712e-05 | 1.5610305650399587e-05 | 51.09% | 104.44% | 2.04x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.163221431809811e-05 | 2.339075241459804e-05 | 62.05% | 163.49% | 2.63x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.556155348855207e-05 | 1.3534636647879307e-05 | 47.05% | 88.86% | 1.89x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5477357675176088e-05 | 1.3488493283911999e-05 | 47.06% | 88.88% | 1.89x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8746659369136945e-05 | 1.9840445470066074e-05 | 59.30% | 145.69% | 2.46x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5751175843188188e-05 | 1.3512168268861273e-05 | 14.21% | 16.57% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.188944600410523e-05 | 3.972684342751932e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.198416473118811e-05 | 3.9905394372347894e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0729235575349237e-05 | 1.8759347999864966e-05 | 9.50% | 10.50% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0935197305447756e-05 | 1.9037620818789003e-05 | 9.06% | 9.97% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8680887434516488e-05 | 1.673122727529239e-05 | 10.44% | 11.65% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0129796390515284e-05 | 1.1230908929698665e-05 | -10.87% | -9.80% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.747934309800761e-05 | 1.5828109926636758e-05 | 9.45% | 10.43% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4976104490067639e-05 | 1.3079329502293043e-05 | 12.67% | 14.50% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5136693060848967e-05 | 2.2702589812717672e-05 | 9.68% | 10.72% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0002229201516443345 | 0.0002219118834105949 | 0.45% | 0.45% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4759359703304708e-05 | 1.2904398127835308e-05 | 12.57% | 14.37% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5034359717442118e-05 | 1.3507130242500617e-05 | 10.16% | 11.31% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6442674135908144e-05 | 1.3449368062563744e-05 | 18.20% | 22.26% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5284441435804402e-05 | 1.341387379371508e-05 | 12.24% | 13.95% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4818882536857224e-05 | 1.3113785223065585e-05 | 11.51% | 13.00% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0653224627941112e-05 | 1.880171410021685e-05 | 8.96% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012215348819907536 | 0.00012176789988852488 | 0.32% | 0.32% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.476645561092787e-05 | 1.2842567312862918e-05 | 13.03% | 14.98% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012236644545641535 | 0.00012102260530175359 | 1.10% | 1.11% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4963886205126254e-05 | 3.2889936730400586e-05 | 5.93% | 6.31% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5641651068076332e-05 | 1.409609734237564e-05 | 9.88% | 10.96% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5071756320538221e-05 | 1.3222747996462207e-05 | 12.27% | 13.98% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.498200289295834e-05 | 1.327094536511816e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.643034873494635e-05 | 1.4635341821183812e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5167728154543546e-05 | 2.273393673682945e-05 | 9.67% | 10.71% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4659952030930308e-05 | 1.2670889720289785e-05 | 13.57% | 15.70% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4580408318988365e-05 | 1.2707411692001782e-05 | 12.85% | 14.74% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.071625963528691e-05 | 1.8746568542236906e-05 | 9.51% | 10.51% | 1.11x | ✅ |
