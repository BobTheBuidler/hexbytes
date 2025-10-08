#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4815957518189122e-05 | 2.323741742667928e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.499168674292274e-05 | 2.3180674846065482e-05 | 7.25% | 7.81% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.467843222597364e-05 | 2.322996863455447e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4563885137150446e-05 | 2.3367597955470324e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4622680050986677e-05 | 2.32315401304226e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5221611679225928e-05 | 2.4916341160243495e-05 | 1.21% | 1.23% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.468504212536377e-05 | 2.381153263285404e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4418645038622666e-05 | 2.3903951631702077e-05 | 2.11% | 2.15% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.450570824790637e-05 | 2.33194877020744e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4905187877061046e-05 | 2.326564402334891e-05 | 6.58% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4758089583246185e-05 | 2.337027688097156e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.461540284903009e-05 | 2.3351123000086303e-05 | 5.14% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4756348817068916e-05 | 2.3327594899234118e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4539410319696033e-05 | 2.332510940380535e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4721023342107855e-05 | 2.3379131509772284e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4670121193178248e-05 | 2.336085882906412e-05 | 5.31% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4689148937445117e-05 | 2.3360644324290475e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4571768253040925e-05 | 2.3332426195835232e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4498254696978512e-05 | 2.3304553944940054e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.504283690735923e-05 | 2.3996243329113425e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4678039491242653e-05 | 2.3297350707673698e-05 | 5.59% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.522434936175017e-05 | 2.3443664316309386e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.483846721032967e-05 | 2.3303380624791458e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4547981631352146e-05 | 2.4085506255498827e-05 | 1.88% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4692814087851262e-05 | 2.3779546091809038e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.5268240258343147e-05 | 2.377157229688989e-05 | 5.92% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3419257350521953e-05 | 2.252121540973952e-05 | 3.83% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3746086025778056e-05 | 2.2497061006953156e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.4227569321378656e-05 | 2.251669363136502e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3775570934974694e-05 | 2.2533903966101405e-05 | 5.22% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.38905605443513e-05 | 2.219393030909336e-05 | 7.10% | 7.64% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.371039877485685e-05 | 2.22901593000098e-05 | 5.99% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3894111753825244e-05 | 2.2756093208685128e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.356484060877055e-05 | 2.2604287626721332e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3861781056523187e-05 | 2.2366976103677075e-05 | 6.26% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3589451258026494e-05 | 2.2591006868265747e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3612537576230767e-05 | 2.2390102179604453e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.378960797291328e-05 | 2.230977119187177e-05 | 6.22% | 6.63% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.371819525901674e-05 | 2.2242548238653864e-05 | 6.22% | 6.63% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.4016466531506466e-05 | 2.229008588644591e-05 | 7.19% | 7.75% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3571415088169574e-05 | 2.2229857220207937e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3375850911875174e-05 | 2.2436622195768564e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3452565279232885e-05 | 2.234400541319998e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3815424117404074e-05 | 2.2442627111939143e-05 | 5.76% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3759944735070682e-05 | 2.2733651398807548e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3795980055932363e-05 | 2.2280158975776737e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.404071784124195e-05 | 2.2747668204787818e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.363289251772724e-05 | 2.2266443201170374e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.413257387043133e-05 | 2.2349060329345376e-05 | 7.39% | 7.98% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3944786700165484e-05 | 2.2339889912020418e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.4232472402237243e-05 | 2.252734778569536e-05 | 7.04% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3713332862873595e-05 | 2.244435859501425e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3716013391644792e-05 | 2.2585757739447734e-05 | 4.77% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.395763028044325e-05 | 2.2521910102704387e-05 | 5.99% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3786629657488054e-05 | 2.229284403571319e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3706242201539047e-05 | 2.2298893156507252e-05 | 5.94% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3819352731516755e-05 | 2.271366708691106e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.4519173638240034e-05 | 2.2121899853243074e-05 | 9.78% | 10.84% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3482532367243845e-05 | 2.2140595276158422e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.350096707289276e-05 | 2.2188991973558493e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3682467694410823e-05 | 2.2612591859306363e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3974169097819536e-05 | 2.2181458203837523e-05 | 7.48% | 8.08% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.406863414301758e-05 | 2.2076052734304906e-05 | 8.28% | 9.03% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3742766807173897e-05 | 2.222988143465632e-05 | 6.37% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.404934595781359e-05 | 2.2242976101325816e-05 | 7.51% | 8.12% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3516616237300287e-05 | 2.2200977082432582e-05 | 5.59% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3655446052324674e-05 | 2.2346949575352176e-05 | 5.53% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.360683474266779e-05 | 2.2174162760113924e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.372566182683921e-05 | 2.2363897273422764e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3894480993755427e-05 | 2.2262239894206023e-05 | 6.83% | 7.33% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.379040699661588e-05 | 2.2283797293543673e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3706163591874798e-05 | 2.2173479913496705e-05 | 6.47% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3569089581301216e-05 | 2.2235622885512747e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3952598444375832e-05 | 2.246599143400761e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3806255439056956e-05 | 2.2264347103021153e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3684170152052223e-05 | 2.218614131445214e-05 | 6.33% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.384028277937883e-05 | 2.2317164932185754e-05 | 6.39% | 6.82% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3652801732528514e-05 | 2.2267997486247177e-05 | 5.85% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3681030723103605e-05 | 2.2222670852701073e-05 | 6.16% | 6.56% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.379175104977085e-05 | 2.2202442421441474e-05 | 6.68% | 7.16% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.349529838211381e-05 | 2.2359232042271073e-05 | 4.84% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3611795294635074e-05 | 2.2225408497749822e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3693471362843924e-05 | 2.2263642415888376e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3621049549037067e-05 | 2.266977167687751e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.328360863523326e-05 | 2.2385138735022707e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.344518625342879e-05 | 2.2329680264914812e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3301266335857048e-05 | 2.2742363619162324e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3579193488007452e-05 | 2.2576003214089187e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.359714772043807e-05 | 2.229008847305993e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.338702982712889e-05 | 2.233443351976533e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.327869456206976e-05 | 2.216550474160494e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3520395345964735e-05 | 2.257867989093151e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.35060946265158e-05 | 2.2370307717298312e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.356109391661716e-05 | 2.224295258713608e-05 | 5.59% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.377966202318841e-05 | 2.2281359469779937e-05 | 6.30% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.346761969021569e-05 | 2.222595967428535e-05 | 5.29% | 5.59% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3449263501645632e-05 | 2.5070764167200928e-05 | -6.91% | -6.47% | 0.94x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.323174050342295e-05 | 2.241471045194996e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3514766678555988e-05 | 2.2593965870807778e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3596469760608948e-05 | 2.2572212765407408e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3546173504511273e-05 | 2.2479299538404666e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3515193941323854e-05 | 2.225755489781573e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.35071902115465e-05 | 2.230234926670244e-05 | 5.13% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3738083190379348e-05 | 2.229019766981677e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3741449683416218e-05 | 2.2251519363702206e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.366551538718643e-05 | 2.253315482054391e-05 | 4.78% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.37748373094076e-05 | 2.2710735415706232e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.36294084834588e-05 | 2.2596779771103345e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.403975793325696e-05 | 2.2383415517151603e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.34469388816728e-05 | 2.237700421202496e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3716586141842265e-05 | 2.2472474640444777e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3895592685942477e-05 | 2.2035529992744683e-05 | 7.78% | 8.44% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3736251226581613e-05 | 2.273362079320998e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3673953489382178e-05 | 2.2457893682888497e-05 | 5.14% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.370281393271934e-05 | 2.2431282613206826e-05 | 5.36% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3656186050230982e-05 | 2.2551723863017532e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.372424587162346e-05 | 2.24511155400636e-05 | 5.37% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3583854664165805e-05 | 2.2497757229814305e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3761355240706404e-05 | 2.2405114862227697e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3538140516565893e-05 | 2.2371128973128875e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.359110928086081e-05 | 2.221115505657025e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3260028195261576e-05 | 2.2306284489098033e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.360417537895871e-05 | 2.251082086369651e-05 | 4.63% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3830807359923623e-05 | 2.2346309951664428e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3711285717523375e-05 | 2.2474448726899732e-05 | 5.22% | 5.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3436924630608695e-05 | 2.2396051541534126e-05 | 4.44% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3668595465124716e-05 | 2.2289648418351357e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.351964846581729e-05 | 2.240421923325913e-05 | 4.74% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.391336828324265e-05 | 2.215786275921801e-05 | 7.34% | 7.92% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3807109983844827e-05 | 2.1867935726208993e-05 | 8.15% | 8.87% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.416362944450912e-05 | 2.2770753695730664e-05 | 5.76% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.400256946374398e-05 | 2.2375126293723663e-05 | 6.78% | 7.27% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3764199777252133e-05 | 2.2056224006506947e-05 | 7.19% | 7.74% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.4211387327765502e-05 | 2.240019348410611e-05 | 7.48% | 8.09% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3716814531764633e-05 | 2.2154962637397344e-05 | 6.59% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.413791835163061e-05 | 2.2118821134110306e-05 | 8.36% | 9.13% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.421225586291319e-05 | 2.234755680071268e-05 | 7.70% | 8.34% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3696325525677253e-05 | 2.2247526231339393e-05 | 6.11% | 6.51% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.4100628754279967e-05 | 2.2094883139885273e-05 | 8.32% | 9.08% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.38584944270151e-05 | 2.2138698091771588e-05 | 7.21% | 7.77% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3785902978132703e-05 | 2.2072371780104015e-05 | 7.20% | 7.76% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3784977059148304e-05 | 2.211962570290052e-05 | 7.00% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3700734849261895e-05 | 2.2120681887023932e-05 | 6.67% | 7.14% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.406419382296312e-05 | 2.19807687566719e-05 | 8.66% | 9.48% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.383976693534454e-05 | 2.2630658724131406e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3979624771140322e-05 | 2.2328395385969107e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.34163593756519e-05 | 2.205221593031053e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.4046070983277165e-05 | 2.2187776257769353e-05 | 7.73% | 8.38% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3782487511810056e-05 | 2.214941519199688e-05 | 6.87% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.4120120674278746e-05 | 2.209224427672984e-05 | 8.41% | 9.18% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.34921311046118e-05 | 2.2210016708761127e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.4005108850538193e-05 | 2.2411959114604496e-05 | 6.64% | 7.11% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.370564903012719e-05 | 2.2023769556806577e-05 | 7.09% | 7.64% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.377626977175104e-05 | 2.217118851303218e-05 | 6.75% | 7.24% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.378304954784653e-05 | 2.2175959556196413e-05 | 6.76% | 7.25% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3739050077825476e-05 | 2.2254735184722817e-05 | 6.25% | 6.67% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3698570706840428e-05 | 2.2692218428807572e-05 | 4.25% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3509939394101845e-05 | 2.23098363120744e-05 | 5.10% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3927059570531508e-05 | 2.2745049487687928e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.370280355715946e-05 | 2.2091400955219417e-05 | 6.80% | 7.29% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.40653447397226e-05 | 2.2167632863017708e-05 | 7.89% | 8.56% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.4240890760840145e-05 | 2.2084934697308292e-05 | 8.89% | 9.76% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3768934661810337e-05 | 2.2137494475984394e-05 | 6.86% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3905962441499865e-05 | 2.210209080236595e-05 | 7.55% | 8.16% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.385863573637786e-05 | 2.2223752559845875e-05 | 6.85% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.4071719845091504e-05 | 2.2095039961257052e-05 | 8.21% | 8.95% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.412793762584248e-05 | 2.222669915544779e-05 | 7.88% | 8.55% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3555268044337486e-05 | 2.2118702633091277e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.384874748506212e-05 | 2.209138726042397e-05 | 7.37% | 7.95% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3861182686905003e-05 | 2.2354440944528662e-05 | 6.31% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.357345551601425e-05 | 2.2119311629089632e-05 | 6.17% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3525074076147965e-05 | 2.2240515465877773e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.158874137926803e-05 | 5.936184942228242e-05 | 27.24% | 37.44% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.187163359167034e-05 | 6.094789728133496e-05 | 25.56% | 34.33% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.197547196103761e-05 | 5.974229761281502e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.148004456100136e-05 | 6.036804331081553e-05 | 25.91% | 34.97% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.191963339448875e-05 | 5.990501382920067e-05 | 26.87% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.100036466402196e-05 | 6.0504193058126826e-05 | 25.30% | 33.88% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.83086901011603e-05 | 5.762094198504632e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.226831002321282e-05 | 6.053682075547745e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.170820193269161e-05 | 6.03337935171177e-05 | 26.16% | 35.43% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.247179799257704e-05 | 5.987690592931465e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.225563556432903e-05 | 6.182193299453653e-05 | 24.84% | 33.05% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.166756718729766e-05 | 5.998351039469376e-05 | 26.55% | 36.15% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.252859704939733e-05 | 6.047662379491292e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.279984536095575e-05 | 5.931946185079214e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.29157003182825e-05 | 5.9675717671382575e-05 | 28.03% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.258194178472292e-05 | 6.0141765342525025e-05 | 27.17% | 37.31% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.16726123516879e-05 | 5.984410334738925e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.179924304155853e-05 | 6.036468029089999e-05 | 26.20% | 35.51% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.213259568805892e-05 | 6.0520562654051094e-05 | 26.31% | 35.71% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.248627210823434e-05 | 6.037304216276541e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.2073655452793e-05 | 5.95338101755882e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.132697739508627e-05 | 5.986594467165199e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.14974399589202e-05 | 5.9662759784013346e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.3884937704009e-05 | 6.038667903857963e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.150599039873225e-05 | 6.0030389975486114e-05 | 26.35% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.171274370640066e-05 | 6.007060530814203e-05 | 26.49% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.021920390349683e-05 | 5.785587173062897e-05 | 27.88% | 38.65% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.970557011415754e-05 | 5.79346405853674e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.181751684149665e-05 | 5.9647810354315246e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.220857703601872e-05 | 6.071904831626277e-05 | 26.14% | 35.39% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.205169533887507e-05 | 6.054308226564608e-05 | 26.21% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.29860118923538e-05 | 6.124684564726618e-05 | 26.20% | 35.49% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.225749552387071e-05 | 6.145092501660742e-05 | 25.29% | 33.86% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.249056320502428e-05 | 6.149205212048085e-05 | 25.46% | 34.15% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.216156877378178e-05 | 6.126953055548171e-05 | 25.43% | 34.10% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.046552141187386e-05 | 5.981185221567854e-05 | 25.67% | 34.53% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.259098547049542e-05 | 6.277682656198159e-05 | 23.99% | 31.56% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.259325418821997e-05 | 6.0897465586848775e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.309054443772027e-05 | 6.0874534841153455e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.261419880959167e-05 | 6.117157521061489e-05 | 25.96% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.273965905829822e-05 | 6.114246503049624e-05 | 26.10% | 35.32% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.248296532188748e-05 | 6.096854583740308e-05 | 26.08% | 35.29% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.262238637383459e-05 | 6.150344668614003e-05 | 25.56% | 34.34% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.32065743516288e-05 | 6.0177893693850575e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.262223551792056e-05 | 6.07632707914368e-05 | 26.46% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.290927437182107e-05 | 6.14762015265771e-05 | 25.85% | 34.86% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.267925744574209e-05 | 6.095251303707212e-05 | 26.28% | 35.65% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.273806885029946e-05 | 6.139318405579434e-05 | 25.80% | 34.77% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.244964636847278e-05 | 6.079018606442721e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.286626942165477e-05 | 6.0976502167718216e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.286253308795826e-05 | 6.0965996716452804e-05 | 26.43% | 35.92% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.717426718628582e-05 | 6.123075393890418e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.222778835748292e-05 | 6.119538094410558e-05 | 25.58% | 34.37% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.366005796784939e-05 | 6.0593550823028595e-05 | 27.57% | 38.07% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.239221148487113e-05 | 6.12936277187164e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.145696427845327e-05 | 5.9312521134286986e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.13188027484653e-05 | 5.9238568874957114e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.207820878415106e-05 | 6.104399613614599e-05 | 25.63% | 34.46% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.224576352547248e-05 | 6.0748622870350616e-05 | 26.14% | 35.39% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.342386563845494e-05 | 6.052489571814201e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.253437638275219e-05 | 6.063280766218985e-05 | 26.54% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.227380588753175e-05 | 6.086187414713933e-05 | 26.03% | 35.18% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.405010994231752e-05 | 6.053268912570709e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.288259873139608e-05 | 6.0130312534574794e-05 | 27.45% | 37.84% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.961366831668843e-05 | 5.856914304812782e-05 | 26.43% | 35.93% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.23491397824994e-05 | 6.061301209572691e-05 | 26.40% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.316168468360637e-05 | 6.0453585288549775e-05 | 27.31% | 37.56% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.373536007169938e-05 | 6.0477686421693896e-05 | 27.78% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.28698716193288e-05 | 6.028505753133119e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.249754093841705e-05 | 5.9883021875683755e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.26965189238725e-05 | 6.033729752069336e-05 | 27.04% | 37.06% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.295269365795219e-05 | 6.0372863109479515e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.261472713855325e-05 | 6.0319052486455784e-05 | 26.99% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.237614734605528e-05 | 6.0597812806048734e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.256799948711941e-05 | 6.0097809185700085e-05 | 27.21% | 37.39% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.184145300681373e-05 | 6.0028932259803536e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.195245064894868e-05 | 6.106598226402518e-05 | 25.49% | 34.20% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.290274559223522e-05 | 6.110050727944284e-05 | 26.30% | 35.68% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.203979438277453e-05 | 6.056349096968688e-05 | 26.18% | 35.46% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.24472947625233e-05 | 6.047325638791342e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.232283665766438e-05 | 6.0657300490338584e-05 | 26.32% | 35.72% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.295337207521434e-05 | 6.0695139616075795e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.253304815329285e-05 | 6.030179699124444e-05 | 26.94% | 36.87% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.231127082256974e-05 | 6.046572959847554e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.044821880076987e-05 | 5.828613786275397e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.079170464545125e-05 | 5.795687318477875e-05 | 28.26% | 39.40% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.528351152241482e-05 | 6.048264210698231e-05 | 29.08% | 41.00% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.359476484251543e-05 | 5.9782496181542e-05 | 28.49% | 39.83% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.324132707977177e-05 | 6.063264656524695e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.382620580304619e-05 | 6.069410806539692e-05 | 27.60% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.281881970535614e-05 | 6.0380359185186e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.27554953266174e-05 | 6.017872092244139e-05 | 27.28% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.233259340165023e-05 | 6.134328592170561e-05 | 25.49% | 34.22% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.903759852050067e-05 | 5.748332919404697e-05 | 27.27% | 37.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.138845548478261e-05 | 6.0371274328003824e-05 | 25.82% | 34.81% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.08541996330341e-05 | 6.025110180266896e-05 | 25.48% | 34.20% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.266685939333836e-05 | 6.504872885869008e-05 | 21.31% | 27.08% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.0001038567319538242 | 7.75875210979368e-05 | 25.29% | 33.86% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.924040343098189e-05 | 5.753343404923259e-05 | 27.39% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.221590841203097e-05 | 5.979455535521967e-05 | 27.27% | 37.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.179136612298987e-05 | 6.024054096239685e-05 | 26.35% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.196734080899322e-05 | 6.000295094741753e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.146722785234977e-05 | 5.983985891358813e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.102691877051847e-05 | 6.028466144013463e-05 | 25.60% | 34.41% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.826053653430473e-05 | 7.402907956275328e-05 | 24.66% | 32.73% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.926348747743365e-05 | 5.76891336773402e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.745901614560696e-05 | 7.487275733337719e-05 | 23.18% | 30.17% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.2455155167239e-05 | 6.134324582110495e-05 | 25.60% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.143051914874115e-05 | 6.0123101862834465e-05 | 26.17% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.235746479296143e-05 | 5.983351522645033e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.202478300997558e-05 | 5.9843682333469656e-05 | 27.04% | 37.07% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.161343756620752e-05 | 5.9948791983467613e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.286268217496747e-05 | 6.0886564925824734e-05 | 26.52% | 36.09% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.9908757387398e-05 | 5.7812472625970486e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.954695175386731e-05 | 5.7761720395054575e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.411962851361742e-05 | 6.0664161147338455e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.053221542729754e-05 | 5.782553597648148e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.307397644388753e-05 | 5.961170750731091e-05 | 28.24% | 39.36% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.138949451936312e-05 | 5.962169098023686e-05 | 26.75% | 36.51% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.108132702030693e-05 | 5.874566012620608e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.023315351381477e-05 | 5.914521744036165e-05 | 26.28% | 35.65% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.98881285201064e-05 | 5.999422370879396e-05 | 24.90% | 33.16% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.793555073240806e-05 | 5.6133376033545156e-05 | 27.97% | 38.84% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.038275495302093e-05 | 5.877046652263523e-05 | 26.89% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.133626380984293e-05 | 5.804295528333492e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.001355291195184e-05 | 5.8754381645492404e-05 | 26.57% | 36.18% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010287338275291927 | 7.926527674859973e-05 | 22.95% | 29.78% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.120998086098522e-05 | 5.84328608658629e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.991411622552212e-05 | 5.835156334069739e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.087841526675763e-05 | 5.841702939673503e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.9649810971539e-05 | 5.799341633414953e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.165253409793914e-05 | 5.767650241127296e-05 | 29.36% | 41.57% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.087346596400575e-05 | 5.884993330835726e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.811291979211797e-05 | 6.972003570066531e-05 | 28.94% | 40.72% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.130107976074272e-05 | 5.8865954684560504e-05 | 27.60% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.833338912320727e-05 | 7.356529247887829e-05 | 25.19% | 33.67% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.072253947059491e-05 | 5.984889250258876e-05 | 25.86% | 34.88% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.043934460406476e-05 | 5.785370778100685e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.08520600962201e-05 | 5.7849544519877736e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.05167099114802e-05 | 5.839001555727415e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.054776200259266e-05 | 5.714226441551919e-05 | 29.06% | 40.96% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.005530320360214e-05 | 6.244435536800857e-05 | 22.00% | 28.20% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.718595132920844e-05 | 5.69083400057879e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.749282548070295e-05 | 5.62674035227747e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.89355735512056e-05 | 5.84559172445027e-05 | 25.94% | 35.03% | 1.35x | ✅ |
| `hexbytes_new['']` | 7.061352770260829e-05 | 3.746022866018403e-05 | 46.95% | 88.50% | 1.89x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.344738083652532e-05 | 5.26862323267876e-05 | 43.62% | 77.37% | 1.77x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.1762926825742e-05 | 5.2898230058898134e-05 | 42.35% | 73.47% | 1.73x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.832468727787016e-05 | 4.9653522747350534e-05 | 43.78% | 77.88% | 1.78x | ✅ |
| `hexbytes_new['0x']` | 7.79058500222623e-05 | 3.8221344789745324e-05 | 50.94% | 103.83% | 2.04x | ✅ |
| `hexbytes_new['0x1234']` | 8.574702596326499e-05 | 4.8261650801384535e-05 | 43.72% | 77.67% | 1.78x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.547164954924834e-05 | 4.744677926816294e-05 | 44.49% | 80.14% | 1.80x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.619699838376181e-05 | 4.7943784657755185e-05 | 44.38% | 79.79% | 1.80x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.592580132786286e-05 | 4.797381098494579e-05 | 44.17% | 79.11% | 1.79x | ✅ |
| `hexbytes_new['abc']` | 8.346634408192414e-05 | 5.037685735415736e-05 | 39.64% | 65.68% | 1.66x | ✅ |
| `hexbytes_new['deadbeef']` | 7.76428284891337e-05 | 4.2543600314022825e-05 | 45.21% | 82.50% | 1.83x | ✅ |
| `hexbytes_new[0-9]` | 4.23303112403511e-05 | 2.5972705984402972e-05 | 38.64% | 62.98% | 1.63x | ✅ |
| `hexbytes_new[0]` | 0.00012110636092883232 | 6.249746284061343e-05 | 48.39% | 93.78% | 1.94x | ✅ |
| `hexbytes_new[123456]` | 0.0001265004697468215 | 6.851784248818788e-05 | 45.84% | 84.62% | 1.85x | ✅ |
| `hexbytes_new[2**16]` | 0.0001294683870973124 | 6.8518267586255e-05 | 47.08% | 88.95% | 1.89x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013303364474505014 | 7.643422364828404e-05 | 42.55% | 74.05% | 1.74x | ✅ |
| `hexbytes_new[2**32]` | 0.00013125682134281177 | 7.059011248127672e-05 | 46.22% | 85.94% | 1.86x | ✅ |
| `hexbytes_new[2**64]` | 0.0001337626407812125 | 7.407080608019694e-05 | 44.63% | 80.59% | 1.81x | ✅ |
| `hexbytes_new[2**8]` | 0.0001262593780154078 | 6.604478290186242e-05 | 47.69% | 91.17% | 1.91x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.360159705571842e-05 | 2.6647476466573845e-05 | 38.88% | 63.62% | 1.64x | ✅ |
| `hexbytes_new[False]` | 6.014848031316459e-05 | 2.7224935741460685e-05 | 54.74% | 120.93% | 2.21x | ✅ |
| `hexbytes_new[True]` | 6.0794303475654845e-05 | 2.7354790837061063e-05 | 55.00% | 122.24% | 2.22x | ✅ |
| `hexbytes_new[all byte values]` | 4.296967811574181e-05 | 2.684531724803922e-05 | 37.52% | 60.06% | 1.60x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3062775261680606e-05 | 2.6537134253935653e-05 | 38.38% | 62.27% | 1.62x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.298977970757695e-05 | 2.6403619519492216e-05 | 38.58% | 62.82% | 1.63x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.246638875655563e-05 | 2.5887061976063426e-05 | 39.04% | 64.04% | 1.64x | ✅ |
| `hexbytes_new[b'']` | 4.2383826946904776e-05 | 2.5628228111769443e-05 | 39.53% | 65.38% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.307752169814541e-05 | 2.589398757501326e-05 | 39.89% | 66.36% | 1.66x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.223641207973662e-05 | 2.5798595274149905e-05 | 38.92% | 63.72% | 1.64x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.352943718555897e-05 | 2.659826734278178e-05 | 38.90% | 63.66% | 1.64x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.5800981326568164e-05 | 3.839877630118332e-05 | 31.19% | 45.32% | 1.45x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.304376786325528e-05 | 2.560384927324432e-05 | 40.52% | 68.11% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.308696258014535e-05 | 2.6016951481610805e-05 | 39.62% | 65.61% | 1.66x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.3012564268905466e-05 | 2.57301809716526e-05 | 40.18% | 67.17% | 1.67x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.3403516177090726e-05 | 2.57476893945114e-05 | 40.68% | 68.57% | 1.69x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.310837230910579e-05 | 2.5644658757821025e-05 | 40.51% | 68.10% | 1.68x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.308343037439319e-05 | 2.6258824729240215e-05 | 39.05% | 64.07% | 1.64x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.057241981908928e-05 | 3.296570205910291e-05 | 34.81% | 53.41% | 1.53x | ✅ |
| `hexbytes_new[b'abc']` | 4.3720569268309305e-05 | 2.5630198218377632e-05 | 41.38% | 70.58% | 1.71x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 7.054917442162382e-05 | 3.759584054735278e-05 | 46.71% | 87.65% | 1.88x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.964788147158704e-05 | 3.850574151245135e-05 | 44.71% | 80.88% | 1.81x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.021626186199028e-05 | 3.8079672858952955e-05 | 45.77% | 84.39% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.95000834141796e-05 | 3.798011462624858e-05 | 45.35% | 82.99% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.926582970870214e-05 | 3.7886847258748446e-05 | 45.30% | 82.82% | 1.83x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.053746370335263e-05 | 3.7970579391047574e-05 | 46.17% | 85.77% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.83973090178081e-05 | 3.64542405245791e-05 | 46.70% | 87.63% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 7.058704910573099e-05 | 3.808613987226178e-05 | 46.04% | 85.34% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.986565681768215e-05 | 3.8078540838925095e-05 | 45.50% | 83.48% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.989298778362405e-05 | 3.8237999835667106e-05 | 45.29% | 82.78% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.082635590848168e-05 | 5.684915016930975e-05 | 37.41% | 59.77% | 1.60x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.025180063561893e-05 | 3.844814423546138e-05 | 45.27% | 82.72% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.984890331797619e-05 | 3.821421594774138e-05 | 45.29% | 82.78% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.861618776161423e-05 | 3.790396922592592e-05 | 44.76% | 81.03% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.933724109949618e-05 | 3.925945421407942e-05 | 43.38% | 76.61% | 1.77x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.926611377239828e-05 | 3.7963650700333346e-05 | 45.19% | 82.45% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.938405393728563e-05 | 3.807382322462547e-05 | 45.13% | 82.24% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.54044093558724e-05 | 5.0434738781333715e-05 | 40.95% | 69.34% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.948809781909333e-05 | 3.825137693977182e-05 | 44.95% | 81.66% | 1.82x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.50418725544602e-05 | 4.9771591213775414e-05 | 41.47% | 70.86% | 1.71x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.998507490543224e-05 | 3.828017083357448e-05 | 45.30% | 82.82% | 1.83x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.9420832710735e-05 | 3.748356229622278e-05 | 46.01% | 85.20% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.783446546365812e-05 | 3.7961088369537536e-05 | 44.04% | 78.69% | 1.79x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.951997922406556e-05 | 3.821227398429949e-05 | 45.03% | 81.93% | 1.82x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.020352187582269e-05 | 3.8159446871872336e-05 | 45.64% | 83.97% | 1.84x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.064288548602511e-05 | 3.813820714797809e-05 | 46.01% | 85.23% | 1.85x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.012396960917494e-05 | 3.828443268896556e-05 | 45.40% | 83.17% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.086106825508286e-05 | 3.8190048871102286e-05 | 46.11% | 85.55% | 1.86x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.949692258960381e-05 | 3.807050030971784e-05 | 45.22% | 82.55% | 1.83x | ✅ |
| `hexbytes_new[long alternating]` | 5.0337389414310784e-05 | 3.2938961426282684e-05 | 34.56% | 52.82% | 1.53x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.635661359988142e-05 | 4.277920884511084e-05 | 50.46% | 101.87% | 2.02x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.512702040678775e-05 | 4.420743336535825e-05 | 48.07% | 92.56% | 1.93x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.598961647255803e-05 | 4.380154956594847e-05 | 49.06% | 96.32% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.620637868593005e-05 | 4.2894175408336964e-05 | 50.24% | 100.97% | 2.01x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.637526078000483e-05 | 4.253122078316311e-05 | 50.76% | 103.09% | 2.03x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.666069884280398e-05 | 4.259371446364551e-05 | 50.85% | 103.46% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.519100660315408e-05 | 4.1000612647030865e-05 | 51.87% | 107.78% | 2.08x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.681720066648464e-05 | 4.298256354370187e-05 | 50.49% | 101.98% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.694876270506326e-05 | 4.305081717120313e-05 | 50.49% | 101.97% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.63694747670107e-05 | 4.372648520905376e-05 | 49.37% | 97.52% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010565577473760478 | 6.253574985044737e-05 | 40.81% | 68.95% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.629679343879003e-05 | 4.3030101563211535e-05 | 50.14% | 100.55% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.463485305073628e-05 | 4.317603287445291e-05 | 48.99% | 96.02% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.601510258610339e-05 | 4.2944787011541204e-05 | 50.07% | 100.29% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.622359710617895e-05 | 4.2738287090362994e-05 | 50.43% | 101.75% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.561640880395846e-05 | 4.3125256402169114e-05 | 49.63% | 98.53% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.500486978925127e-05 | 4.264687516395847e-05 | 49.83% | 99.32% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.829402444229776e-05 | 5.640549951384395e-05 | 42.62% | 74.26% | 1.74x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.72506614117765e-05 | 4.311159197909468e-05 | 50.59% | 102.38% | 2.02x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.797697621342298e-05 | 5.7131590662754485e-05 | 41.69% | 71.49% | 1.71x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.533260381029738e-05 | 4.351373575012477e-05 | 49.01% | 96.10% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.677999189450184e-05 | 4.3007245298222025e-05 | 50.44% | 101.78% | 2.02x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.604829730237082e-05 | 4.308315264519062e-05 | 49.93% | 99.73% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.630105251016679e-05 | 4.279419950991166e-05 | 50.41% | 101.67% | 2.02x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.863736926557844e-05 | 4.281252103315611e-05 | 51.70% | 107.04% | 2.07x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.70703255406833e-05 | 4.348026883563041e-05 | 50.06% | 100.25% | 2.00x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.703643636977645e-05 | 4.313989414716809e-05 | 50.43% | 101.75% | 2.02x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.672025020288838e-05 | 4.3359863200481304e-05 | 50.00% | 100.00% | 2.00x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.566422746408213e-05 | 4.325968501455721e-05 | 49.50% | 98.02% | 1.98x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.283258847746323e-05 | 2.652779169025783e-05 | 38.07% | 61.46% | 1.61x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.211022794674997e-05 | 2.58657357800034e-05 | 38.58% | 62.80% | 1.63x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.2191394589151484e-05 | 2.5931143993224695e-05 | 38.54% | 62.71% | 1.63x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.231237493234109e-05 | 2.5868487345916664e-05 | 38.86% | 63.57% | 1.64x | ✅ |
| `hexbytes_new[palindrome]` | 4.2943284978035634e-05 | 2.5568473049951326e-05 | 40.46% | 67.95% | 1.68x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.263140463764382e-05 | 2.6528552808378908e-05 | 37.77% | 60.70% | 1.61x | ✅ |
| `hexbytes_new[single 0xff]` | 4.27799448088154e-05 | 2.59839271051909e-05 | 39.26% | 64.64% | 1.65x | ✅ |
| `hexbytes_new[single null byte]` | 4.30556884997703e-05 | 2.5444155586503732e-05 | 40.90% | 69.22% | 1.69x | ✅ |
| `hexbytes_new[two patterns]` | 4.2734504646908925e-05 | 2.6557277559248504e-05 | 37.86% | 60.91% | 1.61x | ✅ |
| `hexbytes_repr[0-9]` | 2.8858747385831453e-05 | 1.4571622141304269e-05 | 49.51% | 98.05% | 1.98x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001192617413231854 | 4.052649622620383e-05 | 66.02% | 194.28% | 2.94x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011952430656231849 | 4.0697803725643195e-05 | 65.95% | 193.69% | 2.94x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.025322540188212e-05 | 1.975445423063589e-05 | 60.69% | 154.39% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.8736154734882976e-05 | 1.9926901444329513e-05 | 59.11% | 144.57% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.1557086173413933e-05 | 1.7637991868486704e-05 | 57.56% | 135.61% | 2.36x | ✅ |
| `hexbytes_repr[b'']` | 2.153287237369583e-05 | 1.2234776824158554e-05 | 43.18% | 76.00% | 1.76x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.653769367376519e-05 | 1.6736832450361976e-05 | 54.19% | 118.31% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.642648917094263e-05 | 1.392991711888344e-05 | 47.29% | 89.71% | 1.90x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.124462457291185e-05 | 2.3888131553544282e-05 | 61.00% | 156.38% | 2.56x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007602657531711047 | 0.00022298468886099084 | 70.67% | 240.95% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6371404730649557e-05 | 1.4451511046459195e-05 | 45.20% | 82.48% | 1.82x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7003017354854108e-05 | 1.3848073093090484e-05 | 48.72% | 94.99% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8215031633154822e-05 | 1.4471638339596259e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.833823678124318e-05 | 1.4376135530411036e-05 | 49.27% | 97.12% | 1.97x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6459838178758058e-05 | 1.3977711490329133e-05 | 47.17% | 89.30% | 1.89x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.885272597374557e-05 | 1.947736809972354e-05 | 60.13% | 150.82% | 2.51x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0003943474792045026 | 0.00011898096524251511 | 69.83% | 231.44% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6463660114926324e-05 | 1.395178307691483e-05 | 47.28% | 89.68% | 1.90x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003980782283221685 | 0.00012261880188514464 | 69.20% | 224.65% | 3.25x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.754363004421543e-05 | 3.394650832731348e-05 | 65.20% | 187.35% | 2.87x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.910688200922982e-05 | 1.4678158106613551e-05 | 49.57% | 98.30% | 1.98x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7899104441850166e-05 | 1.431140084866364e-05 | 48.70% | 94.94% | 1.95x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7083488630455384e-05 | 1.3990934261146326e-05 | 48.34% | 93.58% | 1.94x | ✅ |
| `hexbytes_repr[palindrome]` | 3.166033679679532e-05 | 1.5429816040322834e-05 | 51.26% | 105.19% | 2.05x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.103195436808407e-05 | 2.3545839398322838e-05 | 61.42% | 159.20% | 2.59x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.56737808282213e-05 | 1.360854129744522e-05 | 46.99% | 88.66% | 1.89x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5635900688736845e-05 | 1.338539008366905e-05 | 47.79% | 91.52% | 1.92x | ✅ |
| `hexbytes_repr[two patterns]` | 4.9148915953498505e-05 | 1.9849889512826822e-05 | 59.61% | 147.60% | 2.48x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.556304754458437e-05 | 1.3709513320075459e-05 | 11.91% | 13.52% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.198319067009947e-05 | 3.958010645387982e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.201107269535511e-05 | 3.971325733624996e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0766317575833785e-05 | 1.8828981170482504e-05 | 9.33% | 10.29% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.090651254484494e-05 | 1.8926393976318943e-05 | 9.47% | 10.46% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.876279761976904e-05 | 1.693656283534768e-05 | 9.73% | 10.78% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0086430481502697e-05 | 1.1380818969404555e-05 | -12.83% | -11.37% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7518117425421204e-05 | 1.5867671201037854e-05 | 9.42% | 10.40% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4940982376095728e-05 | 1.3016743473670461e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.505234352196375e-05 | 2.281491113819892e-05 | 8.93% | 9.81% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022631059530009648 | 0.0002224669378017651 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4786085845816331e-05 | 1.3126803894169558e-05 | 11.22% | 12.64% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4913843934438887e-05 | 1.3274359173822132e-05 | 10.99% | 12.35% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5262065343332186e-05 | 1.353608851268777e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.520008250655406e-05 | 1.3569954390201206e-05 | 10.72% | 12.01% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4997038638038299e-05 | 1.3236255990897042e-05 | 11.74% | 13.30% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.066246939320439e-05 | 1.8998041323243628e-05 | 8.06% | 8.76% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012237528195335469 | 0.00012128273625304591 | 0.89% | 0.90% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4747148337076757e-05 | 1.298273879467231e-05 | 11.96% | 13.59% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001221119719070192 | 0.0001222167249971143 | -0.09% | -0.09% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4987004287633314e-05 | 3.29332463847692e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.553288196947369e-05 | 1.3677506365198229e-05 | 11.94% | 13.57% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5123135618074661e-05 | 1.3270538905469987e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.4949788369861193e-05 | 1.3032741816815059e-05 | 12.82% | 14.71% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6399139115689817e-05 | 1.479890650660196e-05 | 9.76% | 10.81% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5121145370014236e-05 | 2.2756887374277395e-05 | 9.41% | 10.39% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4703480205614086e-05 | 1.285226228034348e-05 | 12.59% | 14.40% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.474190925986605e-05 | 1.303333934140912e-05 | 11.59% | 13.11% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.114824611432251e-05 | 1.8769291415243983e-05 | 11.25% | 12.67% | 1.13x | ✅ |
