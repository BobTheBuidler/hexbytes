#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4974771827181897e-05 | 2.3489039626820835e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.5042264261058584e-05 | 2.364848536772021e-05 | 5.57% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.5137855625638378e-05 | 2.3720033546297786e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.5030684153374865e-05 | 2.3552104820489803e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.505620069627172e-05 | 2.3483708569485328e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5064513305574524e-05 | 2.3718124057050798e-05 | 5.37% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.4985265340223425e-05 | 2.3454761228561156e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.505699557364792e-05 | 2.3524084615638373e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.506672216969694e-05 | 2.3596224371056686e-05 | 5.87% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.497479688223083e-05 | 2.3483547967537782e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4442670332048083e-05 | 2.3401986597870747e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5074086215810466e-05 | 2.3598864463180418e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.5065014151333793e-05 | 2.3543938923351243e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.5220519874327197e-05 | 2.37157888911254e-05 | 5.97% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.504567603742626e-05 | 2.3494605446047307e-05 | 6.19% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4932125768517834e-05 | 2.3438983457583956e-05 | 5.99% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4882742317005563e-05 | 2.339541785963384e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.5031112124800094e-05 | 2.3545826504433072e-05 | 5.93% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4832978894317234e-05 | 2.3595585601205813e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4779676951389124e-05 | 2.3612256333453484e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4824238834000748e-05 | 2.3566153141899418e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.5154203720767808e-05 | 2.3903923703467056e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.5181425994367855e-05 | 2.39232222505473e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4993928272304583e-05 | 2.3538769680617625e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.5077524352934472e-05 | 2.35907031759849e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4949906681915885e-05 | 2.373517911646081e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3531756124396414e-05 | 2.2741287052293544e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3576078835835645e-05 | 2.2679761240140386e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3629023700159172e-05 | 2.2722122217288658e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3975276876259966e-05 | 2.2800886374743004e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3189177823695155e-05 | 2.2679946931536876e-05 | 2.20% | 2.25% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3624156649738275e-05 | 2.2553473080793245e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.353438258120873e-05 | 2.2734915814411394e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.374878959330058e-05 | 2.2614185246510433e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.41279313863889e-05 | 2.2596522353938602e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3554666650036696e-05 | 2.2645970119406046e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3512114840641765e-05 | 2.271148158157297e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.377904033408723e-05 | 2.2618658803571557e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3571377122273238e-05 | 2.2711353447942822e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3752596990966765e-05 | 2.2615238351887905e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3661120894013888e-05 | 2.2695572302769318e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3429939678251354e-05 | 2.2578077607577794e-05 | 3.64% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3586346502094735e-05 | 2.2583989892457297e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3596641890355795e-05 | 2.284988144270888e-05 | 3.16% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3579629902354034e-05 | 2.272256452013501e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.348886390218501e-05 | 2.26663205816842e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3755756155565336e-05 | 2.2684444549592303e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.349535370776188e-05 | 2.2770975763136598e-05 | 3.08% | 3.18% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.337190945216496e-05 | 2.2694451451694404e-05 | 2.90% | 2.99% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3599027229104353e-05 | 2.281287201377941e-05 | 3.33% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3479737898393928e-05 | 2.2474100883792333e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3556955424328008e-05 | 2.2498143798931113e-05 | 4.49% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3544149302085754e-05 | 2.266364270510691e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.349938523680419e-05 | 2.267407240939456e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3941628878856478e-05 | 2.238562197061027e-05 | 6.50% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3459215480275835e-05 | 2.25035480580949e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3692088205424884e-05 | 2.2429812264125767e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3446280066150825e-05 | 2.24697307576066e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3563639894989885e-05 | 2.242449026545892e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.356930783917189e-05 | 2.255828929172418e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.346190082259289e-05 | 2.2626844176141594e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.362062629767284e-05 | 2.252990877489162e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3937010492767375e-05 | 2.258784613295552e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3646103622346774e-05 | 2.2537096775883214e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.348208895580977e-05 | 2.2687027363485923e-05 | 3.39% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3991542947151564e-05 | 2.3337377714610525e-05 | 2.73% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3156590400523595e-05 | 2.2520134405915174e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.4008837328638457e-05 | 2.2551398804038836e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.357539583778391e-05 | 2.2584879369159534e-05 | 4.20% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3533563567868987e-05 | 2.2618566487134104e-05 | 3.89% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3554919018231658e-05 | 2.255088105796229e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3492314519807196e-05 | 2.2429311127976137e-05 | 4.52% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3914905642871082e-05 | 2.2409783783821288e-05 | 6.29% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3402988815528228e-05 | 2.2310055566441695e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3488472063617166e-05 | 2.2483522306279873e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3571362515272675e-05 | 2.2638198058688688e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3684285678268387e-05 | 2.2492235377861063e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.366675757241078e-05 | 2.2525830985712013e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3805169802398606e-05 | 2.245219139330297e-05 | 5.68% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.351877033672121e-05 | 2.250451786009603e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.38056461531784e-05 | 2.2675536027782405e-05 | 4.75% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.402414487694682e-05 | 2.255395929782672e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.379310589411092e-05 | 2.270728452906697e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3678709834624557e-05 | 2.2926074692318642e-05 | 3.18% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3850792470361628e-05 | 2.271798365996102e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.343255693489763e-05 | 2.26193151602647e-05 | 3.47% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.352765719876344e-05 | 2.2866431282427788e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.376434511538767e-05 | 2.266823973774627e-05 | 4.61% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.374554875181984e-05 | 2.2639413814062238e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3587271081151273e-05 | 2.2660862347001356e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3618608694549723e-05 | 2.252422297816767e-05 | 4.63% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3878174196126332e-05 | 2.254063021125863e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3745435800092113e-05 | 2.2745217667866628e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3788169696168914e-05 | 2.3546484888022876e-05 | 1.02% | 1.03% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3646154715422308e-05 | 2.2606969852977713e-05 | 4.39% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3511709488648884e-05 | 2.257585984883315e-05 | 3.98% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3340685865710936e-05 | 2.5423726518153615e-05 | -8.92% | -8.19% | 0.92x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3175433063217012e-05 | 2.2550647798866564e-05 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.406417065333271e-05 | 2.2769548104464662e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.381747839094766e-05 | 2.264675801248471e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3924167514143954e-05 | 2.2585441713199425e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.4276779224433546e-05 | 2.2666776362671148e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.373319545585192e-05 | 2.2575056855609498e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3723200387610405e-05 | 2.2576568080127513e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.376872653679594e-05 | 2.2603089299927364e-05 | 4.90% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.401548532433942e-05 | 2.2681371105368242e-05 | 5.56% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.352170183896843e-05 | 2.264768518871492e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3868960758809386e-05 | 2.2630745109388206e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3787084368097443e-05 | 2.2591931712582734e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3443288876369168e-05 | 2.2621026493206824e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3633027335032908e-05 | 2.264748181208867e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.359470180751561e-05 | 2.3024799231359857e-05 | 2.42% | 2.48% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.364100012539441e-05 | 2.269375385658395e-05 | 4.01% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3738466070879168e-05 | 2.2705073010270786e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3083935534710256e-05 | 2.2562207394486284e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3595955767761793e-05 | 2.265158743013335e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.356127624915128e-05 | 2.255450410187886e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3504053908103263e-05 | 2.256094432605327e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3632465595161414e-05 | 2.2708662892991892e-05 | 3.91% | 4.07% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3563574749203147e-05 | 2.2662682119197078e-05 | 3.82% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3696092529924618e-05 | 2.2739265207561733e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3296208823761148e-05 | 2.2652386143788636e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3561565001368354e-05 | 2.2674889307580227e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3172947933503984e-05 | 2.3099970448697076e-05 | 0.31% | 0.32% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3650420659175694e-05 | 2.2677952409556314e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3255683873136807e-05 | 2.26055410408182e-05 | 2.80% | 2.88% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.35395717155596e-05 | 2.2778075907875456e-05 | 3.23% | 3.34% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3591208479724788e-05 | 2.261001301667473e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.388416667117648e-05 | 2.2984125089478068e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3575572267200238e-05 | 2.3043466256344212e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.4525176121878088e-05 | 2.262776935211018e-05 | 7.74% | 8.39% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3961711040371482e-05 | 2.2830564497549335e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3836781520838963e-05 | 2.262661709153705e-05 | 5.08% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3661589646300122e-05 | 2.2725538629943812e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3589117664615136e-05 | 2.267387154898413e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3615789050262544e-05 | 2.2752894466531613e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.4003409113837328e-05 | 2.277283561780547e-05 | 5.13% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3750211963807595e-05 | 2.2549004762433642e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3552691811526164e-05 | 2.264343899004806e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3582286682078357e-05 | 2.2649426760779614e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.404657577595068e-05 | 2.263921945158742e-05 | 5.85% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3598634252889802e-05 | 2.2548374667400764e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.390939727575443e-05 | 2.290618567958284e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.4196300895821903e-05 | 2.292420762344336e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3583930174205246e-05 | 2.2709808222912416e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3473257249084387e-05 | 2.2862810801200704e-05 | 2.60% | 2.67% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.5700675426862197e-05 | 2.2608641714691918e-05 | 12.03% | 13.68% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3819243061133266e-05 | 2.262227306005961e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.400595745917811e-05 | 2.2693251534891668e-05 | 5.47% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3850998087098813e-05 | 2.2687174970925252e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3641713373327925e-05 | 2.2624656566259083e-05 | 4.30% | 4.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.4070159762165555e-05 | 2.2801634528547795e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3494772837147023e-05 | 2.2694280613174702e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3539414480592368e-05 | 2.2541399345093492e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.378670351749675e-05 | 2.2720870991412816e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3702340537911896e-05 | 2.276007528074775e-05 | 3.98% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.381644081747811e-05 | 2.2702645826174637e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.371190746725799e-05 | 2.2871870292634872e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3718511583509918e-05 | 2.2744703308804984e-05 | 4.11% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3983787632075288e-05 | 2.2541244996386022e-05 | 6.01% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3556159738594564e-05 | 2.2700278746338565e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3572105646880208e-05 | 2.257896869417136e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3542898216567608e-05 | 2.266801256491663e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3780395081746797e-05 | 2.25313282501527e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.355476349346277e-05 | 2.254798415098508e-05 | 4.27% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.374057783340221e-05 | 2.277964168459662e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.351085174205443e-05 | 2.2890762876065602e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3661982297913674e-05 | 2.277617709018382e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3598774546248065e-05 | 2.262537666056316e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3706213826537514e-05 | 2.2602373839631426e-05 | 4.66% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.388230786492813e-05 | 2.316317916154929e-05 | 3.01% | 3.10% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3905057368030064e-05 | 2.2806155293750798e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.1807222862445e-05 | 5.9997229144795717e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.24249904829631e-05 | 5.920157512010935e-05 | 28.18% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.28328714937808e-05 | 5.945431886213159e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.171498970646728e-05 | 5.955559021882913e-05 | 27.12% | 37.21% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.198374526523301e-05 | 5.970291985826326e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.240834713923165e-05 | 5.963283501876818e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.969795758647011e-05 | 5.615711002807323e-05 | 29.54% | 41.92% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.198877241525693e-05 | 5.9707745320091644e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.17918064407093e-05 | 5.904714668581873e-05 | 27.81% | 38.52% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.209424241953978e-05 | 5.915423204228146e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.172605460607332e-05 | 6.084237191947639e-05 | 25.55% | 34.32% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.228801489595033e-05 | 6.0288748536475645e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.29471064853363e-05 | 5.8802073098994486e-05 | 29.11% | 41.06% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.230577548053454e-05 | 5.844981281647389e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.253931084951528e-05 | 5.861747710174186e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.184164990140425e-05 | 5.957237184411576e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.198956765488088e-05 | 5.97879290080012e-05 | 27.08% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.226046065150269e-05 | 5.9544669848216484e-05 | 27.61% | 38.15% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.213643088566404e-05 | 5.93551538421285e-05 | 27.74% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.192818568827776e-05 | 5.8958645905785875e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.229289210822741e-05 | 5.96561444752423e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.248348989492053e-05 | 5.918728431986466e-05 | 28.24% | 39.36% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.175582323536863e-05 | 6.00967978423715e-05 | 26.49% | 36.04% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.307541912677158e-05 | 5.940485330270433e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.181666001052151e-05 | 5.9506292464221775e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.201873724236362e-05 | 5.989782829369721e-05 | 26.97% | 36.93% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.014176984330732e-05 | 5.676721928237733e-05 | 29.17% | 41.18% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.023517024714095e-05 | 5.64978863033118e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.258809353715058e-05 | 5.967140330154876e-05 | 27.75% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.320504102969378e-05 | 6.122787136430511e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.386511329115284e-05 | 6.123064384370873e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.302496731844309e-05 | 5.985069594733357e-05 | 27.91% | 38.72% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.298318365560194e-05 | 6.121100322060631e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.203895759292778e-05 | 6.141442517776746e-05 | 25.14% | 33.58% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.272887726066396e-05 | 6.050399462428287e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.16214827041035e-05 | 5.6771679112410643e-05 | 30.45% | 43.77% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.252451973077308e-05 | 5.9740151142291635e-05 | 27.61% | 38.14% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.283976336311851e-05 | 6.04650075915595e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.294582069825671e-05 | 6.10532678095884e-05 | 26.39% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.270162740920786e-05 | 6.184498455353447e-05 | 25.22% | 33.72% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.272839361042966e-05 | 6.0829623135060095e-05 | 26.47% | 36.00% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.292871643170944e-05 | 6.096480926018756e-05 | 26.49% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.286527538676402e-05 | 6.169189214865541e-05 | 25.55% | 34.32% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.31859128628393e-05 | 6.166477882490589e-05 | 25.87% | 34.90% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.287551448522554e-05 | 5.9906497303248574e-05 | 27.72% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.255697961443967e-05 | 6.0019474513974e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.245024547542677e-05 | 6.027867157614011e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.368583503819143e-05 | 5.961465755596654e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.295548379642589e-05 | 6.013928916629497e-05 | 27.50% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.367935308764602e-05 | 6.117696927903594e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.29518578789461e-05 | 6.114044845752947e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.31271907762547e-05 | 6.001667424137732e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.321324121600121e-05 | 6.152099074211855e-05 | 26.07% | 35.26% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.311192821615457e-05 | 6.100328136925232e-05 | 26.60% | 36.24% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.329632569915867e-05 | 6.092306652066112e-05 | 26.86% | 36.72% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.196026160257089e-05 | 5.915536566246934e-05 | 27.82% | 38.55% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.22201035343253e-05 | 5.8548341746049254e-05 | 28.79% | 40.43% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.232190814814828e-05 | 6.145932910340696e-05 | 25.34% | 33.95% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.258868010255385e-05 | 6.088088283508371e-05 | 26.28% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.277245663970874e-05 | 6.0985625647752965e-05 | 26.32% | 35.72% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.267570971055513e-05 | 6.02826868754816e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.201236396290578e-05 | 6.0641328409378736e-05 | 26.06% | 35.24% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.242143073396986e-05 | 6.096030701591221e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.29842379128199e-05 | 6.088649241862836e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.142580388521194e-05 | 5.8121624367200514e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.289277337523963e-05 | 6.050633533544789e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.28780819384874e-05 | 6.123786576120766e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.342995634794507e-05 | 6.132454888673123e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.22942738663925e-05 | 6.074724812180931e-05 | 26.18% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.785850971017545e-05 | 6.0851420685632994e-05 | 30.74% | 44.38% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.237011906797889e-05 | 6.080076536318189e-05 | 26.19% | 35.48% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.304288403907543e-05 | 6.087296798736079e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.201738659781717e-05 | 5.9597350452819365e-05 | 27.34% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.277638928329341e-05 | 6.122039053467858e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.316040604999328e-05 | 6.075082356484656e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.293158447622718e-05 | 6.104704910009789e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.28772422355235e-05 | 6.126042223497819e-05 | 26.08% | 35.29% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.236114128629583e-05 | 6.070609849246297e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.293711693275335e-05 | 6.063671806789155e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.246577336615295e-05 | 6.12691881168452e-05 | 25.70% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.224864790387141e-05 | 5.996223593900379e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.224016008737558e-05 | 6.09850875434254e-05 | 25.85% | 34.85% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.342185923854244e-05 | 6.111968456535099e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.302850608223495e-05 | 6.059758148631242e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.043169036425513e-05 | 5.7865530594262465e-05 | 28.06% | 39.00% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.015650566616349e-05 | 5.710166765296032e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.457282133596841e-05 | 5.97616438055746e-05 | 29.34% | 41.52% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.203658328402279e-05 | 5.94270381270672e-05 | 27.56% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.29050258306599e-05 | 6.144798546843747e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.400912749853867e-05 | 6.043062421078436e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.175442450887898e-05 | 6.064415729453917e-05 | 25.82% | 34.81% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.155910143591384e-05 | 6.021827437330682e-05 | 26.17% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.21928546759113e-05 | 6.023535284823682e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.902845335250642e-05 | 5.6433174885907784e-05 | 28.59% | 40.04% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.220081831219888e-05 | 5.9618531988966806e-05 | 27.47% | 37.88% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.204873600488273e-05 | 5.928874043575832e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.301904613657263e-05 | 6.0707700604737385e-05 | 26.87% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.0001028450807974983 | 7.734653058149073e-05 | 24.79% | 32.97% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.913357391067161e-05 | 5.803811356674177e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.113912022820907e-05 | 6.01611375876894e-05 | 25.85% | 34.87% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.189697957093498e-05 | 6.016563712301712e-05 | 26.53% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.223554533126398e-05 | 6.0642442844547924e-05 | 26.26% | 35.61% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.100110586110586e-05 | 6.040496717309101e-05 | 25.43% | 34.10% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.276619288987653e-05 | 5.990412975134792e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.9628407530254e-05 | 7.427082725696609e-05 | 25.45% | 34.14% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.958902295568831e-05 | 5.762582377234449e-05 | 27.60% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.817604565083925e-05 | 7.205372688084796e-05 | 26.61% | 36.25% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.268140690101945e-05 | 6.048683274366489e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.180102919406123e-05 | 6.016158652904973e-05 | 26.45% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.116429355680348e-05 | 6.020779686382415e-05 | 25.82% | 34.81% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.240387468311022e-05 | 6.021643443798017e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.146512842255711e-05 | 6.0604230841119465e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.196749554932285e-05 | 6.027619760848659e-05 | 26.46% | 35.99% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.909181873562078e-05 | 5.732704480460111e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.888801554615764e-05 | 5.7596226580172724e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.189265495283023e-05 | 5.9413997318123534e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.9152973530276e-05 | 5.969624430248428e-05 | 24.58% | 32.59% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.18593062971767e-05 | 5.913166823805286e-05 | 27.76% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.208000934187286e-05 | 6.035494441709009e-05 | 26.47% | 36.00% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.123016792000633e-05 | 5.8129192176410106e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.021587733150122e-05 | 5.905375380211634e-05 | 26.38% | 35.84% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.11784417472778e-05 | 5.8444388936553094e-05 | 28.01% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.728551451728731e-05 | 5.531194321309669e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.088997614324134e-05 | 5.956166112943284e-05 | 26.37% | 35.81% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.118982444830399e-05 | 5.85445823673635e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.134790412224398e-05 | 5.889806324885278e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010385878998054752 | 7.925633258559273e-05 | 23.69% | 31.04% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.144931092152343e-05 | 5.896924712696603e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.128890928782362e-05 | 5.894104014551262e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.124802631170336e-05 | 5.848885807476847e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.094466198643525e-05 | 5.8836590801745915e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.153681271141924e-05 | 5.9113138530114735e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.409464076440318e-05 | 5.858039621103465e-05 | 30.34% | 43.55% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.760208603052784e-05 | 6.966693940122302e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.067368753605621e-05 | 5.85494093620054e-05 | 27.42% | 37.79% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.775082075122012e-05 | 7.343030965253507e-05 | 24.88% | 33.12% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.31031816136865e-05 | 5.990878133386008e-05 | 27.91% | 38.72% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.059508797707632e-05 | 5.888164899676408e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.007276574210268e-05 | 5.8767365721377277e-05 | 26.61% | 36.25% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.996746130188414e-05 | 5.9475462797985856e-05 | 25.63% | 34.45% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.118084941671731e-05 | 5.829913009371328e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.177320476749755e-05 | 6.0115834146295225e-05 | 26.48% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.84264983426921e-05 | 5.55718018044726e-05 | 29.14% | 41.13% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.871906521638573e-05 | 5.5951169572966895e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.149280297410073e-05 | 5.946231747297086e-05 | 27.03% | 37.05% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.148950182357841e-05 | 3.650197789704897e-05 | 48.94% | 95.85% | 1.96x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.358483769926962e-05 | 4.9843395498548066e-05 | 46.74% | 87.76% | 1.88x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.189749487968337e-05 | 4.982670872027036e-05 | 45.78% | 84.43% | 1.84x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.832906475928902e-05 | 4.69525406732175e-05 | 46.84% | 88.12% | 1.88x | ✅ |
| `hexbytes_new['0x']` | 7.676769172137512e-05 | 3.816998188823712e-05 | 50.28% | 101.12% | 2.01x | ✅ |
| `hexbytes_new['0x1234']` | 8.471796234250887e-05 | 4.6204161032186073e-05 | 45.46% | 83.36% | 1.83x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.533961416626809e-05 | 4.477525304033944e-05 | 47.53% | 90.60% | 1.91x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.503679950467101e-05 | 4.4752842991948403e-05 | 47.37% | 90.01% | 1.90x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.534749706339073e-05 | 4.576765110275924e-05 | 46.37% | 86.48% | 1.86x | ✅ |
| `hexbytes_new['abc']` | 8.129709627774969e-05 | 4.7994103541239996e-05 | 40.96% | 69.39% | 1.69x | ✅ |
| `hexbytes_new['deadbeef']` | 7.638385932762877e-05 | 4.158883177031625e-05 | 45.55% | 83.66% | 1.84x | ✅ |
| `hexbytes_new[0-9]` | 4.289016112920993e-05 | 2.5647795783027006e-05 | 40.20% | 67.23% | 1.67x | ✅ |
| `hexbytes_new[0]` | 0.00012093895886853503 | 6.021180310364426e-05 | 50.21% | 100.86% | 2.01x | ✅ |
| `hexbytes_new[123456]` | 0.0001260200250815464 | 6.451711012853436e-05 | 48.80% | 95.33% | 1.95x | ✅ |
| `hexbytes_new[2**16]` | 0.00012559709199321813 | 6.500539311057827e-05 | 48.24% | 93.21% | 1.93x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013068302840459599 | 7.284482793926838e-05 | 44.26% | 79.40% | 1.79x | ✅ |
| `hexbytes_new[2**32]` | 0.0001281273320013475 | 6.943948900720488e-05 | 45.80% | 84.52% | 1.85x | ✅ |
| `hexbytes_new[2**64]` | 0.00013194520188788576 | 7.067452403086369e-05 | 46.44% | 86.69% | 1.87x | ✅ |
| `hexbytes_new[2**8]` | 0.00012561912582057463 | 6.274947537486014e-05 | 50.05% | 100.19% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.462450768751657e-05 | 2.6735683562009473e-05 | 40.09% | 66.91% | 1.67x | ✅ |
| `hexbytes_new[False]` | 6.0366210805303116e-05 | 2.7043188394343984e-05 | 55.20% | 123.22% | 2.23x | ✅ |
| `hexbytes_new[True]` | 6.017522541325868e-05 | 2.703932500996497e-05 | 55.07% | 122.55% | 2.23x | ✅ |
| `hexbytes_new[all byte values]` | 4.47246921253948e-05 | 2.6815909234065835e-05 | 40.04% | 66.78% | 1.67x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.355576031028297e-05 | 2.6621259983211745e-05 | 38.88% | 63.61% | 1.64x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.3841356212329594e-05 | 2.6572458576985276e-05 | 39.39% | 64.99% | 1.65x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.391945895007535e-05 | 2.594023706585904e-05 | 40.94% | 69.31% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 4.327434264631157e-05 | 2.5416582317799044e-05 | 41.27% | 70.26% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.423827706476327e-05 | 2.576889708019414e-05 | 41.75% | 71.67% | 1.72x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.320832087223283e-05 | 2.5880276633467055e-05 | 40.10% | 66.95% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.397156910626475e-05 | 2.642647733478491e-05 | 39.90% | 66.39% | 1.66x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.607355055341031e-05 | 3.764157976420107e-05 | 32.87% | 48.97% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.3018929819123396e-05 | 2.5934238600257064e-05 | 39.71% | 65.88% | 1.66x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.3334456259308725e-05 | 2.5746975035217327e-05 | 40.59% | 68.31% | 1.68x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.2641561860162495e-05 | 2.589991806898433e-05 | 39.26% | 64.64% | 1.65x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.269074874028573e-05 | 2.577659927523718e-05 | 39.62% | 65.62% | 1.66x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.318912308061793e-05 | 2.582846617434561e-05 | 40.20% | 67.22% | 1.67x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.417367688035411e-05 | 2.6447417936434043e-05 | 40.13% | 67.02% | 1.67x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0931310580290575e-05 | 3.307112372235356e-05 | 35.07% | 54.01% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 4.236298152764865e-05 | 2.5832415460961843e-05 | 39.02% | 63.99% | 1.64x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 7.045871208886052e-05 | 3.683549899608564e-05 | 47.72% | 91.28% | 1.91x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.166523729739957e-05 | 3.844677763998921e-05 | 46.35% | 86.40% | 1.86x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.098564592167361e-05 | 3.8472049136010257e-05 | 45.80% | 84.51% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.940366444420513e-05 | 3.800467300395006e-05 | 45.24% | 82.62% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.966829897446534e-05 | 3.763963624726345e-05 | 45.97% | 85.09% | 1.85x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.97869359827139e-05 | 3.71550873489367e-05 | 46.76% | 87.83% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.780604549383803e-05 | 3.6499190990747486e-05 | 46.17% | 85.77% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.992749850064798e-05 | 3.757131369904655e-05 | 46.27% | 86.12% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.887641771388022e-05 | 3.7090221988645774e-05 | 46.15% | 85.70% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.927264757993604e-05 | 3.795827736361415e-05 | 45.20% | 82.50% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.114776847639032e-05 | 5.60072029435165e-05 | 38.55% | 62.74% | 1.63x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.922256197638075e-05 | 3.80530813998411e-05 | 45.03% | 81.91% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.994507118533474e-05 | 3.756646216840679e-05 | 46.29% | 86.19% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.94542553162907e-05 | 3.688475619873286e-05 | 46.89% | 88.30% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.797863074947109e-05 | 3.879106146026928e-05 | 42.94% | 75.24% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.961445822131029e-05 | 3.769910501750878e-05 | 45.85% | 84.66% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.029988383586764e-05 | 3.775147892337086e-05 | 46.30% | 86.22% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.387260367202745e-05 | 5.0149086135850755e-05 | 40.21% | 67.25% | 1.67x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.850292111778162e-05 | 3.798622341342398e-05 | 44.55% | 80.34% | 1.80x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.488076324864742e-05 | 4.8865551231413156e-05 | 42.43% | 73.70% | 1.74x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.978112002237504e-05 | 3.840300524136304e-05 | 44.97% | 81.71% | 1.82x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.896242173837826e-05 | 3.707783368484466e-05 | 46.23% | 85.99% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.986721939549855e-05 | 3.770852082548275e-05 | 46.03% | 85.28% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.997370716813158e-05 | 3.7849418040369834e-05 | 45.91% | 84.87% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.914011142535209e-05 | 3.773540019011639e-05 | 45.42% | 83.22% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.00657073383709e-05 | 3.831093936271626e-05 | 45.32% | 82.89% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.98841381596689e-05 | 3.7566400220737145e-05 | 46.24% | 86.03% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.924880578799991e-05 | 3.767532550309247e-05 | 45.59% | 83.80% | 1.84x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.947620547303888e-05 | 3.748011770995262e-05 | 46.05% | 85.37% | 1.85x | ✅ |
| `hexbytes_new[long alternating]` | 5.1097519242649246e-05 | 3.345319756360052e-05 | 34.53% | 52.74% | 1.53x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.343221614032439e-05 | 4.36590986728306e-05 | 47.67% | 91.10% | 1.91x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.285066041253311e-05 | 4.40799115675712e-05 | 46.80% | 87.96% | 1.88x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.494278891791339e-05 | 4.459505322662305e-05 | 47.50% | 90.48% | 1.90x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.388395003962605e-05 | 4.308938878629255e-05 | 48.63% | 94.67% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.391858533827448e-05 | 4.3179926800531924e-05 | 48.55% | 94.35% | 1.94x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.408382146868732e-05 | 4.3468303488406014e-05 | 48.30% | 93.44% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.180991201097388e-05 | 3.9934110126305814e-05 | 51.19% | 104.86% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.375462141026185e-05 | 4.312408647695375e-05 | 48.51% | 94.22% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.339169067440344e-05 | 4.309045834321292e-05 | 48.33% | 93.53% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.548323533155023e-05 | 4.375384037030436e-05 | 48.82% | 95.37% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010344784394316022 | 6.33326107820724e-05 | 38.78% | 63.34% | 1.63x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.392134048613179e-05 | 4.320388950882725e-05 | 48.52% | 94.24% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.309189839714384e-05 | 4.302419475116532e-05 | 48.22% | 93.13% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.377004131940622e-05 | 4.352522102160985e-05 | 48.04% | 92.46% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.29842111926247e-05 | 4.3681221504718204e-05 | 47.36% | 89.98% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.333172503946815e-05 | 4.330861835366188e-05 | 48.03% | 92.41% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.378417060732439e-05 | 4.320168562001813e-05 | 48.44% | 93.94% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.857278428497213e-05 | 5.705425636983039e-05 | 42.12% | 72.77% | 1.73x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.4425066104159e-05 | 4.304196606015389e-05 | 49.02% | 96.15% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.924816176267955e-05 | 5.740402688889272e-05 | 42.16% | 72.89% | 1.73x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.435678032132668e-05 | 4.363051067851422e-05 | 48.28% | 93.34% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.354137184065266e-05 | 4.3768414041803676e-05 | 47.61% | 90.87% | 1.91x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.331868203055655e-05 | 4.3396009563477474e-05 | 47.92% | 92.00% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.397547948203961e-05 | 4.3399830026839546e-05 | 48.32% | 93.49% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.338533538497878e-05 | 4.349954036952347e-05 | 47.83% | 91.69% | 1.92x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.582737730877845e-05 | 4.413480106695719e-05 | 48.58% | 94.47% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.46231529023384e-05 | 4.30952027793332e-05 | 49.07% | 96.36% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.405009030576114e-05 | 4.271293534766858e-05 | 49.18% | 96.78% | 1.97x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.50920724648015e-05 | 4.33449178554612e-05 | 49.06% | 96.31% | 1.96x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.427149513057917e-05 | 2.6609164969296743e-05 | 39.90% | 66.38% | 1.66x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.258011632578378e-05 | 2.575039001995724e-05 | 39.52% | 65.36% | 1.65x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.3544252595990946e-05 | 2.5833839605496694e-05 | 40.67% | 68.56% | 1.69x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.337033624368194e-05 | 2.5953687172624074e-05 | 40.16% | 67.11% | 1.67x | ✅ |
| `hexbytes_new[palindrome]` | 4.274955952415865e-05 | 2.597662513603741e-05 | 39.24% | 64.57% | 1.65x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.4081580309151495e-05 | 2.655182822062712e-05 | 39.77% | 66.02% | 1.66x | ✅ |
| `hexbytes_new[single 0xff]` | 4.292112810721459e-05 | 2.5521212015400887e-05 | 40.54% | 68.18% | 1.68x | ✅ |
| `hexbytes_new[single null byte]` | 4.304494697523589e-05 | 2.5548954915146624e-05 | 40.65% | 68.48% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 4.404407819320639e-05 | 2.669610311409445e-05 | 39.39% | 64.98% | 1.65x | ✅ |
| `hexbytes_repr[0-9]` | 2.9588213073828735e-05 | 1.4621829176395931e-05 | 50.58% | 102.36% | 2.02x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012441522074825744 | 4.224375210193357e-05 | 66.05% | 194.52% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001243877588668308 | 4.2269285901795665e-05 | 66.02% | 194.27% | 2.94x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.046478020246737e-05 | 2.0218238392069667e-05 | 59.94% | 149.60% | 2.50x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.982250514120161e-05 | 2.0528921799957834e-05 | 58.80% | 142.69% | 2.43x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.237967126024896e-05 | 1.8434924593134785e-05 | 56.50% | 129.89% | 2.30x | ✅ |
| `hexbytes_repr[b'']` | 2.1208347571021193e-05 | 1.2373379567997006e-05 | 41.66% | 71.40% | 1.71x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.788374564663557e-05 | 1.713585504482458e-05 | 54.77% | 121.08% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.674949471141985e-05 | 1.4370969620486268e-05 | 46.28% | 86.14% | 1.86x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.315730528153836e-05 | 2.42373472897257e-05 | 61.62% | 160.58% | 2.61x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0008080169775453316 | 0.00023417376367213734 | 71.02% | 245.05% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6317448427096368e-05 | 1.4291215619239822e-05 | 45.70% | 84.15% | 1.84x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.693674298351449e-05 | 1.4406292120774373e-05 | 46.52% | 86.98% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8624203074748704e-05 | 1.4631226932397154e-05 | 48.89% | 95.64% | 1.96x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8676307806495364e-05 | 1.48070931068369e-05 | 48.36% | 93.67% | 1.94x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6334001851291295e-05 | 1.4088291076531398e-05 | 46.50% | 86.92% | 1.87x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.9770784726355503e-05 | 2.0375554762540072e-05 | 59.06% | 144.27% | 2.44x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004136946862825496 | 0.00012416564439337707 | 69.99% | 233.18% | 3.33x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6364721121036088e-05 | 1.425297676011533e-05 | 45.94% | 84.98% | 1.85x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004166126955786844 | 0.00012752279417729153 | 69.39% | 226.70% | 3.27x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010138845912183875 | 3.524970446800069e-05 | 65.23% | 187.63% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.9494506836380725e-05 | 1.4631887184669185e-05 | 50.39% | 101.58% | 2.02x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.8103322063570174e-05 | 1.4966526976495922e-05 | 46.74% | 87.77% | 1.88x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7575787507902326e-05 | 1.4317995433361243e-05 | 48.08% | 92.60% | 1.93x | ✅ |
| `hexbytes_repr[palindrome]` | 3.272060438767215e-05 | 1.6129531525962358e-05 | 50.71% | 102.86% | 2.03x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.317388374999597e-05 | 2.4181129004704727e-05 | 61.72% | 161.25% | 2.61x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5584168555655887e-05 | 1.3934733512339212e-05 | 45.53% | 83.60% | 1.84x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5684957868679025e-05 | 1.3949773932988784e-05 | 45.69% | 84.12% | 1.84x | ✅ |
| `hexbytes_repr[two patterns]` | 5.005306074935921e-05 | 2.0451997935656888e-05 | 59.14% | 144.73% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5705236758283588e-05 | 1.3835869946633897e-05 | 11.90% | 13.51% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.35579543105141e-05 | 4.132141538453929e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.404208225939965e-05 | 4.1796901778162476e-05 | 5.10% | 5.37% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.1502443715701346e-05 | 1.9477211856640206e-05 | 9.42% | 10.40% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1530605585571888e-05 | 1.9547649361770845e-05 | 9.21% | 10.14% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.9264486584258556e-05 | 1.7263578253831497e-05 | 10.39% | 11.59% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0230918058479275e-05 | 1.1346902966026289e-05 | -10.91% | -9.84% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7801088634380032e-05 | 1.5988275521520448e-05 | 10.18% | 11.34% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.518226723461978e-05 | 1.3166136811019283e-05 | 13.28% | 15.31% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.563121232039722e-05 | 2.3079302424109427e-05 | 9.96% | 11.06% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00023484271357191062 | 0.00023245887506656796 | 1.02% | 1.03% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5107766213292168e-05 | 1.315784681041234e-05 | 12.91% | 14.82% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5147212104347612e-05 | 1.3464869884485243e-05 | 11.11% | 12.49% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.558481904298038e-05 | 1.3565944789756698e-05 | 12.95% | 14.88% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5391846057002166e-05 | 1.3501301501411687e-05 | 12.28% | 14.00% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5287012054854068e-05 | 1.3163008839618544e-05 | 13.89% | 16.14% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1141548365353688e-05 | 1.94566014247515e-05 | 7.97% | 8.66% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012903325307777995 | 0.00012736624515628572 | 1.29% | 1.31% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5176872489380172e-05 | 1.3271781285505391e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001284360897470229 | 0.00012820298429832853 | 0.18% | 0.18% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.642851616623274e-05 | 3.436185192765364e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5638629244101037e-05 | 1.387158431141875e-05 | 11.30% | 12.74% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.541045241681804e-05 | 1.3116639476423924e-05 | 14.88% | 17.49% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.533920013117867e-05 | 1.3230525886412996e-05 | 13.75% | 15.94% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6705621772344522e-05 | 1.5011957268613367e-05 | 10.14% | 11.28% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5662089874202047e-05 | 2.297810263507965e-05 | 10.46% | 11.68% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4982400863608847e-05 | 1.3055497209485186e-05 | 12.86% | 14.76% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4995807527761192e-05 | 1.292973782655825e-05 | 13.78% | 15.98% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.1151482246689096e-05 | 1.9339856526958228e-05 | 8.57% | 9.37% | 1.09x | ✅ |
