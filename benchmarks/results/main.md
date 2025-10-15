#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.490709214169354e-05 | 2.370748858175925e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4944033381598877e-05 | 2.3596921403830403e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.489169469090146e-05 | 2.368375301935395e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4616856971277598e-05 | 2.367910966805255e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4810174022866607e-05 | 2.364585807709314e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4876026369098616e-05 | 2.3401698000016383e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.5179318770972272e-05 | 2.3682104962795438e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.469411541356294e-05 | 2.3651485726805122e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.450403953078943e-05 | 2.393845559201651e-05 | 2.31% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4793527926133996e-05 | 2.3673859203495446e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4839162569491994e-05 | 2.3678830214022088e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.472520244691875e-05 | 2.3801060858945628e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4799162623988217e-05 | 2.380391230241173e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.469218193263831e-05 | 2.3751265667095653e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4610220362058187e-05 | 2.4347358207216905e-05 | 1.07% | 1.08% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4932962472324192e-05 | 2.363601582818424e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4916169522003968e-05 | 2.3660802442189224e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4731356538688148e-05 | 2.3733560709730495e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4922983725099812e-05 | 2.373363203045093e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.502179565787116e-05 | 2.3655083751740592e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.482023088683099e-05 | 2.3600794131323934e-05 | 4.91% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4637436134955697e-05 | 2.3725335024125925e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4790932389676028e-05 | 2.3642997999800265e-05 | 4.63% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4656196665282742e-05 | 2.4314268430394298e-05 | 1.39% | 1.41% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4815698138590123e-05 | 2.3592542900903538e-05 | 4.93% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.482972845430588e-05 | 2.3585646651003552e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3804435985581907e-05 | 2.2332741040488598e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3771378416221362e-05 | 2.2207662416870945e-05 | 6.58% | 7.04% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3648703120629988e-05 | 2.2333754906503866e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3729806903673045e-05 | 2.234556747866719e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.362031854600441e-05 | 2.230126355056076e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.388190673483288e-05 | 2.23427556347629e-05 | 6.44% | 6.89% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3602802016469315e-05 | 2.2515627610547883e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.356633073042294e-05 | 2.2449551736768575e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.373950600219785e-05 | 2.234548922547636e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3585919752857638e-05 | 2.2322596236281787e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.354421020381418e-05 | 2.2267148404612698e-05 | 5.42% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3657149757468722e-05 | 2.239984540601803e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3682984208393784e-05 | 2.2300732078499635e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.373976053498264e-05 | 2.224161890697393e-05 | 6.31% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3529202995029878e-05 | 2.2936153077175266e-05 | 2.52% | 2.59% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3361196700308235e-05 | 2.2360294500621842e-05 | 4.28% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3768117942715358e-05 | 2.2424629627706747e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3759305249720714e-05 | 2.2508983582644e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3497055023329787e-05 | 2.2286754536703178e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3662767625523338e-05 | 2.2186145443099764e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3968756596597983e-05 | 2.2269591466586076e-05 | 7.09% | 7.63% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.382029751364173e-05 | 2.227932623915601e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.38171238489521e-05 | 2.214003875187448e-05 | 7.04% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3804432878066472e-05 | 2.226730524570395e-05 | 6.46% | 6.90% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.377569950404774e-05 | 2.2437429199166335e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3995499731795414e-05 | 2.218166166405336e-05 | 7.56% | 8.18% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3556894752030408e-05 | 2.229389044331145e-05 | 5.36% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3639717936999068e-05 | 2.2408132843656126e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.400120672540772e-05 | 2.241032643767427e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3926794701960164e-05 | 2.2499639116277377e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.4489367875722634e-05 | 2.235271008857805e-05 | 8.72% | 9.56% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.371355350721647e-05 | 2.2316975615891112e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.4005697906690265e-05 | 2.2310656442950614e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3988890426407122e-05 | 2.2320323109938985e-05 | 6.96% | 7.48% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3719139804305662e-05 | 2.2553088161249025e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3951760723661583e-05 | 2.3112537769938194e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.4111626628490464e-05 | 2.2427875152351023e-05 | 6.98% | 7.51% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.4044132226561195e-05 | 2.2326438568795778e-05 | 7.14% | 7.69% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3969020698736155e-05 | 2.2511009311633602e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3986273042285928e-05 | 2.2465757911337137e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.4020942708596204e-05 | 2.310142510771549e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3971430731877633e-05 | 2.2474512477115264e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.387267731833952e-05 | 2.246828229777548e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.4059317084984183e-05 | 2.2423332730001766e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.382424450796304e-05 | 2.2529734614517946e-05 | 5.43% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3724497800231034e-05 | 2.2396936622972052e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.4028262385191222e-05 | 2.2318558414022063e-05 | 7.12% | 7.66% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.400480781254558e-05 | 2.23731434513761e-05 | 6.80% | 7.29% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.4153705786085365e-05 | 2.232106667616376e-05 | 7.59% | 8.21% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3997284524641675e-05 | 2.2352295763253378e-05 | 6.85% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3703576471447492e-05 | 2.2312168078273283e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3921338916415162e-05 | 2.242737764945785e-05 | 6.25% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3882986148653527e-05 | 2.2425614154787146e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.388854772774617e-05 | 2.240852628090585e-05 | 6.20% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3874871002614772e-05 | 2.2595767050003412e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.378837577320109e-05 | 2.256729257183067e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3473709014025585e-05 | 2.2662990168809288e-05 | 3.45% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3819441526286557e-05 | 2.2629141689281784e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3788247969989892e-05 | 2.2559227085855442e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3881140895929696e-05 | 2.2503355213873067e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3909324357148648e-05 | 2.2700414309150026e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3786758271363673e-05 | 2.256335284912241e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3804630915860972e-05 | 2.2599882901266554e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3650964643674444e-05 | 2.2658351052203995e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3901152032443655e-05 | 2.269953385166723e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3902635114912487e-05 | 2.258400219130994e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3956975051065156e-05 | 2.2433761403873002e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.4000884487649335e-05 | 2.2612079400099142e-05 | 5.79% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.387051031228347e-05 | 2.2561639124750637e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.395242520577041e-05 | 2.262039730697539e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3721300855653547e-05 | 2.5062847537239017e-05 | -5.66% | -5.35% | 0.95x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3925296484719404e-05 | 2.238723398853787e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3631409339470236e-05 | 2.270989815763629e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3917553928721185e-05 | 2.2468101242594494e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.378429071656568e-05 | 2.260425237241182e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3513794817634814e-05 | 2.280097648496391e-05 | 3.03% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3615102503494594e-05 | 2.270456350190985e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.369638133083021e-05 | 2.264106485277953e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.376862877791056e-05 | 2.2376456921488585e-05 | 5.86% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.4077285971019048e-05 | 2.265738702958722e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.439369799811505e-05 | 2.253675959777434e-05 | 7.61% | 8.24% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.386717246825088e-05 | 2.243975488496998e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3799023966498162e-05 | 2.240720688782243e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3962919643503147e-05 | 2.2542445438952883e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.4433303155792243e-05 | 2.2581678686573463e-05 | 7.58% | 8.20% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.370391824588414e-05 | 2.236818869361316e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3741442385531174e-05 | 2.2449300535719423e-05 | 5.44% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3642590889324142e-05 | 2.242886783222327e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3910948504054585e-05 | 2.2485045934544003e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3716164249038793e-05 | 2.2490769745119254e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3842339577157476e-05 | 2.2606873779719484e-05 | 5.18% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3831313382717287e-05 | 2.2476603061146345e-05 | 5.68% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3692723389430334e-05 | 2.2530841402795717e-05 | 4.90% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3737964654743143e-05 | 2.2512745796212118e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3658578308390954e-05 | 2.2779203305943146e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3855334593372263e-05 | 2.228266012547315e-05 | 6.59% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.379532469536168e-05 | 2.273123458903386e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3809073739940073e-05 | 2.250883338219717e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3800334608921906e-05 | 2.2475127995915347e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3834246395556575e-05 | 2.2496892882948072e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.392653327715017e-05 | 2.2501220115371612e-05 | 5.96% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3566548828364226e-05 | 2.2415157208298935e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.375054065781441e-05 | 2.2438583443993667e-05 | 5.52% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.390830814374423e-05 | 2.2387012231341507e-05 | 6.36% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3860426804613494e-05 | 2.303468474145708e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.371701733597088e-05 | 2.2619075633073228e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3653544587480196e-05 | 2.2361993524046553e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3904754490096712e-05 | 2.250823427695607e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3517849488132403e-05 | 2.2474955222076763e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.362207759893742e-05 | 2.2450533847434663e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.374762076375316e-05 | 2.2532225114053345e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3773919637662047e-05 | 2.2463245587186392e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.375160053499626e-05 | 2.2292451148194973e-05 | 6.14% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3899836759321147e-05 | 2.251437737829921e-05 | 5.80% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3856474969524506e-05 | 2.2378458837154206e-05 | 6.20% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.388889848091968e-05 | 2.246377790210001e-05 | 5.97% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.416365062100428e-05 | 2.2359556222050437e-05 | 7.47% | 8.07% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3869906956677523e-05 | 2.2526865990605293e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3497115373928753e-05 | 2.247128467968984e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3806720648714753e-05 | 2.2406893363493278e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3753036366812696e-05 | 2.238585863714701e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.370483023887628e-05 | 2.2431662782420498e-05 | 5.37% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.373627721647737e-05 | 2.2406648472272992e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3767029299258282e-05 | 2.2572461850716227e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.38225532876968e-05 | 2.2434662394114503e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.384295706929274e-05 | 2.251970694455076e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.4248189104740953e-05 | 2.2400637581087466e-05 | 7.62% | 8.25% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3821893881481354e-05 | 2.2471075941926205e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.380855459913893e-05 | 2.2366614596256905e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3930511243002562e-05 | 2.2435101782182286e-05 | 6.25% | 6.67% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3954371589133342e-05 | 2.2385198174316946e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3800473999683568e-05 | 2.2393369712176927e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3898545829205375e-05 | 2.255921141509606e-05 | 5.60% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3875203896918393e-05 | 2.2464589619196282e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.382852421992495e-05 | 2.23906342502219e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3780812031940156e-05 | 2.2378183663124868e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3740083218147064e-05 | 2.236032780277669e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.407765753479756e-05 | 2.2571715341949e-05 | 6.25% | 6.67% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.4051897335355348e-05 | 2.2480111373566207e-05 | 6.53% | 6.99% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3743341348274583e-05 | 2.244221334642182e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.4035202112700412e-05 | 2.2560207011135367e-05 | 6.14% | 6.54% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.399239823736184e-05 | 2.245929546266039e-05 | 6.39% | 6.83% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3892460190599218e-05 | 2.2213239789007683e-05 | 7.03% | 7.56% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3900620577957767e-05 | 2.293923130269364e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.400664951478795e-05 | 2.239824139377637e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.386699073994476e-05 | 2.2472839612278768e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.32276641185018e-05 | 5.9392133539793776e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.32660487122901e-05 | 5.95357203027742e-05 | 28.50% | 39.86% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.33382902102735e-05 | 5.928682291806192e-05 | 28.86% | 40.57% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.385854682063518e-05 | 5.9107574524644834e-05 | 29.52% | 41.87% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.373562891255854e-05 | 5.919563051720296e-05 | 29.31% | 41.46% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.324972504221016e-05 | 5.960700651708667e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.932016947525156e-05 | 5.7115820812438964e-05 | 27.99% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.292995274155987e-05 | 5.930130663020627e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.316279294043541e-05 | 5.9241280421108735e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.395639228849057e-05 | 5.923882981249348e-05 | 29.44% | 41.73% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.367936740927366e-05 | 5.964635091092003e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.271821450137845e-05 | 6.026804526073817e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.350783454886942e-05 | 5.9373796787871524e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.377029632135502e-05 | 5.951573868183052e-05 | 28.95% | 40.75% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.347913369061712e-05 | 5.935401823513363e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.25783527008288e-05 | 5.962091262378579e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.269321072481892e-05 | 5.9530914222902434e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.216836159190521e-05 | 6.119844371415817e-05 | 25.52% | 34.27% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.29193292756891e-05 | 5.9648766453563725e-05 | 28.06% | 39.01% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.346907949252995e-05 | 5.900201255697889e-05 | 29.31% | 41.47% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.326278403410781e-05 | 5.938259296010846e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.341101905037474e-05 | 5.920007306769483e-05 | 29.03% | 40.90% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.348660881494046e-05 | 5.917117532705174e-05 | 29.12% | 41.09% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.377598217004357e-05 | 5.8259340330205355e-05 | 30.46% | 43.80% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.327757050714812e-05 | 5.942133069179488e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.417446569218182e-05 | 5.9077505804667156e-05 | 29.82% | 42.48% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.096890751263667e-05 | 5.7799399363348916e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.038271799105993e-05 | 5.741769295605544e-05 | 28.57% | 40.00% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.367443260409659e-05 | 5.9419627224032405e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.589274819902874e-05 | 6.0353272088903996e-05 | 29.73% | 42.32% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.579040525059124e-05 | 6.0517280751551134e-05 | 29.46% | 41.76% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.490513116442084e-05 | 6.002004276790745e-05 | 29.31% | 41.46% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.533308494723087e-05 | 5.9938315253642996e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.547083980887567e-05 | 5.984092071035252e-05 | 29.99% | 42.83% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.60157234712693e-05 | 6.040517181753777e-05 | 29.77% | 42.40% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.207992622525732e-05 | 5.7769325184836234e-05 | 29.62% | 42.08% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.58702496313986e-05 | 6.0914847458932964e-05 | 29.06% | 40.97% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.534888613834434e-05 | 6.0244062617905884e-05 | 29.41% | 41.67% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.498257113583648e-05 | 6.0376828607576656e-05 | 28.95% | 40.75% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.53189279526048e-05 | 6.0724188678180417e-05 | 28.83% | 40.50% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.604015703734421e-05 | 6.0794337675546786e-05 | 29.34% | 41.53% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.549712870737008e-05 | 6.003499101765047e-05 | 29.78% | 42.41% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.721659776787429e-05 | 6.0805160174484554e-05 | 30.28% | 43.44% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.516662837251062e-05 | 6.033016034387013e-05 | 29.16% | 41.17% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.532536349607248e-05 | 6.0219052001491885e-05 | 29.42% | 41.69% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.541486666137092e-05 | 5.9944906116263294e-05 | 29.82% | 42.49% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.548784568240804e-05 | 6.011608571766489e-05 | 29.68% | 42.20% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.552006648789931e-05 | 6.0293675409293205e-05 | 29.50% | 41.84% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.66998763987192e-05 | 6.055310680722894e-05 | 30.16% | 43.18% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.557435522353925e-05 | 6.0540797722359984e-05 | 29.25% | 41.35% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.519605833139771e-05 | 6.002877735239444e-05 | 29.54% | 41.93% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.596965904345099e-05 | 6.0631485237682544e-05 | 29.47% | 41.79% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.520965820717488e-05 | 6.0704168373619484e-05 | 28.76% | 40.37% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.599056234263655e-05 | 6.016072291818725e-05 | 30.04% | 42.93% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.52051909470375e-05 | 6.061754967211224e-05 | 28.86% | 40.56% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.28890693472363e-05 | 5.8539082838904596e-05 | 29.38% | 41.60% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.23709397664725e-05 | 5.8345155815960616e-05 | 29.17% | 41.18% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.566681155833708e-05 | 6.068387839699444e-05 | 29.16% | 41.17% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.557013631360816e-05 | 5.9405515329987936e-05 | 30.58% | 44.04% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.522436688243362e-05 | 5.9626118596123544e-05 | 30.04% | 42.93% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.512764024396662e-05 | 5.9952140702915984e-05 | 29.57% | 41.99% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.500559724613708e-05 | 5.974098520355692e-05 | 29.72% | 42.29% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.525623742430138e-05 | 6.014805423029504e-05 | 29.45% | 41.74% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.408350887524309e-05 | 6.012422130986206e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.382843727488694e-05 | 5.722731449007277e-05 | 31.73% | 46.48% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.559476491913702e-05 | 6.0490621718902786e-05 | 29.33% | 41.50% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.526424844275364e-05 | 5.9710067044661e-05 | 29.97% | 42.80% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.560429973253727e-05 | 6.020840682903669e-05 | 29.67% | 42.18% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.48113818854283e-05 | 5.968545731153144e-05 | 29.63% | 42.10% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.5674736456771e-05 | 6.066469504960577e-05 | 29.19% | 41.23% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.493533350440145e-05 | 6.010516690905615e-05 | 29.23% | 41.31% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.510780105097976e-05 | 6.038849383004164e-05 | 29.04% | 40.93% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.537998260930513e-05 | 5.989029554413826e-05 | 29.85% | 42.56% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.56018688341726e-05 | 5.944772340661606e-05 | 30.55% | 44.00% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.51548627884011e-05 | 6.046487702638672e-05 | 28.99% | 40.83% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.568353813231655e-05 | 6.040461251268431e-05 | 29.50% | 41.85% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.542602842411513e-05 | 6.036451065527349e-05 | 29.34% | 41.52% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.458949745874604e-05 | 6.0255257901389506e-05 | 28.77% | 40.39% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.306242841405523e-05 | 6.009628290781094e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.521217344283e-05 | 6.009221629916794e-05 | 29.48% | 41.80% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.625153003892215e-05 | 5.998215228240877e-05 | 30.46% | 43.80% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.384860176051902e-05 | 6.012112239473286e-05 | 28.30% | 39.47% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.554333720321167e-05 | 5.976190750682727e-05 | 30.14% | 43.14% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.426675182364554e-05 | 6.018901363411315e-05 | 28.57% | 40.00% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.96065765513371e-05 | 5.809394615242466e-05 | 27.02% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.032398525356815e-05 | 5.7965923652190144e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.406606839157142e-05 | 6.034577512429265e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.190674649126556e-05 | 5.854445675744449e-05 | 28.52% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.436722389445974e-05 | 6.0799994596595585e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.661939225028212e-05 | 6.0775609727275464e-05 | 29.84% | 42.52% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.309491396124049e-05 | 5.973195991565079e-05 | 28.12% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.253984613513597e-05 | 5.971091334612533e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.3341431932376e-05 | 5.967265682135002e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.881684353985629e-05 | 5.676169861042841e-05 | 27.98% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.324971387561403e-05 | 6.051674770862192e-05 | 27.31% | 37.56% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.245541290454048e-05 | 5.9743096353115184e-05 | 27.54% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.301139261550149e-05 | 6.027558843074417e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010797276022616967 | 8.308728367426276e-05 | 23.05% | 29.95% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.959053485863148e-05 | 5.777683327319688e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.222840028762428e-05 | 5.9429699590781224e-05 | 27.73% | 38.36% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.215461055463192e-05 | 5.934957960539131e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.290044960897929e-05 | 5.947489891233341e-05 | 28.26% | 39.39% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.977207539402503e-05 | 5.9388333822126925e-05 | 33.85% | 51.16% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.343981791751911e-05 | 6.0098192351054565e-05 | 27.97% | 38.84% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 0.00010281438366650724 | 7.473150524042893e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.922704930416912e-05 | 5.828210827974682e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.0001008617329858742 | 7.603772418434353e-05 | 24.61% | 32.65% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.445720289607102e-05 | 6.0472811128150825e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.246743260668376e-05 | 6.125156273890022e-05 | 25.73% | 34.64% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.316748366018358e-05 | 5.9335189927639554e-05 | 28.66% | 40.17% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.240192479935688e-05 | 5.9188481719440463e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.282882409882076e-05 | 5.945190133296893e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.407986504002371e-05 | 5.9798152072744695e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.922120280697799e-05 | 5.6935412853129575e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.948541050228543e-05 | 5.7350042932915996e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.339168913302604e-05 | 5.948740287373026e-05 | 28.67% | 40.18% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.146905082244557e-05 | 5.755845256959647e-05 | 29.35% | 41.54% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.237840233046554e-05 | 5.9310751643105504e-05 | 28.00% | 38.89% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.265635868290242e-05 | 5.916134133437624e-05 | 28.42% | 39.71% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.169673806797571e-05 | 5.832842685040504e-05 | 28.60% | 40.06% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.185877131338807e-05 | 5.851336179867169e-05 | 28.52% | 39.90% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.192488683935511e-05 | 5.797788952938418e-05 | 29.23% | 41.30% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.761042719632246e-05 | 5.530506029868729e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.372799346744341e-05 | 5.8100580887757596e-05 | 30.61% | 44.11% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.162098637628971e-05 | 5.7446373549558824e-05 | 29.62% | 42.08% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.193004183538208e-05 | 5.890377963308224e-05 | 28.10% | 39.09% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010641362550643201 | 7.879420639688185e-05 | 25.95% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.190489869314932e-05 | 5.8076256524106635e-05 | 29.09% | 41.03% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.153149012586322e-05 | 5.7793750603990706e-05 | 29.11% | 41.07% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.169410998190315e-05 | 5.708734804244775e-05 | 30.12% | 43.10% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.203530257101946e-05 | 5.6962805277869094e-05 | 30.56% | 44.02% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.121518646630655e-05 | 5.755053944538901e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.21628200508517e-05 | 5.819491244922907e-05 | 29.17% | 41.19% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.779578610550654e-05 | 7.317613872506656e-05 | 25.17% | 33.64% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.223648413879729e-05 | 5.796567843795873e-05 | 29.51% | 41.87% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.99245278423855e-05 | 7.298895844882583e-05 | 26.96% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.385222791377953e-05 | 5.823933095859904e-05 | 30.55% | 43.98% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.197195192671946e-05 | 5.648337876794043e-05 | 31.09% | 45.13% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.155076945856169e-05 | 5.752301032790361e-05 | 29.46% | 41.77% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.11165873978217e-05 | 5.781050799802059e-05 | 28.73% | 40.31% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.192592116868612e-05 | 5.794422635597991e-05 | 29.27% | 41.39% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.243455492022623e-05 | 5.826076186286292e-05 | 29.32% | 41.49% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.877124331271905e-05 | 5.615964382683851e-05 | 28.71% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.823631717472704e-05 | 5.6233273908239645e-05 | 28.12% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.22571312824803e-05 | 5.825821031197209e-05 | 29.18% | 41.19% | 1.41x | ✅ |
| `hexbytes_new['']` | 7.191205345480013e-05 | 3.6156903247600816e-05 | 49.72% | 98.89% | 1.99x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.2453591626881e-05 | 4.986079760998382e-05 | 46.07% | 85.42% | 1.85x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.30449618590328e-05 | 5.035942043565867e-05 | 45.88% | 84.76% | 1.85x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 9.189116277047179e-05 | 4.7672181606842344e-05 | 48.12% | 92.76% | 1.93x | ✅ |
| `hexbytes_new['0x']` | 7.934523336677422e-05 | 3.7951552345238005e-05 | 52.17% | 109.07% | 2.09x | ✅ |
| `hexbytes_new['0x1234']` | 8.766373532885638e-05 | 4.4810808401692795e-05 | 48.88% | 95.63% | 1.96x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.677029505377376e-05 | 4.421178324104536e-05 | 49.05% | 96.26% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.72536539483624e-05 | 4.5644747732748906e-05 | 47.69% | 91.16% | 1.91x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.71303589421189e-05 | 4.562096547871489e-05 | 47.64% | 90.99% | 1.91x | ✅ |
| `hexbytes_new['abc']` | 8.39874714593401e-05 | 4.759717629870371e-05 | 43.33% | 76.45% | 1.76x | ✅ |
| `hexbytes_new['deadbeef']` | 7.859565384924951e-05 | 4.090706587795483e-05 | 47.95% | 92.13% | 1.92x | ✅ |
| `hexbytes_new[0-9]` | 4.550280969867527e-05 | 2.600225259900955e-05 | 42.86% | 75.00% | 1.75x | ✅ |
| `hexbytes_new[0]` | 0.00012408794369145557 | 6.0756829376676467e-05 | 51.04% | 104.24% | 2.04x | ✅ |
| `hexbytes_new[123456]` | 0.00012905433637957732 | 6.53093542617329e-05 | 49.39% | 97.60% | 1.98x | ✅ |
| `hexbytes_new[2**16]` | 0.0001308623769712392 | 6.552587949886654e-05 | 49.93% | 99.71% | 2.00x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013259275936302803 | 7.384774570060862e-05 | 44.30% | 79.55% | 1.80x | ✅ |
| `hexbytes_new[2**32]` | 0.00013094473797798566 | 6.90967574046993e-05 | 47.23% | 89.51% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.00013440956040928635 | 7.26865982088707e-05 | 45.92% | 84.92% | 1.85x | ✅ |
| `hexbytes_new[2**8]` | 0.00012641292708056402 | 6.330106925262815e-05 | 49.93% | 99.70% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.362004045280963e-05 | 2.6911734961396298e-05 | 38.30% | 62.09% | 1.62x | ✅ |
| `hexbytes_new[False]` | 6.0645945934053214e-05 | 2.716958239118988e-05 | 55.20% | 123.21% | 2.23x | ✅ |
| `hexbytes_new[True]` | 6.0334158166627326e-05 | 2.7415235748202844e-05 | 54.56% | 120.08% | 2.20x | ✅ |
| `hexbytes_new[all byte values]` | 4.3911377734017934e-05 | 2.683600095969989e-05 | 38.89% | 63.63% | 1.64x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3920513293090255e-05 | 2.650232187292285e-05 | 39.66% | 65.72% | 1.66x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.374538487079925e-05 | 2.6760241886215845e-05 | 38.83% | 63.47% | 1.63x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.3676776314734305e-05 | 2.6376644958874928e-05 | 39.61% | 65.59% | 1.66x | ✅ |
| `hexbytes_new[b'']` | 4.5212016050316594e-05 | 2.57385698341687e-05 | 43.07% | 75.66% | 1.76x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.301393312270818e-05 | 2.609798466363096e-05 | 39.33% | 64.82% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.5741936285582744e-05 | 2.611775215526315e-05 | 42.90% | 75.14% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.436460663753062e-05 | 2.6372541342750785e-05 | 40.55% | 68.22% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6242055704242035e-05 | 3.868517878441558e-05 | 31.22% | 45.38% | 1.45x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.5466731817215816e-05 | 2.6071107403941655e-05 | 42.66% | 74.40% | 1.74x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.616272798162098e-05 | 2.6144821919931078e-05 | 43.36% | 76.57% | 1.77x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.4995454377686266e-05 | 2.6062086965096205e-05 | 42.08% | 72.65% | 1.73x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.495119586956768e-05 | 2.6075722268845037e-05 | 41.99% | 72.39% | 1.72x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.563272356212131e-05 | 2.598826341701107e-05 | 43.05% | 75.59% | 1.76x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3420740426716346e-05 | 2.6498633518126992e-05 | 38.97% | 63.86% | 1.64x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.002392545033268e-05 | 3.2804967738388224e-05 | 34.42% | 52.49% | 1.52x | ✅ |
| `hexbytes_new[b'abc']` | 4.5148190163270386e-05 | 2.600176582178445e-05 | 42.41% | 73.64% | 1.74x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.96947702157491e-05 | 3.71017329527819e-05 | 46.77% | 87.85% | 1.88x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.010664958985715e-05 | 3.790294929582462e-05 | 45.94% | 84.96% | 1.85x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.967078730103361e-05 | 3.8109291801591446e-05 | 45.30% | 82.82% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 7.007854018675634e-05 | 3.761663889094393e-05 | 46.32% | 86.30% | 1.86x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.96436705358402e-05 | 3.774757739187778e-05 | 45.80% | 84.50% | 1.84x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.962337941622524e-05 | 3.705490452386085e-05 | 46.78% | 87.89% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.915907194889651e-05 | 3.503701450349708e-05 | 49.34% | 97.39% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.957097014361838e-05 | 3.7377601858369035e-05 | 46.27% | 86.13% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.081247841455098e-05 | 3.738965960156375e-05 | 47.20% | 89.39% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.010073897005398e-05 | 3.775960091661915e-05 | 46.14% | 85.65% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.961822545748723e-05 | 5.464359891879814e-05 | 39.03% | 64.00% | 1.64x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.013884875778293e-05 | 3.7465587465318865e-05 | 46.58% | 87.21% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.91977893180953e-05 | 3.704874651605604e-05 | 46.46% | 86.77% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 7.092748527113357e-05 | 3.722132162648545e-05 | 47.52% | 90.56% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.827195363601445e-05 | 3.7220926812601647e-05 | 45.48% | 83.42% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 7.031970628483075e-05 | 3.741012712943005e-05 | 46.80% | 87.97% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.887530216052492e-05 | 3.869579081019998e-05 | 43.82% | 77.99% | 1.78x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.530271796528696e-05 | 5.0831526755599075e-05 | 40.41% | 67.81% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 7.005153568871182e-05 | 3.729871524484331e-05 | 46.76% | 87.81% | 1.88x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.43192647520283e-05 | 4.897102229573958e-05 | 41.92% | 72.18% | 1.72x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.951866148905018e-05 | 3.7780212591029484e-05 | 45.65% | 84.01% | 1.84x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.850446294415748e-05 | 3.697705565146936e-05 | 46.02% | 85.26% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.930157517814214e-05 | 3.731926540409419e-05 | 46.15% | 85.70% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.873471147844537e-05 | 3.720466446451209e-05 | 45.87% | 84.75% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.047387678378979e-05 | 3.7516632979952807e-05 | 46.77% | 87.85% | 1.88x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.910517965350705e-05 | 3.772831566686903e-05 | 45.40% | 83.17% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.9735995678985e-05 | 3.752950268569966e-05 | 46.18% | 85.82% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.019922904370778e-05 | 3.7446669235222476e-05 | 46.66% | 87.46% | 1.87x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.850404063635144e-05 | 3.770531425648953e-05 | 44.96% | 81.68% | 1.82x | ✅ |
| `hexbytes_new[long alternating]` | 5.064790425410023e-05 | 3.27166835765398e-05 | 35.40% | 54.81% | 1.55x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.259924141523795e-05 | 4.3249196441611925e-05 | 47.64% | 90.98% | 1.91x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.421811841988154e-05 | 4.326109602672626e-05 | 48.63% | 94.67% | 1.95x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.502828590720312e-05 | 4.336502484507728e-05 | 49.00% | 96.08% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.337381691198904e-05 | 4.283239907286774e-05 | 48.63% | 94.65% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.331452945275645e-05 | 4.2435043783499907e-05 | 49.07% | 96.33% | 1.96x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.39356600050079e-05 | 4.2782069134518204e-05 | 49.03% | 96.19% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.115164625990701e-05 | 3.9676029740172826e-05 | 51.11% | 104.54% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.272360570065305e-05 | 4.309540089200309e-05 | 47.90% | 91.95% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.273753171139944e-05 | 4.286367576630053e-05 | 48.19% | 93.02% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.317839379567048e-05 | 4.297396369450455e-05 | 48.34% | 93.56% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010384068753392566 | 6.21602480474859e-05 | 40.14% | 67.05% | 1.67x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.328504356153329e-05 | 4.2895335876753366e-05 | 48.50% | 94.16% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.401971848259507e-05 | 4.273402649331273e-05 | 49.14% | 96.61% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.267212937830791e-05 | 4.342589005250742e-05 | 47.47% | 90.38% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.115790310181659e-05 | 4.342896920724569e-05 | 46.49% | 86.88% | 1.87x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.343541754048697e-05 | 4.302937347274966e-05 | 48.43% | 93.90% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.166308316540824e-05 | 4.30550504360115e-05 | 47.28% | 89.67% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.870087881891286e-05 | 5.583071029244206e-05 | 43.43% | 76.79% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.393499147773037e-05 | 4.2360970574565455e-05 | 49.53% | 98.14% | 1.98x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.827908276403593e-05 | 5.620402002457057e-05 | 42.81% | 74.86% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.423481251123282e-05 | 4.2936700948622235e-05 | 49.03% | 96.18% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.225366369649692e-05 | 4.317243844163413e-05 | 47.51% | 90.52% | 1.91x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.394170653496689e-05 | 4.2845723537889474e-05 | 48.96% | 95.92% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.318085751424985e-05 | 4.2501938486879665e-05 | 48.90% | 95.71% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.502180491960375e-05 | 4.299385413145483e-05 | 49.43% | 97.75% | 1.98x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.517594143493324e-05 | 4.3122918266756394e-05 | 49.37% | 97.52% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.446110874919173e-05 | 4.285124015974651e-05 | 49.27% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.357215066529933e-05 | 4.247278935869429e-05 | 49.18% | 96.77% | 1.97x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.402022805770297e-05 | 4.27182187528165e-05 | 49.16% | 96.68% | 1.97x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.358574530954181e-05 | 2.6702209604829674e-05 | 38.74% | 63.23% | 1.63x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.5985371040188524e-05 | 2.609839182406303e-05 | 43.25% | 76.20% | 1.76x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.542694188400667e-05 | 2.594903133094324e-05 | 42.88% | 75.06% | 1.75x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.5533104144037265e-05 | 2.6038983941374473e-05 | 42.81% | 74.87% | 1.75x | ✅ |
| `hexbytes_new[palindrome]` | 4.566038611121606e-05 | 2.615134731450359e-05 | 42.73% | 74.60% | 1.75x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.35884506685385e-05 | 2.6468024469762155e-05 | 39.28% | 64.68% | 1.65x | ✅ |
| `hexbytes_new[single 0xff]` | 4.492678251455585e-05 | 2.5878347592516068e-05 | 42.40% | 73.61% | 1.74x | ✅ |
| `hexbytes_new[single null byte]` | 4.514802924713938e-05 | 2.58225828864893e-05 | 42.80% | 74.84% | 1.75x | ✅ |
| `hexbytes_new[two patterns]` | 4.3448333194963355e-05 | 2.6585952091118598e-05 | 38.81% | 63.43% | 1.63x | ✅ |
| `hexbytes_repr[0-9]` | 2.90917062480457e-05 | 1.4891940895303129e-05 | 48.81% | 95.35% | 1.95x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011971625384044225 | 4.066434470590167e-05 | 66.03% | 194.40% | 2.94x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011980209942103418 | 4.0952586968401107e-05 | 65.82% | 192.54% | 2.93x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.877746835484394e-05 | 2.017249572309728e-05 | 58.64% | 141.80% | 2.42x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.8921292559526905e-05 | 2.0702599071843557e-05 | 57.68% | 136.31% | 2.36x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.0663303363781104e-05 | 1.829174674269637e-05 | 55.02% | 122.30% | 2.22x | ✅ |
| `hexbytes_repr[b'']` | 2.1423255966738722e-05 | 1.2485745617730196e-05 | 41.72% | 71.58% | 1.72x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.668725209629936e-05 | 1.713188272425832e-05 | 53.30% | 114.15% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6460860454927108e-05 | 1.4226364154586392e-05 | 46.24% | 86.00% | 1.86x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.181529100321468e-05 | 2.3799380239366954e-05 | 61.50% | 159.73% | 2.60x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007614429280748219 | 0.00022326650460278 | 70.68% | 241.05% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.611378302187971e-05 | 1.42731660378973e-05 | 45.34% | 82.96% | 1.83x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.680525743059527e-05 | 1.4178100169254488e-05 | 47.11% | 89.06% | 1.89x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8219841029493324e-05 | 1.4588338953195674e-05 | 48.30% | 93.44% | 1.93x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.837019625680039e-05 | 1.4704814737548184e-05 | 48.17% | 92.93% | 1.93x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6383961637081323e-05 | 1.406136358049372e-05 | 46.70% | 87.63% | 1.88x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.8781932533750604e-05 | 2.0134414260777473e-05 | 58.73% | 142.28% | 2.42x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039861062091936923 | 0.00011896985405342659 | 70.15% | 235.05% | 3.35x | ✅ |
| `hexbytes_repr[b'abc']` | 2.628475519274224e-05 | 1.4315050134941631e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003979663907263547 | 0.0001228467701204065 | 69.13% | 223.95% | 3.24x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.7913006214038e-05 | 3.399208503061899e-05 | 65.28% | 188.05% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8965290377602712e-05 | 1.4834659482516764e-05 | 48.78% | 95.25% | 1.95x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7695533751385868e-05 | 1.4505520739620352e-05 | 47.63% | 90.93% | 1.91x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7115952890482598e-05 | 1.4305379216417575e-05 | 47.24% | 89.55% | 1.90x | ✅ |
| `hexbytes_repr[palindrome]` | 3.1926683114550975e-05 | 1.578801466263184e-05 | 50.55% | 102.22% | 2.02x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.193758389401909e-05 | 2.395005739659018e-05 | 61.33% | 158.61% | 2.59x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.568116981167715e-05 | 1.3752781280746002e-05 | 46.45% | 86.73% | 1.87x | ✅ |
| `hexbytes_repr[single null byte]` | 2.569787108573903e-05 | 1.3965290934070544e-05 | 45.66% | 84.01% | 1.84x | ✅ |
| `hexbytes_repr[two patterns]` | 4.876871993542943e-05 | 2.015990358348897e-05 | 58.66% | 141.91% | 2.42x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.546978882659725e-05 | 1.3896885308674311e-05 | 10.17% | 11.32% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.197563585590553e-05 | 3.942983815323764e-05 | 6.06% | 6.46% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.203846115061454e-05 | 3.973475141840655e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.061345740868597e-05 | 1.8849604994256886e-05 | 8.56% | 9.36% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1034556258913767e-05 | 1.8993906962346065e-05 | 9.70% | 10.74% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8875813815466942e-05 | 1.7198966687540505e-05 | 8.88% | 9.75% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0187843418930654e-05 | 1.146381534799183e-05 | -12.52% | -11.13% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7761525834716025e-05 | 1.5999200078484397e-05 | 9.92% | 11.02% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.491279167519561e-05 | 1.3187113551675205e-05 | 11.57% | 13.09% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5307246640760228e-05 | 2.2900483468102752e-05 | 9.51% | 10.51% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022203437311137995 | 0.00022395427718314203 | -0.86% | -0.86% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4820425255525232e-05 | 1.3184821091019296e-05 | 11.04% | 12.41% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4995496346233545e-05 | 1.321709792754367e-05 | 11.86% | 13.46% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5384478660719788e-05 | 1.3595138155271592e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5282176594059864e-05 | 1.3556489689269711e-05 | 11.29% | 12.73% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4950046576285572e-05 | 1.3164590514630685e-05 | 11.94% | 13.56% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0585464319793074e-05 | 1.9116413035709033e-05 | 7.14% | 7.68% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012262134610012176 | 0.00012103434681815538 | 1.29% | 1.31% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4883331621779883e-05 | 1.3139927004937988e-05 | 11.71% | 13.27% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012271264979629563 | 0.00012163735934798776 | 0.88% | 0.88% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.518972816544199e-05 | 3.345415831964962e-05 | 4.93% | 5.19% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5515474278699935e-05 | 1.3754441581482815e-05 | 11.35% | 12.80% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.523780388983388e-05 | 1.3442734337496116e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5001470322697928e-05 | 1.3255464347376665e-05 | 11.64% | 13.17% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6391737335853485e-05 | 1.490631471786646e-05 | 9.06% | 9.97% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5399863287419973e-05 | 2.291752748305005e-05 | 9.77% | 10.83% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4561474537362167e-05 | 1.2885793476890897e-05 | 11.51% | 13.00% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4769295355417153e-05 | 1.2796363356841186e-05 | 13.36% | 15.42% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0578869953624934e-05 | 1.907937672056507e-05 | 7.29% | 7.86% | 1.08x | ✅ |
