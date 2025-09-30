#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/benchmark/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/benchmark/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4847447452029246e-05 | 2.3450026731823607e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.446805682924332e-05 | 2.3635641231548687e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4726612057580454e-05 | 2.3407566330406905e-05 | 5.33% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4731667416142e-05 | 2.3283497082720465e-05 | 5.86% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4523115479161836e-05 | 2.3346323921959994e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.471176627058649e-05 | 2.3615962469828527e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.4777311257616818e-05 | 2.3405050535681556e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4313481344212053e-05 | 2.3204503403589972e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.468310354706276e-05 | 2.327476042499668e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4854226475343243e-05 | 2.3390127621197537e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4745279930320675e-05 | 2.3522761413737913e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.438506663016707e-05 | 2.3257755613599015e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4743313419518356e-05 | 2.3370369649475358e-05 | 5.55% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4816026228816605e-05 | 2.3249313657766363e-05 | 6.31% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.448254310611167e-05 | 2.3316949833370263e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4849436712534857e-05 | 2.3344878336245734e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.493238498788441e-05 | 2.3606790961815634e-05 | 5.32% | 5.62% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4834496919024717e-05 | 2.3382304411471888e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4615057704326276e-05 | 2.3430983714349e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4671778626251292e-05 | 2.3627064998301808e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.468829805610535e-05 | 2.3326285352224695e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4370598961263974e-05 | 2.338947068419359e-05 | 4.03% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4579864556403647e-05 | 2.3370869518498163e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4879236943731623e-05 | 2.3387243476769648e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.448997201236898e-05 | 2.3253474233650765e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.450192796439518e-05 | 2.357708117878136e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3640609440231097e-05 | 2.232804370059225e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.373320584882109e-05 | 2.233125115448439e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3559061122321206e-05 | 2.2250773621945793e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3749435700519763e-05 | 2.218071530181339e-05 | 6.61% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3719266900758352e-05 | 2.2353831626638472e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3597481287196645e-05 | 2.2091971995881697e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.392226984110175e-05 | 2.2037988705510813e-05 | 7.88% | 8.55% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3727784820388614e-05 | 2.2021295173813944e-05 | 7.19% | 7.75% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3659152481324694e-05 | 2.2252363327119516e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3578475937046213e-05 | 2.230988678238333e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3631310564377923e-05 | 2.2118711270966876e-05 | 6.40% | 6.84% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.372311879146398e-05 | 2.213856237305192e-05 | 6.68% | 7.16% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3915516289643552e-05 | 2.2307433582913363e-05 | 6.72% | 7.21% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3735412525488777e-05 | 2.2230167485098905e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3683889844274444e-05 | 2.2163847819654035e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.4175792186616108e-05 | 2.200889907538998e-05 | 8.96% | 9.85% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3862376567425472e-05 | 2.2006472774346828e-05 | 7.78% | 8.43% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3732148887069292e-05 | 2.2575495507843222e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3670516671074392e-05 | 2.2302816885162254e-05 | 5.78% | 6.13% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.369279636677286e-05 | 2.1967241132713774e-05 | 7.28% | 7.86% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3713163133561152e-05 | 2.2395580512059475e-05 | 5.56% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.372535189391524e-05 | 2.2258396730235407e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.375859390888847e-05 | 2.2285298064844566e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.363382163680642e-05 | 2.2135741423325648e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3882651063446776e-05 | 2.2259791641842352e-05 | 6.80% | 7.29% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3767333200041022e-05 | 2.2120169400764797e-05 | 6.93% | 7.45% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3618790092504198e-05 | 2.2262308923352927e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.365909050841332e-05 | 2.2210445110527486e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.350437963646178e-05 | 2.230597783626155e-05 | 5.10% | 5.37% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3388753001021146e-05 | 2.241563514334635e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3389290477161366e-05 | 2.222879750713185e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3624362951330394e-05 | 2.228589793267534e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3597960178016714e-05 | 2.2363680838750865e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3531461388181766e-05 | 2.2335075747968907e-05 | 5.08% | 5.36% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3747036836208635e-05 | 2.2402921023370407e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.359141030040157e-05 | 2.2419787480451866e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.351381044957054e-05 | 2.2326575628342087e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3430996963478045e-05 | 2.2274605783180455e-05 | 4.94% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3524676320574997e-05 | 2.2310255654855533e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3733780166228564e-05 | 2.2327814863199725e-05 | 5.92% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3687369965297325e-05 | 2.240640951745013e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3397852464771586e-05 | 2.192985444328968e-05 | 6.27% | 6.69% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.368834322710453e-05 | 2.2273048897882523e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3485814293986674e-05 | 2.231628684523511e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.386470804413667e-05 | 2.2281061209550367e-05 | 6.64% | 7.11% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3691218604520744e-05 | 2.2422567641292406e-05 | 5.35% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3648119368974904e-05 | 2.2379031486075737e-05 | 5.37% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.347146341953654e-05 | 2.229130324896944e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.353816276859851e-05 | 2.2144607709767796e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3612440878305855e-05 | 2.2357479185841583e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3520370890261427e-05 | 2.2218627957983257e-05 | 5.53% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3657794497085767e-05 | 2.256005699098937e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.343486460477775e-05 | 2.2357192532938336e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3571511712386594e-05 | 2.2294920635925086e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.376859702714776e-05 | 2.240866077092658e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3971286041117216e-05 | 2.232290985420918e-05 | 6.88% | 7.38% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3814855939904812e-05 | 2.2196273233205883e-05 | 6.80% | 7.29% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.390055381360492e-05 | 2.2330467329889835e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3807921178646178e-05 | 2.2431680109115197e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3365220473568995e-05 | 2.2343897980482263e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3375625650513347e-05 | 2.2390547339726867e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.350530882275377e-05 | 2.218305857151874e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3425987917706524e-05 | 2.2096632828754697e-05 | 5.67% | 6.02% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3927392356409264e-05 | 2.2239041943430718e-05 | 7.06% | 7.59% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3640994193771224e-05 | 2.2206297555999423e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.374901494471697e-05 | 2.2245854974556628e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3410950031940884e-05 | 2.1972938435673387e-05 | 6.14% | 6.54% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3365199463743537e-05 | 2.22919694642195e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.365441097718043e-05 | 2.2245648112737955e-05 | 5.96% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.35864065938133e-05 | 2.231155832021235e-05 | 5.41% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.323605423398757e-05 | 2.4404525747935898e-05 | -5.03% | -4.79% | 0.95x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3722461264859212e-05 | 2.2385468150396267e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3847633974548234e-05 | 2.2236601070996807e-05 | 6.76% | 7.24% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3826645668796012e-05 | 2.2248675041882893e-05 | 6.62% | 7.09% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3607274029087297e-05 | 2.238016502011036e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3843746513752824e-05 | 2.2074706956929303e-05 | 7.42% | 8.01% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.384995983697482e-05 | 2.2168935214868402e-05 | 7.05% | 7.58% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3353639762196912e-05 | 2.3184971391492197e-05 | 0.72% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3479222769940935e-05 | 2.2220355241910037e-05 | 5.36% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3870436406362992e-05 | 2.2326472681800106e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.346875938372422e-05 | 2.240947646466136e-05 | 4.51% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3721855409706934e-05 | 2.222300970933843e-05 | 6.32% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.390814788126935e-05 | 2.283953127459055e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3669588520335587e-05 | 2.2366387821447823e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.37963607593483e-05 | 2.243596847380388e-05 | 5.72% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.385759012590493e-05 | 2.2598322450417e-05 | 5.28% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3505933187042217e-05 | 2.224940013158834e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3560394405510724e-05 | 2.2325916175874644e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3743939819745725e-05 | 2.2253526385851708e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3905277881044007e-05 | 2.2377902060079857e-05 | 6.39% | 6.83% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3647841778410742e-05 | 2.2284219330703748e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3583389431878405e-05 | 2.2293803599500448e-05 | 5.47% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3722950242620407e-05 | 2.2286066181847813e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3845356834118778e-05 | 2.212288604441631e-05 | 7.22% | 7.79% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3719538098640988e-05 | 2.2142743590668913e-05 | 6.65% | 7.12% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3485133845154906e-05 | 2.2153670264862265e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.388198217001513e-05 | 2.22183555885802e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.388614646004389e-05 | 2.2712403800206335e-05 | 4.91% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.387063951538705e-05 | 2.230592252192809e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.389725274772817e-05 | 2.2360159584640115e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3798089009595062e-05 | 2.2526916278931338e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3655942653303613e-05 | 2.213796458225677e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.396342222639396e-05 | 2.2323883357804693e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.385684287372088e-05 | 2.2693310760618144e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3899973992024223e-05 | 2.2453763928799237e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3705508776158425e-05 | 2.238011738911868e-05 | 5.59% | 5.92% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.377875104005379e-05 | 2.22712890085195e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3802997980227825e-05 | 2.25064045339907e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3656997750980488e-05 | 2.246474914798274e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3889494842101873e-05 | 2.2232110147189814e-05 | 6.94% | 7.45% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3948612391353527e-05 | 2.2580159784875707e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.36230588877441e-05 | 2.2538682146090458e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.354046874295225e-05 | 2.2404037494145434e-05 | 4.83% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3690927947699704e-05 | 2.2461979332169837e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3799501582564888e-05 | 2.225404823020082e-05 | 6.49% | 6.94% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.364995371200852e-05 | 2.2431861192374475e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3899208143721178e-05 | 2.2336480376619072e-05 | 6.54% | 7.00% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.388219329567692e-05 | 2.237994391119528e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3825226326260514e-05 | 2.235339194559478e-05 | 6.18% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.4263073550289538e-05 | 2.2477951042731033e-05 | 7.36% | 7.94% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3839900411638854e-05 | 2.2410074104850746e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.413395342536019e-05 | 2.2403790136882604e-05 | 7.17% | 7.72% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.386539608948987e-05 | 2.2444926049628023e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3624708736914828e-05 | 2.2501062408512196e-05 | 4.76% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.4036002099408217e-05 | 2.2293087839859523e-05 | 7.25% | 7.82% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.377668644820311e-05 | 2.2229137838792795e-05 | 6.51% | 6.96% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3804482853094745e-05 | 2.2123400947219126e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3919398750660017e-05 | 2.2342013515976855e-05 | 6.59% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.381642502048813e-05 | 2.225679471078651e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3850033761120395e-05 | 2.242768382035353e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3859982486855523e-05 | 2.185253475627353e-05 | 8.41% | 9.19% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3835025727299785e-05 | 2.2395683686574797e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3798403675411692e-05 | 2.2465672940989854e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3492257981176665e-05 | 2.2142185976849883e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.366747898620313e-05 | 2.2198146171781466e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.35597953145184e-05 | 2.2171523646048525e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3860267252043716e-05 | 2.2325881149106178e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.38133876111381e-05 | 2.221470970606235e-05 | 6.71% | 7.20% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.387664162249834e-05 | 2.2220958262310435e-05 | 6.93% | 7.45% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3447450794083876e-05 | 2.2117716532324473e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3858675352130537e-05 | 2.237369899823486e-05 | 6.22% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3441867659560046e-05 | 2.204999308430266e-05 | 5.94% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3958043445209287e-05 | 2.2279548089798347e-05 | 7.01% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.370622874194218e-05 | 2.2535518141703165e-05 | 4.94% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.401607357845209e-05 | 2.2335016478901267e-05 | 7.00% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.384207955910319e-05 | 2.2819046333930514e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.068234990254468e-05 | 5.9908517862950774e-05 | 25.75% | 34.68% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.11249058632316e-05 | 5.914985501307563e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.09292051944004e-05 | 5.996926055642412e-05 | 25.90% | 34.95% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.050372644893333e-05 | 5.9492500278013574e-05 | 26.10% | 35.32% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.160105677786958e-05 | 5.9768697206212395e-05 | 26.75% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.059944833324778e-05 | 6.0538737184844244e-05 | 24.89% | 33.14% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.879725653296983e-05 | 5.773333058399736e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.065340013430995e-05 | 5.992783206681132e-05 | 25.70% | 34.58% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.110106993329847e-05 | 6.036323340154663e-05 | 25.57% | 34.36% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.112706850935604e-05 | 5.985948007817502e-05 | 26.22% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.147721111379799e-05 | 6.052596027497756e-05 | 25.71% | 34.62% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.167215920607164e-05 | 6.009837985140856e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.114676602016646e-05 | 6.013714140361474e-05 | 25.89% | 34.94% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.158437482314103e-05 | 5.9964215072264316e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.11956405283511e-05 | 6.012798039697782e-05 | 25.95% | 35.04% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.133062109897846e-05 | 6.0024769901838476e-05 | 26.20% | 35.50% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.147021273208189e-05 | 6.014110090091815e-05 | 26.18% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.184092645393188e-05 | 5.9690798562356445e-05 | 27.06% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.11407611580561e-05 | 6.0269786530966417e-05 | 25.72% | 34.63% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.138515989132823e-05 | 6.0051330791540194e-05 | 26.21% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.11307849411989e-05 | 5.948433203317993e-05 | 26.68% | 36.39% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.0865044025069e-05 | 6.067042211538623e-05 | 24.97% | 33.29% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.098974116830668e-05 | 5.946342412898394e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.30720497246577e-05 | 5.996928553820368e-05 | 27.81% | 38.52% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.052636510236694e-05 | 6.009066007473859e-05 | 25.38% | 34.01% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.17800832421859e-05 | 5.937056592499519e-05 | 27.40% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.866251040166223e-05 | 5.7545369679967186e-05 | 26.85% | 36.70% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.89915242249266e-05 | 5.753772649427693e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.080403866485248e-05 | 5.922889017319143e-05 | 26.70% | 36.43% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.2622325636055e-05 | 6.0528968239167615e-05 | 26.74% | 36.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.272651418364963e-05 | 6.092795295403125e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.255031829407812e-05 | 6.0791886106560145e-05 | 26.36% | 35.79% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.21723996281765e-05 | 6.0797497703534535e-05 | 26.01% | 35.16% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.221975981903979e-05 | 6.072751465186438e-05 | 26.14% | 35.39% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.367206394174686e-05 | 6.133230997235685e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.06918569884131e-05 | 5.772912687932482e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.266038445917815e-05 | 6.0560119980356125e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.20339136045329e-05 | 6.0075424777740126e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.217707354153222e-05 | 6.054433994945807e-05 | 26.32% | 35.73% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.258134725819903e-05 | 6.037501951340134e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.256973994855508e-05 | 6.028594637574512e-05 | 26.99% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.248224031876366e-05 | 6.0332711841273715e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.179846849894452e-05 | 6.092441941098647e-05 | 25.52% | 34.26% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.186628293610639e-05 | 6.0235752841171e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.092846841651972e-05 | 6.04425395196323e-05 | 25.31% | 33.89% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.124670067572987e-05 | 6.041566846002542e-05 | 25.64% | 34.48% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.175597454964947e-05 | 6.06864513192614e-05 | 25.77% | 34.72% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.198075665936462e-05 | 6.0627726194316385e-05 | 26.05% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.204332835156302e-05 | 6.07988550706465e-05 | 25.89% | 34.94% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.17248904408768e-05 | 6.108961798914236e-05 | 25.25% | 33.78% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.291109128917191e-05 | 6.126453753386428e-05 | 26.11% | 35.33% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.302702215551893e-05 | 6.0712845747646644e-05 | 26.88% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.24454859497045e-05 | 6.0612859259637294e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.080784793291502e-05 | 6.0116598701386324e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.334414217224779e-05 | 5.999776415961464e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.156183284693949e-05 | 5.931348806830272e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.174356108905515e-05 | 5.900020044260341e-05 | 27.82% | 38.55% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.22219209418392e-05 | 6.084418406394616e-05 | 26.00% | 35.14% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.313658701170756e-05 | 5.895483225067839e-05 | 29.09% | 41.02% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.196193234840055e-05 | 5.9606213484058697e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.346399715113727e-05 | 6.023051273376708e-05 | 27.84% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.179198156866263e-05 | 6.016420690452284e-05 | 26.44% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.163817929710001e-05 | 5.9934526712899444e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.209272865155255e-05 | 6.092703580256333e-05 | 25.78% | 34.74% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.027790615778153e-05 | 5.7995641927442527e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.276872109450775e-05 | 6.056089253842826e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.19567980550223e-05 | 5.9205196348911915e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.313834030044157e-05 | 6.092565019477837e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.246281656146155e-05 | 5.975929586280049e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.199072701858649e-05 | 5.940088034279834e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.258274406057332e-05 | 6.110407110891471e-05 | 26.01% | 35.15% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.206723002467621e-05 | 6.056757308507195e-05 | 26.20% | 35.50% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.208912763807277e-05 | 6.06431315458422e-05 | 26.13% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.281438339446592e-05 | 5.9749517630166066e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.281844606293529e-05 | 5.9608617469888645e-05 | 28.02% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.233301537469728e-05 | 5.9421223063502564e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.317798982465156e-05 | 6.0510199715760295e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.177884355440976e-05 | 5.960249797801825e-05 | 27.12% | 37.21% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.153793358950345e-05 | 6.058071977552699e-05 | 25.70% | 34.59% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.248096552844894e-05 | 5.9685025348125585e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.139138326813279e-05 | 6.119322011840429e-05 | 24.82% | 33.01% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.14961322142407e-05 | 6.135827801269117e-05 | 24.71% | 32.82% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.155820494943751e-05 | 6.018801583839876e-05 | 26.20% | 35.51% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.264213345195723e-05 | 6.0417248049566416e-05 | 26.89% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.023151070244493e-05 | 5.7594480021759474e-05 | 28.21% | 39.30% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.018753225122147e-05 | 5.765371340802396e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.131570729214625e-05 | 6.049279725871943e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.14121963052695e-05 | 6.018746420393172e-05 | 26.07% | 35.26% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.240409685413533e-05 | 6.081408245115794e-05 | 26.20% | 35.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.202717933675196e-05 | 6.065021454450571e-05 | 26.06% | 35.25% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.2030339885261e-05 | 6.0688604341073643e-05 | 26.02% | 35.17% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.191594718237171e-05 | 6.068378042598657e-05 | 25.92% | 34.99% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.218106248410972e-05 | 6.071176547484893e-05 | 26.12% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.846717309544713e-05 | 5.731748541262407e-05 | 26.95% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.171215331135617e-05 | 6.049818370995403e-05 | 25.96% | 35.07% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.008490774949858e-05 | 6.003003665949191e-05 | 25.04% | 33.41% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.170876382529361e-05 | 6.096559520721099e-05 | 25.39% | 34.02% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010476437791326655 | 7.746346799212244e-05 | 26.06% | 35.24% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.960454609000436e-05 | 5.7623088750788484e-05 | 27.61% | 38.15% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.107940673613911e-05 | 6.017446222218925e-05 | 25.78% | 34.74% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.179921890396522e-05 | 6.0127637423181724e-05 | 26.49% | 36.04% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.094503061559896e-05 | 6.033906979829822e-05 | 25.46% | 34.15% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.2657600133284e-05 | 6.065080339822555e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.194716225175662e-05 | 6.017795967458637e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.693064215296854e-05 | 7.569989005474179e-05 | 21.90% | 28.05% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.912194866352589e-05 | 5.7795536500223504e-05 | 26.95% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010049567496632814 | 7.225055857475158e-05 | 28.11% | 39.09% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.21531364470839e-05 | 6.0966463356750096e-05 | 25.79% | 34.75% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.182128273575786e-05 | 5.950911816715105e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.173102597293032e-05 | 6.0450363378619016e-05 | 26.04% | 35.20% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.064481667943535e-05 | 6.005529660558877e-05 | 25.53% | 34.28% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.146838256348088e-05 | 5.930252168165231e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.158039589364289e-05 | 6.068757436283316e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.892234626219822e-05 | 5.709236282816077e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.835202393129527e-05 | 5.734935938542202e-05 | 26.81% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.124228911371968e-05 | 6.0960659161912064e-05 | 24.96% | 33.27% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.9430356937195e-05 | 5.75138086086997e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.083538128638625e-05 | 5.862082945179073e-05 | 27.48% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.060951725703728e-05 | 5.933151936678779e-05 | 26.40% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.999629243724944e-05 | 5.763557713639643e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.02130539314506e-05 | 5.7282829826576e-05 | 28.59% | 40.03% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.022463458559608e-05 | 5.9020510442109744e-05 | 26.43% | 35.93% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.71061669046454e-05 | 5.565648922236641e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.090211399786762e-05 | 5.926002974818658e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.099782549973611e-05 | 5.8727517655832474e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.115939604376683e-05 | 5.710263988029543e-05 | 29.64% | 42.13% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010146242689006956 | 7.806360940270111e-05 | 23.06% | 29.97% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.020230350063798e-05 | 5.804965471422574e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.97868648430571e-05 | 5.6351813911057925e-05 | 29.37% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.975691366162501e-05 | 5.600672332160979e-05 | 29.78% | 42.41% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.945457643561741e-05 | 5.638943533155044e-05 | 29.03% | 40.90% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.999624765962864e-05 | 5.88580201326653e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.017778856891062e-05 | 5.9135237732123635e-05 | 26.24% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.863015309092291e-05 | 6.957885123547411e-05 | 29.45% | 41.75% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.043158298894438e-05 | 5.794496088357798e-05 | 27.96% | 38.81% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.52467992574056e-05 | 7.340333486803448e-05 | 22.93% | 29.76% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.073709406148429e-05 | 5.952576523301626e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.976009010096381e-05 | 5.6305954230380405e-05 | 29.41% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.920245338866143e-05 | 5.763644401517949e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.9939929537322e-05 | 5.7125410998791315e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.016544171041521e-05 | 5.551693119839742e-05 | 30.75% | 44.40% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.068510058369967e-05 | 6.0166740150958995e-05 | 25.43% | 34.10% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.804954601624467e-05 | 5.506197227846088e-05 | 29.45% | 41.75% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.816215323890064e-05 | 5.5627027377838706e-05 | 28.83% | 40.51% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.071645942788979e-05 | 5.934724027483824e-05 | 26.47% | 36.01% | 1.36x | ✅ |
| `hexbytes_new['']` | 7.059339453681849e-05 | 3.720572167745306e-05 | 47.30% | 89.74% | 1.90x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.185311650414212e-05 | 4.9458678953195796e-05 | 46.15% | 85.72% | 1.86x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.184894177237468e-05 | 5.104373326869315e-05 | 44.43% | 79.94% | 1.80x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.88221703346839e-05 | 4.645459160491125e-05 | 47.70% | 91.20% | 1.91x | ✅ |
| `hexbytes_new['0x']` | 7.839122044398893e-05 | 3.842018705163114e-05 | 50.99% | 104.04% | 2.04x | ✅ |
| `hexbytes_new['0x1234']` | 8.604767258883253e-05 | 4.458978211603869e-05 | 48.18% | 92.98% | 1.93x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.569109342851317e-05 | 4.365468820511476e-05 | 49.06% | 96.29% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.593088756520804e-05 | 4.45373277594925e-05 | 48.17% | 92.94% | 1.93x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.627125497488135e-05 | 4.442037623583596e-05 | 48.51% | 94.22% | 1.94x | ✅ |
| `hexbytes_new['abc']` | 8.213154539849242e-05 | 4.7106935923321183e-05 | 42.64% | 74.35% | 1.74x | ✅ |
| `hexbytes_new['deadbeef']` | 7.619061738594097e-05 | 4.1301610026598785e-05 | 45.79% | 84.47% | 1.84x | ✅ |
| `hexbytes_new[0-9]` | 4.295882153627664e-05 | 2.5316265129541266e-05 | 41.07% | 69.69% | 1.70x | ✅ |
| `hexbytes_new[0]` | 0.00012231687726766509 | 6.0478503253778025e-05 | 50.56% | 102.25% | 2.02x | ✅ |
| `hexbytes_new[123456]` | 0.0001266123322099141 | 6.583570512732421e-05 | 48.00% | 92.32% | 1.92x | ✅ |
| `hexbytes_new[2**16]` | 0.00012774508225165453 | 6.617318450917904e-05 | 48.20% | 93.05% | 1.93x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013121266143061903 | 7.351050389468393e-05 | 43.98% | 78.50% | 1.78x | ✅ |
| `hexbytes_new[2**32]` | 0.00013085130021646147 | 6.981460054531131e-05 | 46.65% | 87.43% | 1.87x | ✅ |
| `hexbytes_new[2**64]` | 0.0001324229245798965 | 7.127814146942154e-05 | 46.17% | 85.78% | 1.86x | ✅ |
| `hexbytes_new[2**8]` | 0.00012605911740696366 | 6.3048691085867e-05 | 49.98% | 99.94% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.295112867205666e-05 | 2.7806419556598662e-05 | 35.26% | 54.46% | 1.54x | ✅ |
| `hexbytes_new[False]` | 6.087290743084603e-05 | 2.6771864289568586e-05 | 56.02% | 127.38% | 2.27x | ✅ |
| `hexbytes_new[True]` | 6.088600700348238e-05 | 2.696853017901539e-05 | 55.71% | 125.77% | 2.26x | ✅ |
| `hexbytes_new[all byte values]` | 4.333466030390133e-05 | 2.7894081810705685e-05 | 35.63% | 55.35% | 1.55x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.287333638228319e-05 | 2.594063403652535e-05 | 39.49% | 65.27% | 1.65x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.273885980923265e-05 | 2.5827765223145366e-05 | 39.57% | 65.48% | 1.65x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.313410983817353e-05 | 2.546554532135807e-05 | 40.96% | 69.38% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 4.1701536417217834e-05 | 2.5443427864218587e-05 | 38.99% | 63.90% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2708400224018625e-05 | 2.531691282877622e-05 | 40.72% | 68.70% | 1.69x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.2081834338195306e-05 | 2.5464436144364045e-05 | 39.49% | 65.26% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.387343088107201e-05 | 2.6034466974391452e-05 | 40.66% | 68.52% | 1.69x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.733198446675121e-05 | 3.879941616922359e-05 | 32.33% | 47.77% | 1.48x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2723619263841565e-05 | 2.5355395989687225e-05 | 40.65% | 68.50% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.224746088317716e-05 | 2.528448930199794e-05 | 40.15% | 67.09% | 1.67x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.213323056509161e-05 | 2.4986245013606142e-05 | 40.70% | 68.63% | 1.69x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2536395501683135e-05 | 2.5072862766728953e-05 | 41.06% | 69.65% | 1.70x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.2394029725542104e-05 | 2.540955404834232e-05 | 40.06% | 66.84% | 1.67x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.261945097059883e-05 | 2.587775309265785e-05 | 39.28% | 64.70% | 1.65x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.133675556752819e-05 | 3.3138708548557765e-05 | 35.45% | 54.91% | 1.55x | ✅ |
| `hexbytes_new[b'abc']` | 4.2674347397571076e-05 | 2.5163975539327663e-05 | 41.03% | 69.59% | 1.70x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.865169676977511e-05 | 3.7259202139075596e-05 | 45.73% | 84.25% | 1.84x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.953209316813137e-05 | 3.816708106647471e-05 | 45.11% | 82.18% | 1.82x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.898457893830663e-05 | 3.8168352788462077e-05 | 44.67% | 80.74% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.908631410366376e-05 | 3.778673334190037e-05 | 45.31% | 82.83% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.845419039658357e-05 | 3.777392923671646e-05 | 44.82% | 81.22% | 1.81x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.972701953861159e-05 | 3.732977678561211e-05 | 46.46% | 86.79% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.678502978133552e-05 | 3.561588238570766e-05 | 46.67% | 87.51% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.932840331862772e-05 | 3.722964287143302e-05 | 46.30% | 86.22% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.955368340544366e-05 | 4.051862445406872e-05 | 41.74% | 71.66% | 1.72x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.929357571310845e-05 | 3.8765838753758206e-05 | 44.06% | 78.75% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.350162891314769e-05 | 5.560644346862349e-05 | 40.53% | 68.15% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.935026736671355e-05 | 3.845283974606172e-05 | 44.55% | 80.35% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.868295439875171e-05 | 3.880361048641301e-05 | 43.50% | 77.00% | 1.77x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.8469512349617e-05 | 3.72148175217809e-05 | 45.65% | 83.98% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.842226934820798e-05 | 3.7711169514167804e-05 | 44.88% | 81.44% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.90195149679681e-05 | 3.838316011293737e-05 | 44.39% | 79.82% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.919485734372232e-05 | 3.7846437835231215e-05 | 45.30% | 82.83% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.567915298868023e-05 | 5.015077982644348e-05 | 41.47% | 70.84% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.9138375339417e-05 | 3.831013846730171e-05 | 44.59% | 80.47% | 1.80x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.756419426149756e-05 | 4.940683158110184e-05 | 43.58% | 77.23% | 1.77x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.93203185786192e-05 | 3.906978385134366e-05 | 43.64% | 77.43% | 1.77x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.887247167193475e-05 | 3.7106534309345784e-05 | 46.12% | 85.61% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.746962549895354e-05 | 3.7175894460748066e-05 | 44.90% | 81.49% | 1.81x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.869543028529821e-05 | 3.81874595499812e-05 | 44.41% | 79.89% | 1.80x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.868747138894986e-05 | 3.733346010256775e-05 | 45.65% | 83.98% | 1.84x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.911508148086022e-05 | 3.761974277890361e-05 | 45.57% | 83.72% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.969344641567276e-05 | 3.821283515052185e-05 | 45.17% | 82.38% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.8821272252622e-05 | 3.81009238681271e-05 | 44.64% | 80.63% | 1.81x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.947249127955981e-05 | 3.830322091851254e-05 | 44.87% | 81.38% | 1.81x | ✅ |
| `hexbytes_new[long alternating]` | 5.160353372444581e-05 | 3.319370597996107e-05 | 35.68% | 55.46% | 1.55x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.402488421221348e-05 | 4.305165841161287e-05 | 48.76% | 95.17% | 1.95x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.483368913519236e-05 | 4.420043890266264e-05 | 47.90% | 91.93% | 1.92x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.277553206819768e-05 | 4.437347169215945e-05 | 46.39% | 86.54% | 1.87x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.432842735782323e-05 | 4.3162543582832885e-05 | 48.82% | 95.37% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.4226051455622e-05 | 4.2706406710533925e-05 | 49.30% | 97.22% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.28974079227692e-05 | 4.2487380181126084e-05 | 48.75% | 95.11% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.23962123283304e-05 | 4.025397220300485e-05 | 51.15% | 104.69% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.302596758787724e-05 | 4.27510432520547e-05 | 48.51% | 94.21% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.356703476862896e-05 | 4.305663606365146e-05 | 48.48% | 94.09% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.392830503024734e-05 | 4.306008859209643e-05 | 48.69% | 94.91% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001083133241625787 | 6.181063451514009e-05 | 42.93% | 75.23% | 1.75x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.274879907228332e-05 | 4.235713144033117e-05 | 48.81% | 95.36% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.341332207145342e-05 | 4.2522852834659024e-05 | 49.02% | 96.16% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.277404148909936e-05 | 4.275480455433159e-05 | 48.35% | 93.60% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.32985845173698e-05 | 4.2725686219471154e-05 | 48.71% | 94.96% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.34094967409787e-05 | 4.253482172593846e-05 | 49.00% | 96.10% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.333514805646204e-05 | 4.2686659313615054e-05 | 48.78% | 95.23% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.924937529033548e-05 | 5.5952107027414155e-05 | 43.62% | 77.38% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.35927274669656e-05 | 4.261450935855843e-05 | 49.02% | 96.16% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.00010227541168152174 | 5.6218582273413e-05 | 45.03% | 81.92% | 1.82x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.042701159791098e-05 | 4.298920272923132e-05 | 46.55% | 87.09% | 1.87x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.40677904662531e-05 | 4.314210112540732e-05 | 48.68% | 94.86% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.324889707805461e-05 | 4.310495465835889e-05 | 48.22% | 93.13% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.343425922642345e-05 | 4.273448915555574e-05 | 48.78% | 95.24% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.561975046176595e-05 | 4.265896393780081e-05 | 50.18% | 100.71% | 2.01x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.310467831977971e-05 | 4.3063931759602075e-05 | 48.18% | 92.98% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.320841623582506e-05 | 4.2339979937306514e-05 | 49.12% | 96.52% | 1.97x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.366610652141289e-05 | 4.24293937974122e-05 | 49.29% | 97.19% | 1.97x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.162854716979587e-05 | 4.3148312062757567e-05 | 47.14% | 89.18% | 1.89x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3233341128517325e-05 | 2.5983755841529144e-05 | 39.90% | 66.39% | 1.66x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.453038188270421e-05 | 2.5264566840342406e-05 | 43.26% | 76.26% | 1.76x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.229629357318056e-05 | 2.5336603703738986e-05 | 40.10% | 66.94% | 1.67x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.272307948255706e-05 | 2.5146011528992055e-05 | 41.14% | 69.90% | 1.70x | ✅ |
| `hexbytes_new[palindrome]` | 4.201348902376135e-05 | 2.5233103985190362e-05 | 39.94% | 66.50% | 1.67x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2849040366098236e-05 | 2.5941053878904493e-05 | 39.46% | 65.18% | 1.65x | ✅ |
| `hexbytes_new[single 0xff]` | 4.286213200795317e-05 | 2.492020956546657e-05 | 41.86% | 72.00% | 1.72x | ✅ |
| `hexbytes_new[single null byte]` | 4.192499090325599e-05 | 2.499780743653151e-05 | 40.37% | 67.71% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 4.263737600661353e-05 | 2.5978849285802113e-05 | 39.07% | 64.12% | 1.64x | ✅ |
| `hexbytes_repr[0-9]` | 2.8906603901256988e-05 | 4.826409864705047e-05 | -66.97% | -40.11% | 0.60x | ❌ |
| `hexbytes_repr[4-byte pattern]` | 0.00011963341642583751 | 0.0001400665401070896 | -17.08% | -14.59% | 0.85x | ❌ |
| `hexbytes_repr[all byte values]` | 0.00011982235283705905 | 0.00013990902582604605 | -16.76% | -14.36% | 0.86x | ❌ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.856278231022973e-05 | 6.823805107868716e-05 | -40.52% | -28.83% | 0.71x | ❌ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.857590398733753e-05 | 6.995288404312158e-05 | -44.01% | -30.56% | 0.69x | ❌ |
| `hexbytes_repr[ascii sentence]` | 4.031931849084338e-05 | 5.950601363909072e-05 | -47.59% | -32.24% | 0.68x | ❌ |
| `hexbytes_repr[b'']` | 2.1317235451217533e-05 | 3.9220457560879214e-05 | -83.98% | -45.65% | 0.54x | ❌ |
| `hexbytes_repr[b'\\x00'*32]` | 3.6531415565533604e-05 | 5.550275792589815e-05 | -51.93% | -34.18% | 0.66x | ❌ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.637317037783945e-05 | 4.5718566832638076e-05 | -73.35% | -42.31% | 0.58x | ❌ |
| `hexbytes_repr[b'\\x01'*100]` | 6.088965111409175e-05 | 8.061184262466249e-05 | -32.39% | -24.47% | 0.76x | ❌ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007614258905273656 | 0.0007861038751990369 | -3.24% | -3.14% | 0.97x | ❌ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6209223833763088e-05 | 4.54939655277082e-05 | -73.58% | -42.39% | 0.58x | ❌ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7028655231277712e-05 | 4.619027613384838e-05 | -70.89% | -41.48% | 0.59x | ❌ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8230645154587657e-05 | 4.904206182181031e-05 | -73.72% | -42.44% | 0.58x | ❌ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8426131680960446e-05 | 4.777460813929573e-05 | -68.07% | -40.50% | 0.60x | ❌ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6337729088802863e-05 | 4.547637607019854e-05 | -72.67% | -42.08% | 0.58x | ❌ |
| `hexbytes_repr[b'\\xff'*64]` | 4.864470126407969e-05 | 6.820290034013081e-05 | -40.21% | -28.68% | 0.71x | ❌ |
| `hexbytes_repr[b'a'*1024]` | 0.0003943152236865464 | 0.0004167634849109744 | -5.69% | -5.39% | 0.95x | ❌ |
| `hexbytes_repr[b'abc']` | 2.6066297462518963e-05 | 4.519746535806044e-05 | -73.39% | -42.33% | 0.58x | ❌ |
| `hexbytes_repr[long alternating]` | 0.00039789659825941614 | 0.00041966943296914243 | -5.47% | -5.19% | 0.95x | ❌ |
| `hexbytes_repr[mixed pattern]` | 9.750328166691435e-05 | 0.00011687490478363051 | -19.87% | -16.57% | 0.83x | ❌ |
| `hexbytes_repr[multiples of 0x10]` | 2.8799433607726066e-05 | 4.825756547722914e-05 | -67.56% | -40.32% | 0.60x | ❌ |
| `hexbytes_repr[palindrome ascii]` | 2.7796805953080366e-05 | 4.6697563483038906e-05 | -68.00% | -40.47% | 0.60x | ❌ |
| `hexbytes_repr[palindrome numeric]` | 2.7060029458088667e-05 | 4.60052916156726e-05 | -70.01% | -41.18% | 0.59x | ❌ |
| `hexbytes_repr[palindrome]` | 3.1699440174901834e-05 | 5.113128257544771e-05 | -61.30% | -38.00% | 0.62x | ❌ |
| `hexbytes_repr[repeated 0-9]` | 6.1059735802075e-05 | 8.09308274489489e-05 | -32.54% | -24.55% | 0.75x | ❌ |
| `hexbytes_repr[single 0xff]` | 2.5412433661322482e-05 | 4.4486854740555556e-05 | -75.06% | -42.88% | 0.57x | ❌ |
| `hexbytes_repr[single null byte]` | 2.571699182079626e-05 | 4.427370703012172e-05 | -72.16% | -41.91% | 0.58x | ❌ |
| `hexbytes_repr[two patterns]` | 4.8579280895801936e-05 | 6.850903517262255e-05 | -41.03% | -29.09% | 0.71x | ❌ |
| `hexbytes_to_0x_hex[0-9]` | 1.551396585047557e-05 | 1.3630300793019073e-05 | 12.14% | 13.82% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.195234456795008e-05 | 4.012706081221306e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.211303275401072e-05 | 4.028452591251296e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0800595554670752e-05 | 1.9010172893267305e-05 | 8.61% | 9.42% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0904581121842868e-05 | 1.9147459039671937e-05 | 8.41% | 9.18% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.885077859672098e-05 | 1.7071625813539214e-05 | 9.44% | 10.42% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.026480036137029e-05 | 1.1345847549565756e-05 | -10.53% | -9.53% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7477926479293212e-05 | 1.583933858505862e-05 | 9.38% | 10.35% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5048574884238393e-05 | 1.3065242835046563e-05 | 13.18% | 15.18% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5080113367605668e-05 | 2.2536233916689552e-05 | 10.14% | 11.29% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022120556912250792 | 0.0002211920219665213 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.484649658669481e-05 | 1.3091211127426347e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5047836277518734e-05 | 1.3107099760095945e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5407694127854997e-05 | 1.354045064787356e-05 | 12.12% | 13.79% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5428943320727377e-05 | 1.3440175575873593e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5012446645307307e-05 | 1.313473795929436e-05 | 12.51% | 14.30% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0806946366311905e-05 | 1.92471000032091e-05 | 7.50% | 8.10% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001223788737133279 | 0.00011830648768577156 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5010069965050508e-05 | 1.3101622063792088e-05 | 12.71% | 14.57% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012198009534447016 | 0.00012121568938859308 | 0.63% | 0.63% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4878635442167046e-05 | 3.308848224624071e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5537679378131247e-05 | 1.3550212089721784e-05 | 12.79% | 14.67% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.526067072378255e-05 | 1.3441697074053967e-05 | 11.92% | 13.53% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.4922041049843883e-05 | 1.3376076252462054e-05 | 10.36% | 11.56% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6556797581452576e-05 | 1.4670629146908296e-05 | 11.39% | 12.86% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5101944937213006e-05 | 2.2453825049654264e-05 | 10.55% | 11.79% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4652719088638188e-05 | 1.2820154930984992e-05 | 12.51% | 14.29% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4640124525707886e-05 | 1.2928737904935405e-05 | 11.69% | 13.24% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.076404064230241e-05 | 1.8906706862571387e-05 | 8.94% | 9.82% | 1.10x | ✅ |
