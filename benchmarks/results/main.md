#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4398669194312766e-05 | 2.3700239430198145e-05 | 2.86% | 2.95% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.450830766017991e-05 | 2.369375918295451e-05 | 3.32% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.469434566762072e-05 | 2.3625445209234108e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4221882583748995e-05 | 2.3879656085388328e-05 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.5046820689635422e-05 | 2.3829327851060934e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4919593826664666e-05 | 2.367313657271819e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.480809689985565e-05 | 2.3793717344139304e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.461919271363367e-05 | 2.3431945682523965e-05 | 4.82% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4630726452825696e-05 | 2.357774729583105e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4536670433405248e-05 | 2.3647336955355246e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4523423773058737e-05 | 2.3485627301671318e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4639062929167396e-05 | 2.3746049912177567e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.430450130499954e-05 | 2.4710169230251275e-05 | -1.67% | -1.64% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4434900729053444e-05 | 2.423331681637108e-05 | 0.82% | 0.83% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4629613312282295e-05 | 2.3423216545008263e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4845800747969475e-05 | 2.3703368386438114e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4678259460932807e-05 | 2.3508701807217696e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4708790319489954e-05 | 2.3749122679039042e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4499890376275927e-05 | 2.3536941760001132e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4833918550948886e-05 | 2.366002094185289e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4530932090952518e-05 | 2.3603860275321053e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.473792927775634e-05 | 2.3785628596251623e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4674051716588214e-05 | 2.3774631189217717e-05 | 3.65% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4322168575491326e-05 | 2.3537716791990592e-05 | 3.23% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4822137512721744e-05 | 2.3680120256715353e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.484730465183926e-05 | 2.353033140356207e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3541203822722762e-05 | 2.2334071376755506e-05 | 5.13% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3622836172783007e-05 | 2.261316220395509e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3329929826634935e-05 | 2.249788634066555e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3476671348092725e-05 | 2.3030998040207866e-05 | 1.90% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.346955965933665e-05 | 2.241591994259486e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3566707478263383e-05 | 2.2299691770425253e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3601092216924777e-05 | 2.2700134835908334e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3561287944174144e-05 | 2.243874331292178e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3525849511031913e-05 | 2.2286282985963923e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3582326682357088e-05 | 2.2401205888529327e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3412919520580767e-05 | 2.2241284475429845e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3410224423527353e-05 | 2.2438331991382242e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.347658121884457e-05 | 2.2298735565323555e-05 | 5.02% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3496997180154425e-05 | 2.2376444378580165e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.361280092946136e-05 | 2.2391127006112786e-05 | 5.17% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3616494262082657e-05 | 2.2447046372853796e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.373420717375194e-05 | 2.2398481708208354e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3605149699265704e-05 | 2.241611295777528e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3669426547505043e-05 | 2.248244277772446e-05 | 5.01% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3352373805274287e-05 | 2.2321574882297265e-05 | 4.41% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3676950599830587e-05 | 2.2436675795419113e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3474435860965547e-05 | 2.297665862906155e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3518989924499344e-05 | 2.246358438029081e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3599375002859852e-05 | 2.233775321964051e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3640353361698843e-05 | 2.2849892971217804e-05 | 3.34% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.346341920319022e-05 | 2.2292270458668258e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3446197840391946e-05 | 2.2330860182138552e-05 | 4.76% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3454060027859588e-05 | 2.224453190987915e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3691002162131447e-05 | 2.2247329677103568e-05 | 6.09% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.33110074747669e-05 | 2.219165544351316e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.321439614216639e-05 | 2.2624139602615813e-05 | 2.54% | 2.61% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3570205902531207e-05 | 2.227391273477598e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3448826688190982e-05 | 2.2233950075531636e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3550750942210626e-05 | 2.2736051508925692e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3604233169041847e-05 | 2.1982013238930223e-05 | 6.87% | 7.38% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3608209286437567e-05 | 2.2355126748856482e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3622266034431313e-05 | 2.2367354003926377e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.353366675738795e-05 | 2.2229760972989778e-05 | 5.54% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.368599188421352e-05 | 2.2288533528008944e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4033949295008122e-05 | 2.222385906031731e-05 | 7.53% | 8.14% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.35061541926734e-05 | 2.240575967694529e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3666815765234934e-05 | 2.23942349366325e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.371331240249766e-05 | 2.2191519427788198e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3555832444242367e-05 | 2.2329827167497338e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3592150805490244e-05 | 2.235376930881143e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3611516424938476e-05 | 2.231843472964511e-05 | 5.48% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.337883160320926e-05 | 2.2163718890448673e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3575520238429644e-05 | 2.265363635225418e-05 | 3.91% | 4.07% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.364329837196481e-05 | 2.2326172595914224e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3544388609197237e-05 | 2.2409207798827006e-05 | 4.82% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3424581187317112e-05 | 2.227132816936025e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3470140686648523e-05 | 2.224165796693019e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3702048596976362e-05 | 2.2716539273379364e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3501602522445434e-05 | 2.2655002107860892e-05 | 3.60% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3447794509934847e-05 | 2.245291372514099e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3414400954146488e-05 | 2.236234712216072e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3684990344133688e-05 | 2.251101096794346e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3432310978497272e-05 | 2.2746032880972158e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.35244209265714e-05 | 2.2957627484000354e-05 | 2.41% | 2.47% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3471623288978318e-05 | 2.2339471145347112e-05 | 4.82% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3426903962094434e-05 | 2.2838012432582728e-05 | 2.51% | 2.58% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3630965912605683e-05 | 2.2796048077793713e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3486774889671138e-05 | 2.2881794591782572e-05 | 2.58% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.349018185294118e-05 | 2.231556887736033e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3546886786176074e-05 | 2.2789122391445514e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3453746555788547e-05 | 2.3081406378672532e-05 | 1.59% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3551237743709792e-05 | 2.2876545241825237e-05 | 2.86% | 2.95% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.355690728506141e-05 | 2.292595541043976e-05 | 2.68% | 2.75% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3693109690857947e-05 | 2.2729436032433892e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3581684721096462e-05 | 2.268501562623656e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.354630700997268e-05 | 2.5023076004966393e-05 | -6.27% | -5.90% | 0.94x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.363259064606739e-05 | 2.2647233586951612e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.4018256351607184e-05 | 2.2478733509993685e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3367894370210983e-05 | 2.242336362987036e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.370163353917482e-05 | 2.248870449157068e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.356338894428661e-05 | 2.2411169004831644e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3622544899928542e-05 | 2.2507028865913996e-05 | 4.72% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3549986274773133e-05 | 2.299134990219192e-05 | 2.37% | 2.43% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.36673258879375e-05 | 2.403737492424099e-05 | -1.56% | -1.54% | 0.98x | ❌ |
| `hexbytes_getitem_index[2-two patterns]` | 2.358372096707211e-05 | 2.2376497521475763e-05 | 5.12% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3430375870849962e-05 | 2.270036136174573e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3620840986153767e-05 | 2.2422979718020706e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.355055765212395e-05 | 2.25145249559774e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.362852452479877e-05 | 2.2429554069679868e-05 | 5.07% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3530991978858058e-05 | 2.238972319643262e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3917420603717367e-05 | 2.2482941233883195e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.356554442652864e-05 | 2.2457070073763163e-05 | 4.70% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3631208230445264e-05 | 2.236464059504878e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.347451428710235e-05 | 2.2288569622260236e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3565868591551286e-05 | 2.2178811569900696e-05 | 5.89% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3565444968442306e-05 | 2.2315580383712517e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3734809187180593e-05 | 2.2231962874165838e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3565977354026065e-05 | 2.2494905322609714e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.355828355543286e-05 | 2.231851023992083e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3594167980873218e-05 | 2.2188483642410566e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.364989756239821e-05 | 2.2240367402684743e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3680457373084312e-05 | 2.2335676332577995e-05 | 5.68% | 6.02% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3415303198687486e-05 | 2.277437797116532e-05 | 2.74% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3718855234694836e-05 | 2.2335508587262137e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.329332823872692e-05 | 2.2483146158038168e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.33700070278026e-05 | 2.252354519533211e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3533434010267676e-05 | 2.24989332451534e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3492518813868187e-05 | 2.222076752684814e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.353829621424519e-05 | 2.2505458937949237e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3554913651354285e-05 | 2.26048513922894e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.335079294816758e-05 | 2.2638758698831922e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3351627466755163e-05 | 2.259879014009907e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.312076762397251e-05 | 2.26680487317488e-05 | 1.96% | 2.00% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3521174496115945e-05 | 2.255973265274122e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3609478554188136e-05 | 2.2545762072498146e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3594566134940127e-05 | 2.252329739788702e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3646371334716933e-05 | 2.2589177318483427e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3451327541899686e-05 | 2.2728069735570058e-05 | 3.08% | 3.18% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3251194910120126e-05 | 2.2511030151668294e-05 | 3.18% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.366308734676309e-05 | 2.248238170587158e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3515283048479743e-05 | 2.2548431010881657e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.350706751789445e-05 | 2.2500897715673247e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3611694880794047e-05 | 2.2476169469517998e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3379939075478136e-05 | 2.283467527057928e-05 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3542909088823123e-05 | 2.2733400459804156e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.342789732047792e-05 | 2.253868107127675e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.336135906743707e-05 | 2.2605280771210126e-05 | 3.24% | 3.34% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.330131704055655e-05 | 2.257940443028166e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3465003613257747e-05 | 2.238057445687541e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.346569591080782e-05 | 2.2596475068641457e-05 | 3.70% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.349641343836371e-05 | 2.2730672425060844e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3364267710856882e-05 | 2.2603407850235376e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.346512118943661e-05 | 2.251140409406931e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3603728532851323e-05 | 2.2519851788424393e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.345741753769283e-05 | 2.2795482154973822e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3407569389008447e-05 | 2.2645062425795362e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3839902582688995e-05 | 2.26472965582778e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3492632804350805e-05 | 2.2724036265715902e-05 | 3.27% | 3.38% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.33179453318083e-05 | 2.2441267748664556e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3202639886426448e-05 | 2.243839201978072e-05 | 3.29% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3252895219247304e-05 | 2.2602382249210317e-05 | 2.80% | 2.88% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.349991255846107e-05 | 2.246588673950351e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.343924735740345e-05 | 2.2644443546508992e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3385405659539746e-05 | 2.2660125852459174e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3302206241430013e-05 | 2.240403538545637e-05 | 3.85% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.371721710232653e-05 | 2.2813514673213343e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.333347548205068e-05 | 2.243353429485387e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.361156515169544e-05 | 2.2656427528344982e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3434750740978887e-05 | 2.2784388845810203e-05 | 2.78% | 2.85% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3810674316973303e-05 | 2.2685188581123482e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3753898905261842e-05 | 2.2734604602605102e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.239547519728395e-05 | 5.90532224219288e-05 | 28.33% | 39.53% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.31382538625647e-05 | 5.912707244901216e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.179312836312707e-05 | 5.9638827451381435e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.17457761844264e-05 | 5.9071600820835626e-05 | 27.74% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.226122703085443e-05 | 5.937393396531789e-05 | 27.82% | 38.55% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.173244012391578e-05 | 5.898515664699402e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.966093196970282e-05 | 5.65451108707521e-05 | 29.02% | 40.88% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.327405550440927e-05 | 5.925427766542303e-05 | 28.84% | 40.54% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.307391304389725e-05 | 5.9276505689278354e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.183371181443498e-05 | 6.0420226135196805e-05 | 26.17% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.18876388938008e-05 | 5.92397193469809e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.296002548021697e-05 | 5.8521818466662145e-05 | 29.46% | 41.76% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.237300552798887e-05 | 6.126452555617149e-05 | 25.63% | 34.45% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.218977146447253e-05 | 5.906266280412066e-05 | 28.14% | 39.16% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.193407961735777e-05 | 6.136319251006898e-05 | 25.11% | 33.52% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.282953149578466e-05 | 5.9535937165880325e-05 | 28.12% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.179822531118282e-05 | 5.94767473425328e-05 | 27.29% | 37.53% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.266456093814456e-05 | 5.8851164241198844e-05 | 28.81% | 40.46% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.218929397422946e-05 | 5.9203338411529e-05 | 27.97% | 38.83% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.182808481071303e-05 | 6.0080230447893814e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.258758197965857e-05 | 5.917021542534311e-05 | 28.35% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.28458307625059e-05 | 5.906045522547849e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.220755922489121e-05 | 5.883523222445814e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.259158303672126e-05 | 5.931083956872689e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.237644053596613e-05 | 5.9293095318421846e-05 | 28.02% | 38.93% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.16009079237372e-05 | 5.916415208969124e-05 | 27.50% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.067697375616507e-05 | 5.684665522318842e-05 | 29.54% | 41.92% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.462229574861974e-05 | 5.660815172923224e-05 | 33.10% | 49.49% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.290189414078539e-05 | 5.920341793856281e-05 | 28.59% | 40.03% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.298242649858757e-05 | 6.000937638111914e-05 | 27.68% | 38.28% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.247529896704689e-05 | 6.119062183914305e-05 | 25.81% | 34.78% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.350732420600549e-05 | 5.955284175830317e-05 | 28.69% | 40.22% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.333850875095573e-05 | 5.912131442278957e-05 | 29.06% | 40.96% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.234676038682317e-05 | 5.910356595308629e-05 | 28.23% | 39.33% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.307883587291249e-05 | 5.813773746906253e-05 | 30.02% | 42.90% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.123055266659609e-05 | 5.7629503994582105e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.263547610201256e-05 | 6.045800094109474e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.25655098130783e-05 | 6.017779425450851e-05 | 27.12% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.26187698171802e-05 | 6.020054059328963e-05 | 27.13% | 37.24% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.278103218983851e-05 | 6.04398838042679e-05 | 26.99% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.405134248304805e-05 | 6.02796708112385e-05 | 28.28% | 39.44% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.284280206337824e-05 | 5.979094778700229e-05 | 27.83% | 38.55% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.319103670849906e-05 | 5.858195845283615e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.17137936963362e-05 | 5.93113500733328e-05 | 27.42% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.277301219219535e-05 | 6.004675805997424e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.320116683857284e-05 | 5.984327037056195e-05 | 28.07% | 39.03% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.18878211364074e-05 | 6.217911330122297e-05 | 24.07% | 31.70% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.281095064443846e-05 | 6.0192402036573374e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.381420032478278e-05 | 5.946395805187513e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.248342087714592e-05 | 5.9707209396144077e-05 | 27.61% | 38.15% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.355841034402889e-05 | 5.893316075349019e-05 | 29.47% | 41.79% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.276707133785648e-05 | 5.9544785021158976e-05 | 28.06% | 39.00% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.285243053104025e-05 | 5.9668069651508084e-05 | 27.98% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.301764070826367e-05 | 5.814280154353559e-05 | 29.96% | 42.78% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.225960632052387e-05 | 5.976560019641434e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.065306956436836e-05 | 5.702750749767079e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.174174405615476e-05 | 5.721812726035227e-05 | 30.00% | 42.86% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.305390861481176e-05 | 5.964005651801853e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.174923075589099e-05 | 5.9448927994105324e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.280835479388329e-05 | 6.0614934505532154e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.344398149718006e-05 | 6.032710794274664e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.25158346384662e-05 | 6.055250795487926e-05 | 26.62% | 36.27% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.12588521350194e-05 | 5.9758139488024083e-05 | 26.46% | 35.98% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.260784413012386e-05 | 6.008810200248438e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.098506785597772e-05 | 5.545958736322438e-05 | 31.52% | 46.03% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.193071316117574e-05 | 5.888507256408981e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.311334929186846e-05 | 5.9835646931806545e-05 | 28.01% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.205579784498634e-05 | 5.987748855324366e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.203713961971798e-05 | 6.026010922474311e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.288837421113221e-05 | 6.003732834892931e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.231798486240242e-05 | 5.984453517859794e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.24125983622135e-05 | 5.932318067918946e-05 | 28.02% | 38.92% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.365516161234174e-05 | 6.0410782963976097e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.263932907436705e-05 | 6.010920148601243e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.248028278229188e-05 | 5.892205026851351e-05 | 28.56% | 39.98% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.357190183800957e-05 | 5.9719811492344454e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.297930227963689e-05 | 5.975476589153477e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.26397992204131e-05 | 5.9539717275665526e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.29433377575843e-05 | 5.993510137452247e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.173155231230853e-05 | 6.000559955012746e-05 | 26.58% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.283153078394579e-05 | 6.007454627094755e-05 | 27.47% | 37.88% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.295015233678777e-05 | 6.022465030588019e-05 | 27.40% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.206819891950393e-05 | 5.901645580983919e-05 | 28.09% | 39.06% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.252315873561781e-05 | 5.959502423157254e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.080989615934907e-05 | 5.718744284018923e-05 | 29.23% | 41.31% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.118914599161036e-05 | 5.6113621906876145e-05 | 30.89% | 44.69% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.248393805518121e-05 | 5.920724874280465e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.095065748360483e-05 | 5.8523557548510644e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.349401111879623e-05 | 6.0557242492283696e-05 | 27.47% | 37.88% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.345053677589646e-05 | 6.037762974303666e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.215472471433139e-05 | 6.009196716551899e-05 | 26.86% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.175392017296957e-05 | 6.116748847009885e-05 | 25.18% | 33.66% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.199942366261583e-05 | 5.9238233050665474e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.954953983031259e-05 | 5.613129821281999e-05 | 29.44% | 41.72% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.308253447959504e-05 | 5.92931501179078e-05 | 28.63% | 40.12% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.23926025101945e-05 | 5.84268600418004e-05 | 29.09% | 41.02% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.298528218158586e-05 | 6.026394666131004e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010304009788710362 | 7.570341538490459e-05 | 26.53% | 36.11% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.052766902425011e-05 | 5.662869253858933e-05 | 29.68% | 42.20% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.23525095987187e-05 | 5.9414110697291446e-05 | 27.85% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.27793972623703e-05 | 5.927659637082556e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.19483723063477e-05 | 5.946164297010198e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.1632556425284e-05 | 5.824580406124662e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.276372156742444e-05 | 6.032035426422538e-05 | 27.12% | 37.21% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.834160217477096e-05 | 7.397027760985454e-05 | 24.78% | 32.95% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.982323145595234e-05 | 5.6676325756516126e-05 | 29.00% | 40.84% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.687716526054861e-05 | 7.099679445611465e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.285762971500448e-05 | 6.0295286939502525e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.117816004377663e-05 | 5.959264522393517e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.190667319713085e-05 | 5.908717138917533e-05 | 27.86% | 38.62% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.138528753418362e-05 | 5.928418441238993e-05 | 27.16% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.272877074569158e-05 | 5.992511067378011e-05 | 27.56% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.345111281602345e-05 | 6.243401027480398e-05 | 25.18% | 33.66% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.889125949280474e-05 | 5.724288859932371e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.970610933667062e-05 | 5.6917836128288796e-05 | 28.59% | 40.04% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.252426743850057e-05 | 5.942270237400395e-05 | 27.99% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.116609337748508e-05 | 5.9072041303092104e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.187409056971177e-05 | 5.908142060547217e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.179005643571542e-05 | 5.9264081163237386e-05 | 27.54% | 38.01% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.148759715776765e-05 | 5.7706524837351347e-05 | 29.18% | 41.21% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.173642601973305e-05 | 5.806425421287015e-05 | 28.96% | 40.77% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.064586993388102e-05 | 5.7529019006528506e-05 | 28.66% | 40.18% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.793951698894283e-05 | 5.4252270439840574e-05 | 30.39% | 43.66% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.149156274294871e-05 | 5.836211789180035e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.144283408335203e-05 | 5.7779345575873775e-05 | 29.06% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.160395079798388e-05 | 5.8643439990400356e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010335031473924028 | 7.75891633463726e-05 | 24.93% | 33.20% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.05348176641359e-05 | 5.8416571229484895e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.181176538197907e-05 | 5.773635372456435e-05 | 29.43% | 41.70% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.082338531756488e-05 | 5.8364463344557816e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.121129159770073e-05 | 5.8773803127767965e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.21432826221098e-05 | 5.846603290937959e-05 | 28.82% | 40.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.187571193422384e-05 | 5.854124272152134e-05 | 28.50% | 39.86% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.51203698940016e-05 | 6.990818483709208e-05 | 26.51% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.138405677038248e-05 | 5.815244304972694e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.688943372891182e-05 | 7.345038840045973e-05 | 24.19% | 31.91% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.065816282372869e-05 | 5.841218370830715e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.349101830134883e-05 | 5.690671629595291e-05 | 31.84% | 46.72% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.106081958710867e-05 | 5.686912290797657e-05 | 29.84% | 42.54% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.135026022734481e-05 | 5.867236105786196e-05 | 27.88% | 38.65% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.153439110549517e-05 | 5.815226980225593e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.192464833253357e-05 | 5.776810608801202e-05 | 29.49% | 41.82% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.845286956137717e-05 | 5.4403978508173726e-05 | 30.65% | 44.20% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.952978713311026e-05 | 5.471162931874426e-05 | 31.21% | 45.36% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.070442543728961e-05 | 5.763776301022499e-05 | 28.58% | 40.02% | 1.40x | ✅ |
| `hexbytes_new['']` | 7.088780430673459e-05 | 3.717920214070973e-05 | 47.55% | 90.67% | 1.91x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.08381729076297e-05 | 4.949742961882397e-05 | 45.51% | 83.52% | 1.84x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.12901110470186e-05 | 4.9569092494821324e-05 | 45.70% | 84.17% | 1.84x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.786087664833968e-05 | 4.745619865953935e-05 | 45.99% | 85.14% | 1.85x | ✅ |
| `hexbytes_new['0x']` | 7.734214501135582e-05 | 3.731379415860181e-05 | 51.75% | 107.27% | 2.07x | ✅ |
| `hexbytes_new['0x1234']` | 8.549765583795547e-05 | 4.616123251737869e-05 | 46.01% | 85.22% | 1.85x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.48734384069494e-05 | 4.373696492167761e-05 | 48.47% | 94.05% | 1.94x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.624874060832549e-05 | 4.4981086822392796e-05 | 47.85% | 91.74% | 1.92x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.511969825899141e-05 | 4.477347057946026e-05 | 47.40% | 90.11% | 1.90x | ✅ |
| `hexbytes_new['abc']` | 8.205357686966255e-05 | 4.712751713018254e-05 | 42.56% | 74.11% | 1.74x | ✅ |
| `hexbytes_new['deadbeef']` | 7.594046936834116e-05 | 4.167178089675495e-05 | 45.13% | 82.23% | 1.82x | ✅ |
| `hexbytes_new[0-9]` | 4.32391866707604e-05 | 2.6096130303851546e-05 | 39.65% | 65.69% | 1.66x | ✅ |
| `hexbytes_new[0]` | 0.00012147360000039824 | 5.898221385802156e-05 | 51.44% | 105.95% | 2.06x | ✅ |
| `hexbytes_new[123456]` | 0.00012783664552421076 | 6.42451952541813e-05 | 49.74% | 98.98% | 1.99x | ✅ |
| `hexbytes_new[2**16]` | 0.00012899164078214196 | 6.477412555400336e-05 | 49.78% | 99.14% | 1.99x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013327829887405758 | 7.14616676658199e-05 | 46.38% | 86.50% | 1.87x | ✅ |
| `hexbytes_new[2**32]` | 0.00012888422407988012 | 6.858295083146188e-05 | 46.79% | 87.92% | 1.88x | ✅ |
| `hexbytes_new[2**64]` | 0.0001307164182086684 | 7.068757599158942e-05 | 45.92% | 84.92% | 1.85x | ✅ |
| `hexbytes_new[2**8]` | 0.00012489451176449847 | 6.427741215711869e-05 | 48.53% | 94.31% | 1.94x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.324804341271748e-05 | 2.7337381673853546e-05 | 36.79% | 58.20% | 1.58x | ✅ |
| `hexbytes_new[False]` | 5.7542648767867024e-05 | 2.7378319494961528e-05 | 52.42% | 110.18% | 2.10x | ✅ |
| `hexbytes_new[True]` | 6.0374948887364585e-05 | 2.73211104636465e-05 | 54.75% | 120.98% | 2.21x | ✅ |
| `hexbytes_new[all byte values]` | 4.3536650777960076e-05 | 2.6893745841350606e-05 | 38.23% | 61.88% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.29779954711265e-05 | 2.6672594696847277e-05 | 37.94% | 61.13% | 1.61x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.2538916479430376e-05 | 2.690549654860995e-05 | 36.75% | 58.10% | 1.58x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2890489870423805e-05 | 2.6523646326315215e-05 | 38.16% | 61.71% | 1.62x | ✅ |
| `hexbytes_new[b'']` | 4.2139885089912986e-05 | 2.6485647371229392e-05 | 37.15% | 59.10% | 1.59x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.281992702351694e-05 | 2.6157054395036364e-05 | 38.91% | 63.70% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.209713031739145e-05 | 2.6064592012718416e-05 | 38.08% | 61.51% | 1.62x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.260165115759504e-05 | 2.6371385785080617e-05 | 38.10% | 61.54% | 1.62x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.589062480301016e-05 | 3.815512184711202e-05 | 31.73% | 46.48% | 1.46x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.403057460825653e-05 | 2.6251221710913063e-05 | 40.38% | 67.73% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.294391501444021e-05 | 2.625855093568112e-05 | 38.85% | 63.54% | 1.64x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.237802283683679e-05 | 2.6113483699459242e-05 | 38.38% | 62.28% | 1.62x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2992865260140275e-05 | 2.6178278960295655e-05 | 39.11% | 64.23% | 1.64x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.253622636523762e-05 | 2.6142689077856537e-05 | 38.54% | 62.71% | 1.63x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.280101714362397e-05 | 2.670987500743659e-05 | 37.60% | 60.24% | 1.60x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.039340191686589e-05 | 3.35407930403703e-05 | 33.44% | 50.25% | 1.50x | ✅ |
| `hexbytes_new[b'abc']` | 4.351984744187119e-05 | 2.6314898261348562e-05 | 39.53% | 65.38% | 1.65x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.924882572883054e-05 | 3.7070337109455526e-05 | 46.47% | 86.80% | 1.87x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.865879840472956e-05 | 3.795186682125277e-05 | 44.72% | 80.91% | 1.81x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.92051621680794e-05 | 3.906494559943062e-05 | 43.55% | 77.15% | 1.77x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.895108774092821e-05 | 3.760643231876285e-05 | 45.46% | 83.35% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.934933758033202e-05 | 3.8043765234650245e-05 | 45.14% | 82.29% | 1.82x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.154259188304492e-05 | 3.7347336419638925e-05 | 47.80% | 91.56% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.691779239544e-05 | 3.5881522981760556e-05 | 46.38% | 86.50% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.916644721487588e-05 | 3.707497534790335e-05 | 46.40% | 86.56% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.023605069949667e-05 | 3.7606917412093584e-05 | 46.46% | 86.76% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.944845212427651e-05 | 3.7462212275079345e-05 | 46.06% | 85.38% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.784037479361675e-05 | 5.4127738491531136e-05 | 38.38% | 62.28% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.942490371884399e-05 | 3.786419300321061e-05 | 45.46% | 83.35% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.144417930880813e-05 | 3.760398169637676e-05 | 47.37% | 89.99% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.883889537013713e-05 | 3.690421343343348e-05 | 46.39% | 86.53% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.921766822811658e-05 | 3.69785762602498e-05 | 46.58% | 87.18% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.941374860156565e-05 | 3.765025574406209e-05 | 45.76% | 84.36% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.987261833150233e-05 | 3.836987056775855e-05 | 45.09% | 82.10% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.436291548393331e-05 | 4.996119468824985e-05 | 40.78% | 68.86% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.84475526276227e-05 | 3.759934389772617e-05 | 45.07% | 82.04% | 1.82x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.451646979711346e-05 | 5.0827760892027275e-05 | 39.86% | 66.28% | 1.66x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.02805573041443e-05 | 3.7690422689619085e-05 | 46.37% | 86.47% | 1.86x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.964449036962057e-05 | 3.707497999939228e-05 | 46.77% | 87.85% | 1.88x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.974647361849695e-05 | 3.767885807057385e-05 | 45.98% | 85.11% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.97261549175874e-05 | 3.771203849116904e-05 | 45.91% | 84.89% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.000643452950382e-05 | 3.7555088683760594e-05 | 46.35% | 86.41% | 1.86x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.986597381971087e-05 | 3.7480902225980816e-05 | 46.35% | 86.40% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.875539139841834e-05 | 3.782587262936416e-05 | 44.98% | 81.77% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.986082850435396e-05 | 3.7667651966421094e-05 | 46.08% | 85.47% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.930302979786374e-05 | 3.781380607530014e-05 | 45.44% | 83.27% | 1.83x | ✅ |
| `hexbytes_new[long alternating]` | 5.104927847461075e-05 | 3.3206472204869993e-05 | 34.95% | 53.73% | 1.54x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.33941205709884e-05 | 4.321597931252133e-05 | 48.18% | 92.97% | 1.93x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.343239782615673e-05 | 4.31307461574922e-05 | 48.30% | 93.44% | 1.93x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.310504517979076e-05 | 4.331295322967082e-05 | 47.88% | 91.87% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.43578950971803e-05 | 4.355653393895579e-05 | 48.37% | 93.67% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.350482009135351e-05 | 4.328347990039836e-05 | 48.17% | 92.93% | 1.93x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.418245133308389e-05 | 4.3104843170141914e-05 | 48.80% | 95.30% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.16670020370079e-05 | 3.949402578395808e-05 | 51.64% | 106.78% | 2.07x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.414462480244782e-05 | 4.2801493239288055e-05 | 49.13% | 96.59% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.400868981741798e-05 | 4.321310426895086e-05 | 48.56% | 94.41% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.455552116281636e-05 | 4.3503569808495486e-05 | 48.55% | 94.36% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010305093069751761 | 6.072867177761178e-05 | 41.07% | 69.69% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.298567379370851e-05 | 4.27369373533555e-05 | 48.50% | 94.18% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.42089942852863e-05 | 4.266893871163908e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.337231982226526e-05 | 4.338129289391536e-05 | 47.97% | 92.18% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.254668955252301e-05 | 4.339669686790877e-05 | 47.43% | 90.21% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.40657775951673e-05 | 4.234327471562352e-05 | 49.63% | 98.53% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.356457063648914e-05 | 4.298029667119506e-05 | 48.57% | 94.43% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.845937433355294e-05 | 5.583482876694573e-05 | 43.29% | 76.34% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.489607222820646e-05 | 4.233409720680936e-05 | 50.13% | 100.54% | 2.01x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.98828766999488e-05 | 5.696237217307924e-05 | 42.97% | 75.35% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.574233386021318e-05 | 4.353720003788475e-05 | 49.22% | 96.94% | 1.97x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.316728905768576e-05 | 4.391765795180261e-05 | 47.19% | 89.37% | 1.89x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.33069546903585e-05 | 4.322721919697296e-05 | 48.11% | 92.72% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.323798546719053e-05 | 4.2778722479093196e-05 | 48.61% | 94.58% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.4058672212827e-05 | 4.330158541235663e-05 | 48.49% | 94.12% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.334889789452623e-05 | 4.341889715371332e-05 | 47.91% | 91.96% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.410545725262877e-05 | 4.328793812060419e-05 | 48.53% | 94.29% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.393237762226811e-05 | 4.333610276475428e-05 | 48.37% | 93.68% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.375040244224084e-05 | 4.316580460201397e-05 | 48.46% | 94.02% | 1.94x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.246868627429666e-05 | 2.6744996656935956e-05 | 37.02% | 58.79% | 1.59x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.263028767945216e-05 | 2.6057066824448672e-05 | 38.88% | 63.60% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.322988907955655e-05 | 2.615558227624918e-05 | 39.50% | 65.28% | 1.65x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.318747024304831e-05 | 2.635158396246492e-05 | 38.98% | 63.89% | 1.64x | ✅ |
| `hexbytes_new[palindrome]` | 4.252804330517492e-05 | 2.636744998543955e-05 | 38.00% | 61.29% | 1.61x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.325075794734043e-05 | 2.743377294276552e-05 | 36.57% | 57.66% | 1.58x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2650558087442775e-05 | 2.6142427678991554e-05 | 38.71% | 63.15% | 1.63x | ✅ |
| `hexbytes_new[single null byte]` | 4.2438786493578065e-05 | 2.62305329783184e-05 | 38.19% | 61.79% | 1.62x | ✅ |
| `hexbytes_new[two patterns]` | 4.300542495352237e-05 | 2.6760515339838644e-05 | 37.77% | 60.70% | 1.61x | ✅ |
| `hexbytes_repr[0-9]` | 2.872566614971813e-05 | 1.4659679789470288e-05 | 48.97% | 95.95% | 1.96x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012097528343540317 | 4.082255469656911e-05 | 66.26% | 196.34% | 2.96x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012101296949902636 | 4.0889047937087264e-05 | 66.21% | 195.95% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.846516875197556e-05 | 1.9757204925663502e-05 | 59.23% | 145.30% | 2.45x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.9198864239180924e-05 | 1.9822463312483787e-05 | 59.71% | 148.20% | 2.48x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.1706455553671124e-05 | 1.7753739168724917e-05 | 57.43% | 134.92% | 2.35x | ✅ |
| `hexbytes_repr[b'']` | 2.1281227843736355e-05 | 1.213839677469357e-05 | 42.96% | 75.32% | 1.75x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.6651239026327626e-05 | 1.7438500028313234e-05 | 52.42% | 110.17% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.5927559436728758e-05 | 1.3896156063278452e-05 | 46.40% | 86.58% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.166356011023328e-05 | 2.357859525097921e-05 | 61.76% | 161.52% | 2.62x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007587736933019505 | 0.00022222049450458444 | 70.71% | 241.45% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.5846472886860315e-05 | 1.4515828231319974e-05 | 43.84% | 78.06% | 1.78x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.6720775118343867e-05 | 1.3999502854561541e-05 | 47.61% | 90.87% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.831661231077688e-05 | 1.4514621769713463e-05 | 48.74% | 95.09% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.7975403289546915e-05 | 1.4348914150039018e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6114682665134736e-05 | 1.3892002697369287e-05 | 46.80% | 87.98% | 1.88x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.862962974479862e-05 | 1.9963515407331704e-05 | 58.95% | 143.59% | 2.44x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039427348447300685 | 0.00011876243514485907 | 69.88% | 231.99% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6418753813827575e-05 | 1.4174768592177355e-05 | 46.35% | 86.38% | 1.86x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003978778695282324 | 0.00012251765528731624 | 69.21% | 224.75% | 3.25x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.768270914428448e-05 | 3.374569708172995e-05 | 65.45% | 189.47% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8627092914797454e-05 | 1.4387501168695416e-05 | 49.74% | 98.97% | 1.99x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7361824310599784e-05 | 1.396790171981723e-05 | 48.95% | 95.89% | 1.96x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7323370495303222e-05 | 1.382805633311044e-05 | 49.39% | 97.59% | 1.98x | ✅ |
| `hexbytes_repr[palindrome]` | 3.176526098555952e-05 | 1.5648278370411235e-05 | 50.74% | 103.00% | 2.03x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.202595140925878e-05 | 2.3644797130939777e-05 | 61.88% | 162.32% | 2.62x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.535232299440646e-05 | 1.3744784468252905e-05 | 45.78% | 84.45% | 1.84x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5296525236002765e-05 | 1.3483402455111459e-05 | 46.70% | 87.61% | 1.88x | ✅ |
| `hexbytes_repr[two patterns]` | 4.862438137261551e-05 | 1.9606656606642472e-05 | 59.68% | 148.00% | 2.48x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.544235148859773e-05 | 1.370188903873984e-05 | 11.27% | 12.70% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.227200566071145e-05 | 4.021364210912594e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.5166155549740956e-05 | 4.040208903397559e-05 | 10.55% | 11.79% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0509157433635433e-05 | 1.8923473901335137e-05 | 7.73% | 8.38% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.102063999835031e-05 | 2.0622411130859385e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8845274486480745e-05 | 1.7181749328408585e-05 | 8.83% | 9.68% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0080841905437211e-05 | 1.1658829265170503e-05 | -15.65% | -13.53% | 0.86x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7496683259838742e-05 | 1.5927736174849307e-05 | 8.97% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4860350955516212e-05 | 1.2858530678920156e-05 | 13.47% | 15.57% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.520908307069086e-05 | 2.2864916435974894e-05 | 9.30% | 10.25% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0002228400227782363 | 0.00022152006307133462 | 0.59% | 0.60% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4688160305671577e-05 | 1.288246039598296e-05 | 12.29% | 14.02% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4890606877385047e-05 | 1.3086290605888474e-05 | 12.12% | 13.79% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5113177441256469e-05 | 1.3347142990239388e-05 | 11.69% | 13.23% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5131895012593648e-05 | 1.3492781570164521e-05 | 10.83% | 12.15% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4741810922637845e-05 | 1.2888813418039586e-05 | 12.57% | 14.38% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0538054271904383e-05 | 1.8887889941155288e-05 | 8.03% | 8.74% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001220273422405629 | 0.00012161504481905901 | 0.34% | 0.34% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4639706233970429e-05 | 1.3062715840253686e-05 | 10.77% | 12.07% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012319042279556865 | 0.0001219906679716342 | 0.97% | 0.98% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4888799019459485e-05 | 3.2991316415402576e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.546567489556199e-05 | 1.3562740353368524e-05 | 12.30% | 14.03% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5107767294871079e-05 | 1.3147390484659501e-05 | 12.98% | 14.91% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.4965851897216486e-05 | 1.2984114821758704e-05 | 13.24% | 15.26% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6300964550414532e-05 | 1.4800251494944235e-05 | 9.21% | 10.14% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.525250061269466e-05 | 2.268122398134421e-05 | 10.18% | 11.34% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4594484070274873e-05 | 1.2883561770703406e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4602243716654297e-05 | 1.2583425810091396e-05 | 13.83% | 16.04% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0620916711129938e-05 | 1.8774365193650575e-05 | 8.95% | 9.84% | 1.10x | ✅ |
