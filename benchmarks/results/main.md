#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-3/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-3/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4555122299123324e-05 | 2.3801943939862938e-05 | 3.07% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4573451047861282e-05 | 2.4236600364516635e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.496033923613225e-05 | 2.4533125428577993e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4523161183748534e-05 | 2.3953551153040334e-05 | 2.32% | 2.38% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.459887068911235e-05 | 2.406181974156546e-05 | 2.18% | 2.23% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4706274909440078e-05 | 2.3495779487995815e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.473162652019165e-05 | 2.3721663020933683e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.466595243096195e-05 | 2.356074339162891e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.459387239294581e-05 | 2.4141125953481465e-05 | 1.84% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4553006383701673e-05 | 2.385707481599254e-05 | 2.83% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4980377583330167e-05 | 2.3507334378573767e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4723566574255784e-05 | 2.3652898165193505e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4507000517133212e-05 | 2.3688662281134872e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.462823953129378e-05 | 2.3548806799968826e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4756833403534363e-05 | 2.3574168824704977e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4515863885607603e-05 | 2.3647275246179523e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4597724465519915e-05 | 2.3677949256153968e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.434014957280423e-05 | 2.365916475512462e-05 | 2.80% | 2.88% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.469127584447e-05 | 2.4034781810279084e-05 | 2.66% | 2.73% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4778666951842257e-05 | 2.3669561764527653e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.442251194025761e-05 | 2.38729481511914e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.47858614973297e-05 | 2.3850097765810615e-05 | 3.78% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.5084127849384527e-05 | 2.3488176096734355e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4541452067096577e-05 | 2.3551197571986354e-05 | 4.04% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.471437450553215e-05 | 2.3413342965834427e-05 | 5.26% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4801708184006797e-05 | 2.3607180816420497e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3331189802846248e-05 | 2.2431702124325805e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.328102709655396e-05 | 2.213966957513182e-05 | 4.90% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3439445425893947e-05 | 2.2348652345075856e-05 | 4.65% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3096239958263292e-05 | 2.2625915292755638e-05 | 2.04% | 2.08% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.355353954209169e-05 | 2.2482325704624474e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.345032004709695e-05 | 2.2819516150508208e-05 | 2.69% | 2.76% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3331027625386693e-05 | 2.259536665137197e-05 | 3.15% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.357589027976213e-05 | 2.2284973332870796e-05 | 5.48% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3647568255446115e-05 | 2.250223179282137e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3536885080570452e-05 | 2.2506629763821472e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.359405933478625e-05 | 2.2515525997251936e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.382792987753024e-05 | 2.2373496160703015e-05 | 6.10% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.4026726075336838e-05 | 2.2283285110016206e-05 | 7.26% | 7.82% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.368934642022142e-05 | 2.2525889741240308e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3789630186610488e-05 | 2.2334415178538318e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3953345236652975e-05 | 2.2478026325446398e-05 | 6.16% | 6.56% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.36552874721663e-05 | 2.2616983127165054e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3597713668402645e-05 | 2.2340052688916618e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3593261883258544e-05 | 2.2470794650413885e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3584000470642774e-05 | 2.2258337332518065e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3209387111369155e-05 | 2.2316009043478258e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3413552010518802e-05 | 2.2348250108376067e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.35422503917187e-05 | 2.21769319196349e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3870680483767933e-05 | 2.2207694932613986e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3301059553164577e-05 | 2.2640146321872943e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.355780734427652e-05 | 2.235579456574326e-05 | 5.10% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3506858090766196e-05 | 2.223380214412571e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3833461385047295e-05 | 2.2515993454001552e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3713659467173803e-05 | 2.2561557354316057e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3956494592232633e-05 | 2.2273877493474555e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.348820738219799e-05 | 2.2507231768509136e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3931525482011456e-05 | 2.258443121766695e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3790459594855416e-05 | 2.2359888353815603e-05 | 6.01% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3345508995487693e-05 | 2.254411659410475e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3468951205585194e-05 | 2.2444332163180805e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3040083922856643e-05 | 2.2719209180341546e-05 | 1.39% | 1.41% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3377257858844364e-05 | 2.2459890393599965e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3836136536930047e-05 | 2.234346681410037e-05 | 6.26% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.356746369469449e-05 | 2.2476705917799448e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3714463056989373e-05 | 2.241663198191506e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3555456778946428e-05 | 2.2612292523581414e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3616059900429796e-05 | 2.2680962038211247e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.3525619569814418e-05 | 2.247165310453893e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3462606546888965e-05 | 2.2566837727045635e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3609903127942437e-05 | 2.252098043562403e-05 | 4.61% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3686849549726286e-05 | 2.228352897614586e-05 | 5.92% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3606238777855213e-05 | 2.2669726795471872e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.372350677888357e-05 | 2.248679883248668e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3902057819742317e-05 | 2.265181314887914e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3631484621947947e-05 | 2.2613095592958498e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3725753107036857e-05 | 2.2492098183624924e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3755461367887005e-05 | 2.221221658975859e-05 | 6.50% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3706009366073875e-05 | 2.257099227866135e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3574508021590664e-05 | 2.242363425265799e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3998489137713683e-05 | 2.344608388388636e-05 | 2.30% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3982291772375027e-05 | 2.277720611982338e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.401512147123954e-05 | 2.2368454245399396e-05 | 6.86% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3796790066134914e-05 | 2.237895471444176e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.36588118254159e-05 | 2.2341574888960084e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3846072025254174e-05 | 2.238514020490244e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3714918283796395e-05 | 2.2215861895383287e-05 | 6.32% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.379975554823225e-05 | 2.2240188319648304e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.362546949848313e-05 | 2.2268780858080792e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3988703152037445e-05 | 2.2797698127063397e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3406718405109723e-05 | 2.2110697619882187e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.362516051441339e-05 | 2.2197051132290524e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.4074642963062315e-05 | 2.2737586191592682e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3749444791966194e-05 | 2.2788149754476194e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3764433186450335e-05 | 2.205569898712215e-05 | 7.19% | 7.75% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.357437994205173e-05 | 2.216060561323993e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3745577331566618e-05 | 2.5068916341936786e-05 | -5.57% | -5.28% | 0.95x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3634808110267333e-05 | 2.2485192702490794e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3894177536667386e-05 | 2.2737858233753517e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3793509222498713e-05 | 2.2356451883641523e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.384648910113312e-05 | 2.214101276194228e-05 | 7.15% | 7.70% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3739890595729797e-05 | 2.221638961033268e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.351058191349032e-05 | 2.2189400294574357e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3766204339899035e-05 | 2.2408548569508598e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3584140187264768e-05 | 2.247913110626901e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3547415249770113e-05 | 2.266199652504231e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3794293400492466e-05 | 2.2338823445571118e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3857375170554236e-05 | 2.2153990800210942e-05 | 7.14% | 7.69% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3848457334105423e-05 | 2.245874381563278e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.352715939849002e-05 | 2.252411997912967e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3817097952728095e-05 | 2.2674931766029923e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3681852005025927e-05 | 2.262921266611904e-05 | 4.44% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.455340191168415e-05 | 2.2714410257194397e-05 | 7.49% | 8.10% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.4265391551559566e-05 | 2.2413603428098576e-05 | 7.63% | 8.26% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.398737623385655e-05 | 2.2829950111091024e-05 | 4.83% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.408176086356968e-05 | 2.2294315766092537e-05 | 7.42% | 8.02% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.393079934601544e-05 | 2.1998026235325075e-05 | 8.08% | 8.79% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.404248239957442e-05 | 2.2635685211016486e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.385917428956102e-05 | 2.2188663354777983e-05 | 7.00% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3511445915904454e-05 | 2.248956886497835e-05 | 4.35% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3997917018990037e-05 | 2.25164791012493e-05 | 6.17% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3973662346063432e-05 | 2.2716810287614008e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3988756050705807e-05 | 2.2436467438863166e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3616533747016063e-05 | 2.2757209940247653e-05 | 3.64% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.395596192315938e-05 | 2.2175249008870764e-05 | 7.43% | 8.03% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.352758271417077e-05 | 2.4151603338283806e-05 | -2.65% | -2.58% | 0.97x | ❌ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3693503528788565e-05 | 2.262132707192097e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.390620465010476e-05 | 2.246838924211046e-05 | 6.01% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3324821503478157e-05 | 2.2981815367228097e-05 | 1.47% | 1.49% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.370518615797405e-05 | 2.2736295866611474e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.376343819758268e-05 | 2.2539975723860227e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3741019129202134e-05 | 2.260033764851859e-05 | 4.80% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.362957505438096e-05 | 2.283333185525357e-05 | 3.37% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3465778006191704e-05 | 2.296118942863607e-05 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3894317818357222e-05 | 2.2471274364814954e-05 | 5.96% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.323444670695732e-05 | 2.2608045262190552e-05 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.35327607584398e-05 | 2.261913481613747e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.382033482595645e-05 | 2.2943806821283154e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3771958837674318e-05 | 2.232655375870735e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.371773318660061e-05 | 2.263985598200352e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3604116750287033e-05 | 2.2786918052199977e-05 | 3.46% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3422917590168206e-05 | 2.2650651174339095e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3526804662268825e-05 | 2.2844814222936575e-05 | 2.90% | 2.99% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.395399818312628e-05 | 2.272325350444064e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3694869332779995e-05 | 2.265737187388967e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3635651568089196e-05 | 2.252899003471206e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.359947477281463e-05 | 2.272298002925969e-05 | 3.71% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3592682826487885e-05 | 2.2171232817727057e-05 | 6.02% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3654924483192454e-05 | 2.2252336241143282e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.360848473094303e-05 | 2.2827791110986643e-05 | 3.31% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.335415302917999e-05 | 2.25533065030594e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3813945472982827e-05 | 2.232593600691625e-05 | 6.25% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.336184666659265e-05 | 2.2511189551762973e-05 | 3.64% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.346444562185529e-05 | 2.218258300973947e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3123547078596375e-05 | 2.2567473521934997e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.415193569805411e-05 | 2.2457097800515857e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3743457256929728e-05 | 2.2174712004883534e-05 | 6.61% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.359484102316212e-05 | 2.2501743297923334e-05 | 4.63% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3631049273536272e-05 | 2.2654487548509676e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.340132143309864e-05 | 2.239458174444176e-05 | 4.30% | 4.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3621669058611647e-05 | 2.2415456261049007e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.377613151853031e-05 | 2.249776355535285e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3600486739651227e-05 | 2.2727130498668462e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3663037674552196e-05 | 2.2401637868053422e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3448712273508264e-05 | 2.255472034851619e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.370742530017795e-05 | 2.2276623844709955e-05 | 6.04% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.315256907820102e-05 | 2.2456339630901798e-05 | 3.01% | 3.10% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.355612208383592e-05 | 2.2420591718397566e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3285732201105e-05 | 2.2548250738475896e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.350644423639053e-05 | 2.294992067706727e-05 | 2.37% | 2.42% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.359394476445638e-05 | 2.2539961784356867e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3631946133031307e-05 | 2.2341919480667456e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.115513874414685e-05 | 5.95021890280248e-05 | 26.68% | 36.39% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.222132426490986e-05 | 5.993943608827454e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.250639431163864e-05 | 5.975986999616544e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.195322790983172e-05 | 6.022196427678269e-05 | 26.52% | 36.09% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.130396160753082e-05 | 5.9633024403473596e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.222817342790807e-05 | 6.0303269326880766e-05 | 26.66% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.844403097046223e-05 | 5.735937967519288e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.130361169850668e-05 | 5.9840601487839024e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.204330400774354e-05 | 5.92665597876531e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.144275613289432e-05 | 6.436334853954214e-05 | 20.97% | 26.54% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.221726002323834e-05 | 6.0146246085751e-05 | 26.84% | 36.70% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.072131094936157e-05 | 5.928585792194703e-05 | 26.55% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.201998540324445e-05 | 6.0565747430868324e-05 | 26.16% | 35.42% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.123656084751251e-05 | 6.0714455762922006e-05 | 25.26% | 33.80% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.142499084725281e-05 | 6.723533754243538e-05 | 17.43% | 21.10% | 1.21x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.188324536102376e-05 | 5.985222538228849e-05 | 26.91% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.123660119734918e-05 | 5.93436399022036e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.105905462635728e-05 | 5.9051429232384486e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.175063071496749e-05 | 6.578336040636841e-05 | 19.53% | 24.27% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.249555814152421e-05 | 5.96588486706668e-05 | 27.68% | 38.28% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.123992663366403e-05 | 5.937350158369524e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.185001764071903e-05 | 5.9674862077039676e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.268951979295296e-05 | 5.935761415421733e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.266890068556476e-05 | 5.959396320996696e-05 | 27.91% | 38.72% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.264492549244988e-05 | 5.997318596048601e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.208354037072288e-05 | 6.0330356379812596e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.001072261115551e-05 | 5.8886797803254014e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.028099816172456e-05 | 5.971946414674181e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.182453456584878e-05 | 6.025389247567472e-05 | 26.36% | 35.80% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.381674081965097e-05 | 6.0709582150338106e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.323024050452306e-05 | 6.027123555732948e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.359958286325568e-05 | 6.103343881519914e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.209307123426014e-05 | 6.0313408395296554e-05 | 26.53% | 36.11% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.222577047936391e-05 | 6.049720893308552e-05 | 26.43% | 35.92% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.239913875927189e-05 | 6.013011035171872e-05 | 27.03% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.976199686235395e-05 | 5.877604891045189e-05 | 26.31% | 35.70% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.181123143483375e-05 | 6.060099514291477e-05 | 25.93% | 35.00% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.193962782210614e-05 | 6.102556241177957e-05 | 25.52% | 34.27% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.183386004130116e-05 | 6.0689757639204e-05 | 25.84% | 34.84% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.27243104832935e-05 | 6.0167482833418126e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.221270000860183e-05 | 6.120372268254485e-05 | 25.55% | 34.33% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.200088636250682e-05 | 6.0943264861499936e-05 | 25.68% | 34.55% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.211246651836401e-05 | 6.0443812083616916e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.224211384944868e-05 | 5.9575328525553574e-05 | 27.56% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.256117386464684e-05 | 5.974209109047122e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.294090220350745e-05 | 6.102140751308198e-05 | 26.43% | 35.92% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.313012591519911e-05 | 6.089098681594604e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.349982595756342e-05 | 6.084798644214189e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.34040904929404e-05 | 5.995760942686823e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.239154079452492e-05 | 6.068693494258014e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.215954677155807e-05 | 6.069978084638907e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.277419533263478e-05 | 6.029566788650152e-05 | 27.16% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.29800279237956e-05 | 5.9830917219072126e-05 | 27.90% | 38.69% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.244530513659022e-05 | 6.17797951912097e-05 | 25.07% | 33.45% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.223328973856518e-05 | 6.02705478670383e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.241761732865977e-05 | 5.8284794429243567e-05 | 29.28% | 41.41% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.217236359062221e-05 | 5.8541868020699264e-05 | 28.76% | 40.37% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.197419914259517e-05 | 6.022090632042056e-05 | 26.54% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.108281670263763e-05 | 6.055314001140313e-05 | 25.32% | 33.90% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.183666983960908e-05 | 6.073307116853632e-05 | 25.79% | 34.75% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.213630781628237e-05 | 6.033489802685313e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.198061706182821e-05 | 6.036210341833188e-05 | 26.37% | 35.81% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.978132615657232e-05 | 6.114148229467334e-05 | 23.36% | 30.49% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.165702459417695e-05 | 6.072463826483535e-05 | 25.63% | 34.47% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.183438053151185e-05 | 5.798411092666334e-05 | 29.14% | 41.13% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.410719363571121e-05 | 6.027415741645401e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.25008286753904e-05 | 5.9634708242469465e-05 | 27.72% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.2854662867681e-05 | 6.002912785499384e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.149483836964896e-05 | 6.0819444471648365e-05 | 25.37% | 33.99% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.188508611254507e-05 | 5.945517941915453e-05 | 27.39% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.224706868317262e-05 | 6.0289712711249045e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.247543851956726e-05 | 6.0518887220682805e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.280701633346955e-05 | 6.001159260870606e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.225726934613469e-05 | 6.0170315290926534e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.298671431043438e-05 | 5.960528562433987e-05 | 28.17% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.212784427988948e-05 | 5.989780457924381e-05 | 27.07% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.303101010702895e-05 | 6.052646629874812e-05 | 27.10% | 37.18% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.180504881873317e-05 | 6.100448956935553e-05 | 25.43% | 34.10% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.23448274322438e-05 | 6.0457395262068024e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.165344887041734e-05 | 6.0518986392860043e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.147087909801374e-05 | 5.960605496123388e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.304762977919073e-05 | 6.0562845142425506e-05 | 27.07% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.186402627394758e-05 | 6.01702954804843e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.285333658915993e-05 | 6.0765347207282726e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.271023904178792e-05 | 5.7854232076168625e-05 | 30.05% | 42.96% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.043333442855079e-05 | 5.827801322434058e-05 | 27.54% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.24460249251523e-05 | 6.077112110418496e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.153994898977703e-05 | 5.988007500814498e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.352585015296563e-05 | 6.281514480138058e-05 | 24.80% | 32.97% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.370761496203274e-05 | 6.179200484117697e-05 | 26.18% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.223184031832544e-05 | 6.0480282339713455e-05 | 26.45% | 35.96% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.221732761900571e-05 | 6.074361524495936e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.110822804949641e-05 | 6.035080688737728e-05 | 25.59% | 34.39% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.891836166345396e-05 | 5.848705068022742e-05 | 25.89% | 34.93% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.21171269479013e-05 | 6.095719832557699e-05 | 25.77% | 34.71% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.210592792587396e-05 | 6.124197462857818e-05 | 25.41% | 34.07% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.195535064513592e-05 | 6.089653287276711e-05 | 25.70% | 34.58% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010458406560794769 | 7.663045301225792e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.966240687352676e-05 | 5.86247054440532e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.14786530508491e-05 | 5.981709509398763e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.173136316790548e-05 | 6.092352983508284e-05 | 25.46% | 34.15% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.096873912985652e-05 | 6.118385820581155e-05 | 24.44% | 32.34% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.142181408107655e-05 | 6.117001411189726e-05 | 24.87% | 33.11% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.154514377722727e-05 | 6.0562497095840985e-05 | 25.73% | 34.65% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.738282145813854e-05 | 7.449805581280554e-05 | 23.50% | 30.72% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.925656838260516e-05 | 5.861463820663293e-05 | 26.04% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.804989128693989e-05 | 7.171225630337301e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.223873686881984e-05 | 6.134978503571108e-05 | 25.40% | 34.05% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.11732830950653e-05 | 6.0781609661222066e-05 | 25.12% | 33.55% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.129003846882351e-05 | 6.0511211716714016e-05 | 25.56% | 34.34% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.140349877843727e-05 | 6.0568558739585795e-05 | 25.59% | 34.40% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.15226702758344e-05 | 6.103647202992393e-05 | 25.13% | 33.56% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.243049114311532e-05 | 6.052762525939902e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.877536764708437e-05 | 5.8078982574011665e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.864738595705169e-05 | 5.8142641765214376e-05 | 26.07% | 35.27% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.085233754769934e-05 | 6.09128686947237e-05 | 24.66% | 32.73% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.038153698426694e-05 | 6.022440203715625e-05 | 25.08% | 33.47% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.199948951170692e-05 | 6.175841514448217e-05 | 24.68% | 32.77% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.185275660976672e-05 | 6.225265541726483e-05 | 23.95% | 31.48% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.075341762412355e-05 | 6.119701723387336e-05 | 24.22% | 31.96% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.009321055400715e-05 | 6.1266605933724e-05 | 23.51% | 30.73% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.920983878318183e-05 | 6.144018071226397e-05 | 22.43% | 28.92% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.783391892931968e-05 | 5.74976297117836e-05 | 26.13% | 35.37% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.966132555743411e-05 | 6.041603323122749e-05 | 24.16% | 31.85% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.055965742416022e-05 | 6.063371348950849e-05 | 24.73% | 32.86% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.071019009404385e-05 | 6.113743080907715e-05 | 24.25% | 32.01% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010184679107342065 | 8.050741706023722e-05 | 20.95% | 26.51% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.075085132403333e-05 | 6.091928894331601e-05 | 24.56% | 32.55% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.06162721701427e-05 | 5.99719121009488e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.066363566406665e-05 | 5.9372335101379506e-05 | 26.40% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.013027388250686e-05 | 5.9969960717394894e-05 | 25.16% | 33.62% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.04127183607506e-05 | 6.01731273883505e-05 | 25.17% | 33.64% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.916449114716778e-05 | 6.198501369031548e-05 | 21.70% | 27.72% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.658798302820013e-05 | 7.130438045184412e-05 | 26.18% | 35.46% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.107790441319062e-05 | 6.057256433802843e-05 | 25.29% | 33.85% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.608866027553766e-05 | 7.592118227756069e-05 | 20.99% | 26.56% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.071007773137505e-05 | 6.229582033404214e-05 | 22.82% | 29.56% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.074639607131949e-05 | 6.0221232430278974e-05 | 25.42% | 34.08% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.159260604029031e-05 | 6.0170164021878106e-05 | 26.26% | 35.60% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.086258764243559e-05 | 5.990123231698494e-05 | 25.92% | 34.99% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.011922253750848e-05 | 5.880022086397788e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.017951382788316e-05 | 6.13486115145191e-05 | 23.49% | 30.69% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.737108600176452e-05 | 5.829834149097965e-05 | 24.65% | 32.72% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.726792142638703e-05 | 5.828212781870286e-05 | 24.57% | 32.58% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.052274562379675e-05 | 6.0967530687619914e-05 | 24.29% | 32.07% | 1.32x | ✅ |
| `hexbytes_new['']` | 7.062679957708129e-05 | 3.6865770037947815e-05 | 47.80% | 91.58% | 1.92x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.217242493498498e-05 | 5.131677784299057e-05 | 44.33% | 79.61% | 1.80x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.322863980645219e-05 | 5.052795876791036e-05 | 45.80% | 84.51% | 1.85x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.844933371128383e-05 | 4.672545516665702e-05 | 47.17% | 89.30% | 1.89x | ✅ |
| `hexbytes_new['0x']` | 7.917195805813772e-05 | 3.792969315383456e-05 | 52.09% | 108.73% | 2.09x | ✅ |
| `hexbytes_new['0x1234']` | 8.716321758960446e-05 | 4.4452710812586946e-05 | 49.00% | 96.08% | 1.96x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.558094947316474e-05 | 4.440786478692646e-05 | 48.11% | 92.72% | 1.93x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.704367839199109e-05 | 4.56473623934204e-05 | 47.56% | 90.69% | 1.91x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.733708450472336e-05 | 4.4871875238037676e-05 | 48.62% | 94.64% | 1.95x | ✅ |
| `hexbytes_new['abc']` | 8.336063922531473e-05 | 4.825350999776504e-05 | 42.11% | 72.76% | 1.73x | ✅ |
| `hexbytes_new['deadbeef']` | 7.792461413209016e-05 | 4.1286335867472476e-05 | 47.02% | 88.74% | 1.89x | ✅ |
| `hexbytes_new[0-9]` | 4.254256488450257e-05 | 2.7396182799416276e-05 | 35.60% | 55.29% | 1.55x | ✅ |
| `hexbytes_new[0]` | 0.00012267080652978717 | 6.157349627039085e-05 | 49.81% | 99.23% | 1.99x | ✅ |
| `hexbytes_new[123456]` | 0.00012687246726957206 | 6.626375083503735e-05 | 47.77% | 91.47% | 1.91x | ✅ |
| `hexbytes_new[2**16]` | 0.00012795086259521354 | 6.545937844176015e-05 | 48.84% | 95.47% | 1.95x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013092067690618914 | 7.346189586462709e-05 | 43.89% | 78.22% | 1.78x | ✅ |
| `hexbytes_new[2**32]` | 0.0001293000317499747 | 6.924522884065338e-05 | 46.45% | 86.73% | 1.87x | ✅ |
| `hexbytes_new[2**64]` | 0.00013013477521917562 | 7.156578045067828e-05 | 45.01% | 81.84% | 1.82x | ✅ |
| `hexbytes_new[2**8]` | 0.00012585632721523346 | 6.440004976167638e-05 | 48.83% | 95.43% | 1.95x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.366734302097222e-05 | 2.673068259236545e-05 | 38.79% | 63.36% | 1.63x | ✅ |
| `hexbytes_new[False]` | 6.0235933889226925e-05 | 2.7858332265267803e-05 | 53.75% | 116.22% | 2.16x | ✅ |
| `hexbytes_new[True]` | 6.014469109346338e-05 | 2.7913264251559174e-05 | 53.59% | 115.47% | 2.15x | ✅ |
| `hexbytes_new[all byte values]` | 4.36801516800513e-05 | 2.6816405553806417e-05 | 38.61% | 62.89% | 1.63x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.348470781455881e-05 | 2.665655041048447e-05 | 38.70% | 63.13% | 1.63x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.323060836570481e-05 | 2.6904606786622452e-05 | 37.76% | 60.68% | 1.61x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2902336703983166e-05 | 2.7129215872781606e-05 | 36.77% | 58.14% | 1.58x | ✅ |
| `hexbytes_new[b'']` | 4.2532013547654743e-05 | 2.6659430421800845e-05 | 37.32% | 59.54% | 1.60x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.3664533159061e-05 | 2.6630047356269596e-05 | 39.01% | 63.97% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3474960542139464e-05 | 2.740168928043055e-05 | 36.97% | 58.66% | 1.59x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.28742665048902e-05 | 2.7114297937761022e-05 | 36.76% | 58.12% | 1.58x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6271724592317425e-05 | 3.839810783514888e-05 | 31.76% | 46.55% | 1.47x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.317089160492416e-05 | 2.6789013215191745e-05 | 37.95% | 61.15% | 1.61x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.309149296504087e-05 | 2.695604114490339e-05 | 37.44% | 59.86% | 1.60x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.323103716011213e-05 | 2.687095866712496e-05 | 37.84% | 60.88% | 1.61x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2838865730617984e-05 | 2.7089523515536722e-05 | 36.76% | 58.14% | 1.58x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.359075425144315e-05 | 2.658739338924412e-05 | 39.01% | 63.95% | 1.64x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.25043611285808e-05 | 2.686328748358885e-05 | 36.80% | 58.22% | 1.58x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0957564927124056e-05 | 3.324717492405524e-05 | 34.76% | 53.27% | 1.53x | ✅ |
| `hexbytes_new[b'abc']` | 4.232885775752248e-05 | 2.6795452551875402e-05 | 36.70% | 57.97% | 1.58x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.992145600988846e-05 | 3.883067471989659e-05 | 44.47% | 80.07% | 1.80x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.064333163730875e-05 | 3.750508127026249e-05 | 46.91% | 88.36% | 1.88x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.816793767368741e-05 | 3.768698606162488e-05 | 44.71% | 80.88% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.995712342035211e-05 | 3.7425791149472664e-05 | 46.50% | 86.92% | 1.87x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 7.053140227064655e-05 | 3.773070953151376e-05 | 46.51% | 86.93% | 1.87x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.803641545165089e-05 | 3.835041724104819e-05 | 43.63% | 77.41% | 1.77x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.74142855510099e-05 | 3.682476108340745e-05 | 45.38% | 83.07% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.98280467271839e-05 | 3.804337617125661e-05 | 45.52% | 83.55% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.97477463299546e-05 | 3.8515601478875556e-05 | 44.78% | 81.09% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.985249039310386e-05 | 3.8252509439653466e-05 | 45.24% | 82.61% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.255584269588583e-05 | 5.5340323813815506e-05 | 40.21% | 67.25% | 1.67x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.053296550961798e-05 | 3.709041248559051e-05 | 47.41% | 90.16% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.120285615454362e-05 | 3.7435173703904637e-05 | 47.42% | 90.20% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.763734872919624e-05 | 3.8974825460053125e-05 | 42.38% | 73.54% | 1.74x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.829954899290094e-05 | 3.898949562674841e-05 | 42.91% | 75.17% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 7.073744288752026e-05 | 3.765136883140869e-05 | 46.77% | 87.87% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.004323986246596e-05 | 3.78405300258781e-05 | 45.98% | 85.10% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.51756564033705e-05 | 4.930273220204604e-05 | 42.12% | 72.76% | 1.73x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 7.08878032414406e-05 | 3.810210667060392e-05 | 46.25% | 86.05% | 1.86x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.565400045047725e-05 | 4.8919392579318876e-05 | 42.89% | 75.09% | 1.75x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.957777986339588e-05 | 3.765640477262909e-05 | 45.88% | 84.77% | 1.85x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.951867876368204e-05 | 3.754017320544251e-05 | 46.00% | 85.18% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 7.02113420481268e-05 | 3.863187640265553e-05 | 44.98% | 81.74% | 1.82x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 7.038297940675924e-05 | 3.842189662175068e-05 | 45.41% | 83.18% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.932466208202266e-05 | 3.746737117346501e-05 | 45.95% | 85.03% | 1.85x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.881887765242333e-05 | 3.779591794460603e-05 | 45.08% | 82.08% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.783559461706811e-05 | 3.757378265051083e-05 | 44.61% | 80.54% | 1.81x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.154244047901767e-05 | 3.7770081555933074e-05 | 47.21% | 89.42% | 1.89x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.903408099222827e-05 | 3.833490148332012e-05 | 44.47% | 80.08% | 1.80x | ✅ |
| `hexbytes_new[long alternating]` | 5.0818474305483656e-05 | 3.313448523068097e-05 | 34.80% | 53.37% | 1.53x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.466658850729778e-05 | 4.490143520596495e-05 | 46.97% | 88.56% | 1.89x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.507006486470918e-05 | 4.405316311051472e-05 | 48.22% | 93.11% | 1.93x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.736792153758885e-05 | 4.415922083638932e-05 | 49.46% | 97.85% | 1.98x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.509709792869211e-05 | 4.3276766796625575e-05 | 49.14% | 96.63% | 1.97x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.456928963902133e-05 | 4.287676921669681e-05 | 49.30% | 97.24% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.452085153340062e-05 | 4.3204588888292136e-05 | 48.88% | 95.63% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.255795592003341e-05 | 4.0863985390591875e-05 | 50.50% | 102.03% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.387142985551319e-05 | 4.27993897469858e-05 | 48.97% | 95.96% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.37439149029464e-05 | 4.394018575066582e-05 | 47.53% | 90.59% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.514629903852127e-05 | 4.3063622708062283e-05 | 49.42% | 97.72% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010571220084029144 | 6.267879857253205e-05 | 40.71% | 68.66% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.436055090189876e-05 | 4.4125581093413786e-05 | 47.69% | 91.18% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.417540998454398e-05 | 4.304228768285776e-05 | 48.87% | 95.56% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.39393716603537e-05 | 4.3378899134265845e-05 | 48.32% | 93.50% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.209448834196217e-05 | 4.42110236402266e-05 | 46.15% | 85.69% | 1.86x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.369282630024728e-05 | 4.378409365048234e-05 | 47.68% | 91.15% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.507088209546702e-05 | 4.358492232474152e-05 | 48.77% | 95.18% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.87781493114017e-05 | 5.468582222655335e-05 | 44.64% | 80.63% | 1.81x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.565871026426963e-05 | 4.2924068722723805e-05 | 49.89% | 99.56% | 2.00x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.919251665069738e-05 | 5.5854849882132624e-05 | 43.69% | 77.59% | 1.78x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.585665735886345e-05 | 4.3838243547834186e-05 | 48.94% | 95.85% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.345048081782639e-05 | 4.411976975272143e-05 | 47.13% | 89.15% | 1.89x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.691418865616331e-05 | 4.291547540971809e-05 | 50.62% | 102.52% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.423552468109311e-05 | 4.3751371614859695e-05 | 48.06% | 92.53% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.355656757753033e-05 | 4.3172068659273666e-05 | 48.33% | 93.54% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.452619423162419e-05 | 4.382537033202446e-05 | 48.15% | 92.87% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.60412197448055e-05 | 4.2786319618829673e-05 | 50.27% | 101.10% | 2.01x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.496557598399803e-05 | 4.3862586344511594e-05 | 48.38% | 93.71% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.48606727420044e-05 | 4.343721606378676e-05 | 48.81% | 95.36% | 1.95x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.317629089659255e-05 | 2.6507319397830763e-05 | 38.61% | 62.88% | 1.63x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.27678718889955e-05 | 2.731150633481827e-05 | 36.14% | 56.59% | 1.57x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.2584030465841625e-05 | 2.7401708846699254e-05 | 35.65% | 55.41% | 1.55x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.242270722274537e-05 | 2.70927077561378e-05 | 36.14% | 56.58% | 1.57x | ✅ |
| `hexbytes_new[palindrome]` | 4.36640433610804e-05 | 2.6781310871007e-05 | 38.67% | 63.04% | 1.63x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.325560083455797e-05 | 2.7018758094839726e-05 | 37.54% | 60.09% | 1.60x | ✅ |
| `hexbytes_new[single 0xff]` | 4.200370058218503e-05 | 2.678174526806341e-05 | 36.24% | 56.84% | 1.57x | ✅ |
| `hexbytes_new[single null byte]` | 4.287703837568771e-05 | 2.6653741081746385e-05 | 37.84% | 60.87% | 1.61x | ✅ |
| `hexbytes_new[two patterns]` | 4.2500898771306216e-05 | 2.7026324457122602e-05 | 36.41% | 57.26% | 1.57x | ✅ |
| `hexbytes_repr[0-9]` | 2.938075187750636e-05 | 1.4809360696412906e-05 | 49.60% | 98.39% | 1.98x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011969310975386971 | 4.067056836701714e-05 | 66.02% | 194.30% | 2.94x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001197905385393199 | 4.067597273695548e-05 | 66.04% | 194.50% | 2.94x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.893261317027485e-05 | 2.028125170352485e-05 | 58.55% | 141.27% | 2.41x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.9621831182850884e-05 | 2.0124675091911615e-05 | 59.44% | 146.57% | 2.47x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.2044704745597606e-05 | 1.8152715744110713e-05 | 56.83% | 131.62% | 2.32x | ✅ |
| `hexbytes_repr[b'']` | 2.121608861970493e-05 | 1.2259105897358447e-05 | 42.22% | 73.06% | 1.73x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.675480563075217e-05 | 1.6983883001189365e-05 | 53.79% | 116.41% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6642708826463603e-05 | 1.422234242987713e-05 | 46.62% | 87.33% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.319317565423904e-05 | 2.36650051784312e-05 | 62.55% | 167.03% | 2.67x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007663272608672202 | 0.00022195546751178628 | 71.04% | 245.26% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.655233545905478e-05 | 1.3941042421446248e-05 | 47.50% | 90.46% | 1.90x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7085769488634872e-05 | 1.4400107190463666e-05 | 46.84% | 88.09% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8832941071485253e-05 | 1.4488820648814902e-05 | 49.75% | 99.00% | 1.99x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8710001189914874e-05 | 1.450683888293849e-05 | 49.47% | 97.91% | 1.98x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6163160295434292e-05 | 1.4074981492245535e-05 | 46.20% | 85.88% | 1.86x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.8703161963583764e-05 | 2.02719449979461e-05 | 58.38% | 140.25% | 2.40x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039548756307064445 | 0.00011889538722194092 | 69.94% | 232.63% | 3.33x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6270201319675568e-05 | 1.4135073059951063e-05 | 46.19% | 85.85% | 1.86x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004004919114963275 | 0.0001223474556544336 | 69.45% | 227.34% | 3.27x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.770139589661241e-05 | 3.370022477050578e-05 | 65.51% | 189.91% | 2.90x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.9736632282317115e-05 | 1.4815713370064632e-05 | 50.18% | 100.71% | 2.01x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7583922505157946e-05 | 1.4332044882354766e-05 | 48.04% | 92.46% | 1.92x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.685307158915228e-05 | 1.4100388017905133e-05 | 47.49% | 90.44% | 1.90x | ✅ |
| `hexbytes_repr[palindrome]` | 3.219572558061966e-05 | 1.584424842213042e-05 | 50.79% | 103.20% | 2.03x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.316058953093343e-05 | 2.3781008643009185e-05 | 62.35% | 165.59% | 2.66x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.565942086414994e-05 | 1.3976292096286211e-05 | 45.53% | 83.59% | 1.84x | ✅ |
| `hexbytes_repr[single null byte]` | 2.561307606738213e-05 | 1.3613310958200438e-05 | 46.85% | 88.15% | 1.88x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8825303250338246e-05 | 1.9932521207476265e-05 | 59.18% | 144.95% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5454085311822224e-05 | 1.3694691845962682e-05 | 11.38% | 12.85% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.1913224867487515e-05 | 3.9547050445201516e-05 | 5.65% | 5.98% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.204262898733428e-05 | 4.0237209834125425e-05 | 4.29% | 4.49% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0526489710104844e-05 | 1.9102854208682532e-05 | 6.94% | 7.45% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0648947400679784e-05 | 1.9016492324818644e-05 | 7.91% | 8.58% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.861236963607471e-05 | 1.7174500103540856e-05 | 7.73% | 8.37% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0107026838451088e-05 | 1.1299013390123069e-05 | -11.79% | -10.55% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7339461785573218e-05 | 1.572962487717997e-05 | 9.28% | 10.23% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4861617376150866e-05 | 1.3174602343500994e-05 | 11.35% | 12.81% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.609268917906505e-05 | 2.3247579515796783e-05 | 10.90% | 12.24% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0002222720879592228 | 0.00022209061375789714 | 0.08% | 0.08% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4667667107848165e-05 | 1.3232322269398216e-05 | 9.79% | 10.85% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4981813028540275e-05 | 1.4181339108238186e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5406446135604392e-05 | 1.3637806694055548e-05 | 11.48% | 12.97% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5265418022796994e-05 | 1.3383137775727166e-05 | 12.33% | 14.06% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.473386496054027e-05 | 1.3098997097661902e-05 | 11.10% | 12.48% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.052011869949259e-05 | 1.8820384621456005e-05 | 8.28% | 9.03% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012205692205642063 | 0.00012180590472599653 | 0.21% | 0.21% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.467864169068807e-05 | 1.3062751962166748e-05 | 11.01% | 12.37% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012254678266228493 | 0.00012122403690880642 | 1.08% | 1.09% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.487317863600583e-05 | 3.300429741503886e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.557605650054723e-05 | 1.3649949020656659e-05 | 12.37% | 14.11% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.50586848615099e-05 | 1.3252167300971968e-05 | 12.00% | 13.63% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.4820192824723635e-05 | 1.296366154924885e-05 | 12.53% | 14.32% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.63955148892255e-05 | 1.4663119747064432e-05 | 10.57% | 11.81% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5569617889017107e-05 | 2.3315533124703203e-05 | 8.82% | 9.67% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.456656714016152e-05 | 1.289057108095519e-05 | 11.51% | 13.00% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4691990845549705e-05 | 1.2851052172144408e-05 | 12.53% | 14.33% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0469891237342332e-05 | 1.8908160362274467e-05 | 7.63% | 8.26% | 1.08x | ✅ |
