#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/mypy-1.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/mypy-1.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4588604917785787e-05 | 2.352856920887766e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4594578498360593e-05 | 2.352236565755526e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.46556843856027e-05 | 2.354301689697072e-05 | 4.51% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6447973400500008e-05 | 2.3510620439495045e-05 | 11.11% | 12.49% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.478591634920958e-05 | 2.3507062635530924e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.473231360266727e-05 | 2.3382944556051363e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.463722111774434e-05 | 2.339665394888131e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4835134057116663e-05 | 2.3481231084730426e-05 | 5.45% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.46050135925807e-05 | 2.3530948340530325e-05 | 4.37% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.480090233268045e-05 | 2.3517125483402866e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4600030390192216e-05 | 2.3512346236082422e-05 | 4.42% | 4.63% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.51632569656497e-05 | 2.3532377857127638e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4658966319523948e-05 | 2.350892857868651e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.5124294501407434e-05 | 2.3604624929619615e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4716747224000924e-05 | 2.346012652404398e-05 | 5.08% | 5.36% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.5297226713474344e-05 | 2.3230362396170608e-05 | 8.17% | 8.90% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.5015163104767472e-05 | 2.3290628591110718e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4964702839320625e-05 | 2.3368541768084066e-05 | 6.39% | 6.83% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4892964902969026e-05 | 2.3582181445988536e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4834005427114968e-05 | 2.3440017922906343e-05 | 5.61% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4811491351529742e-05 | 2.3505707731743405e-05 | 5.26% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4890474387516195e-05 | 2.3656907748998946e-05 | 4.96% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4891514182189003e-05 | 2.363996472852198e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4835611905950326e-05 | 2.3557432083221814e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.511327333457072e-05 | 2.3372768894907795e-05 | 6.93% | 7.45% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6156236353808166e-05 | 2.516778333095068e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3502636129930452e-05 | 2.2269718603366777e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3579207847468968e-05 | 2.2186852572397145e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3559921900919647e-05 | 2.2265062121702708e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3442095895265212e-05 | 2.2437704097685035e-05 | 4.28% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3487342393656475e-05 | 2.2466461953522084e-05 | 4.35% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3554300627483433e-05 | 2.2209771648926743e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3735039135169496e-05 | 2.2406630404976412e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3536245252080532e-05 | 2.2543004149200437e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3608902491534055e-05 | 2.2053856979099026e-05 | 6.59% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3669261313667038e-05 | 2.2347636845308525e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3607331389482993e-05 | 2.2396506536803452e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3521074209132363e-05 | 2.222367676840694e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3780425656601626e-05 | 2.2243426764291258e-05 | 6.46% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.360475486233801e-05 | 2.2194557851319112e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3664695395516414e-05 | 2.2409907662202345e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3768272895324458e-05 | 2.2192138654604972e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3643959656139186e-05 | 2.2329081626025803e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3772037041018668e-05 | 2.2382876675681827e-05 | 5.84% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3574487479680163e-05 | 2.2234553448815698e-05 | 5.68% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.349679567357818e-05 | 2.2372913431879023e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3453420459091725e-05 | 2.2199846419826415e-05 | 5.34% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.334990223105687e-05 | 2.207627355877668e-05 | 5.45% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3463650406490346e-05 | 2.208130492498806e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3579158964518034e-05 | 2.2444224488769368e-05 | 4.81% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.353506975461681e-05 | 2.227407662292763e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3613863997713647e-05 | 2.1933885081608683e-05 | 7.11% | 7.66% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3568081522527277e-05 | 2.219199976344312e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.351455507128165e-05 | 2.232725257876548e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3620529933448205e-05 | 2.2193591381822746e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3585973379770133e-05 | 2.2166188703053052e-05 | 6.02% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3649370650127805e-05 | 2.203102122254838e-05 | 6.84% | 7.35% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3279793347539317e-05 | 2.2233246213899182e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.354035195509188e-05 | 2.1788267933599727e-05 | 7.44% | 8.04% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3696816850306787e-05 | 2.2136462668498907e-05 | 6.58% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3195721182512164e-05 | 2.233469873666972e-05 | 3.71% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.332257360264959e-05 | 2.1951782087433434e-05 | 5.88% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3529267714530284e-05 | 2.2176473998045172e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3624237604337016e-05 | 2.2310635320330343e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3564802304548654e-05 | 2.2175639458624175e-05 | 5.90% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.353374442246355e-05 | 2.2100262348871904e-05 | 6.09% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3514835365174653e-05 | 2.217545099268762e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3489467096112594e-05 | 2.221508785947401e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.363512865073782e-05 | 2.1988845481084277e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3560137358704307e-05 | 2.2237100366542616e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3465046696096212e-05 | 2.229350099340449e-05 | 4.99% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3473258873127152e-05 | 2.2154004709349086e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3640755023080726e-05 | 2.2187372725189234e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3488048388908548e-05 | 2.2196697459672548e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.359351848622026e-05 | 2.2310973125421354e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.349807323423025e-05 | 2.2112752122114993e-05 | 5.90% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3574110915501774e-05 | 2.2100648572503617e-05 | 6.25% | 6.67% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3609777917879894e-05 | 2.209905710107131e-05 | 6.40% | 6.84% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3955782447945567e-05 | 2.2217497103937093e-05 | 7.26% | 7.82% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.345075839922868e-05 | 2.2196758547065305e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3743926704540687e-05 | 2.2231674199227473e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.387187051068762e-05 | 2.2153427586851894e-05 | 7.20% | 7.76% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3898937801354714e-05 | 2.2100678462176246e-05 | 7.52% | 8.14% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3764421929983094e-05 | 2.2174106540038407e-05 | 6.69% | 7.17% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3550882556546246e-05 | 2.218851775739952e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.378916527966168e-05 | 2.2203358278353915e-05 | 6.67% | 7.14% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.4188113168151746e-05 | 2.2228911628404396e-05 | 8.10% | 8.81% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3789295614681604e-05 | 2.221853507298358e-05 | 6.60% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3833147692663316e-05 | 2.2065787702878005e-05 | 7.42% | 8.01% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3794296040990045e-05 | 2.2326961805585092e-05 | 6.17% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.376303976378379e-05 | 2.2152593219910457e-05 | 6.78% | 7.27% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.34013502034649e-05 | 2.2136406760283224e-05 | 5.41% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3677048165968803e-05 | 2.2026829262425196e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3593477501513498e-05 | 2.1996027887742673e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3708449201118987e-05 | 2.2228230408901713e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3677929612193786e-05 | 2.214396955683812e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.384948014926907e-05 | 2.5509660676289548e-05 | -6.96% | -6.51% | 0.93x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3706859835380884e-05 | 2.2143552892372196e-05 | 6.59% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3802796600154262e-05 | 2.217145327357609e-05 | 6.85% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3899638463361006e-05 | 2.242622566201492e-05 | 6.17% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3534393648783992e-05 | 2.2184885589637243e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.38077227358046e-05 | 2.2167973164364092e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3936197691745924e-05 | 2.2262439901486953e-05 | 6.99% | 7.52% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3640386979068036e-05 | 2.1960328514773784e-05 | 7.11% | 7.65% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.373929296037428e-05 | 2.226826749879396e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3587870385217756e-05 | 2.240378919344362e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3831389266190512e-05 | 2.2422363277182868e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3696252042179667e-05 | 2.2485669329717626e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3779121566161618e-05 | 2.2372226296941654e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3761105869010588e-05 | 2.2320087122722573e-05 | 6.06% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.368104423208533e-05 | 2.2352404176787676e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3885802010538726e-05 | 2.231263977778134e-05 | 6.59% | 7.05% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3766827655751835e-05 | 2.2505001410467597e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3707940617828817e-05 | 2.2293943673784817e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3774302928122938e-05 | 2.2305950636971103e-05 | 6.18% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3755098574564403e-05 | 2.2275477569991138e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3771230311305898e-05 | 2.2233712039954585e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.374279404335451e-05 | 2.220811659369578e-05 | 6.46% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3726221436569967e-05 | 2.227220470745322e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3604093859436265e-05 | 2.235556029287465e-05 | 5.29% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3772856022701103e-05 | 2.2270838702180004e-05 | 6.32% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.391645993708454e-05 | 2.228169222464609e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3799308285440067e-05 | 2.234615644323577e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.418736631007192e-05 | 2.230333678164439e-05 | 7.79% | 8.45% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.371580512847491e-05 | 2.290663545158759e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3282254727946942e-05 | 2.2327782488734213e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.355084762735644e-05 | 2.240739394296192e-05 | 4.86% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.360053815098617e-05 | 2.2372525585727543e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3764840934384117e-05 | 2.2292827802735582e-05 | 6.19% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3598585603583884e-05 | 2.2240306570848457e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3927157215287006e-05 | 2.224409600092992e-05 | 7.03% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3989015455959307e-05 | 2.2124686127105558e-05 | 7.77% | 8.43% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3819633817088688e-05 | 2.2205987116450098e-05 | 6.77% | 7.27% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3678282162456803e-05 | 2.2278822502735526e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3683891970819664e-05 | 2.212794010426883e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3306207765843416e-05 | 2.2269644620969582e-05 | 4.45% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3655893934009244e-05 | 2.2797747570139305e-05 | 3.63% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3565276841693882e-05 | 2.2336005283471432e-05 | 5.22% | 5.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3217823583268652e-05 | 2.2303961352349655e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3702238719172506e-05 | 2.2143079116256645e-05 | 6.58% | 7.04% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3675126563683127e-05 | 2.208711640127518e-05 | 6.71% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3788450268769698e-05 | 2.2078060749737107e-05 | 7.19% | 7.75% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.373459182901027e-05 | 2.2550098594429092e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.35959163475695e-05 | 2.2716302672673465e-05 | 3.73% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.381221557774954e-05 | 2.2466533756950305e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3830087580102246e-05 | 2.243950561326994e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3350745038001486e-05 | 2.2272704753930754e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3873311810221845e-05 | 2.2299021405155603e-05 | 6.59% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.385902490075619e-05 | 2.233877187909472e-05 | 6.37% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3370376360741595e-05 | 2.232046959985971e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3684878563838626e-05 | 2.2232571912947633e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3808448254620186e-05 | 2.2392470420375158e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3680793471281444e-05 | 2.2243312355513542e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.386479361339563e-05 | 2.20936800642131e-05 | 7.42% | 8.02% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3745466281626795e-05 | 2.2122693746359526e-05 | 6.83% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3432188932062634e-05 | 2.2289134733944307e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3834260716399664e-05 | 2.2274988236125843e-05 | 6.54% | 7.00% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3927952253138474e-05 | 2.2149738380606723e-05 | 7.43% | 8.03% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.350740828014345e-05 | 2.2415099621354146e-05 | 4.65% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3759263726199408e-05 | 2.2103969339292893e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3770688833611534e-05 | 2.206482362439234e-05 | 7.18% | 7.73% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3877594799409533e-05 | 2.2308732778361557e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3846000901583633e-05 | 2.2082487960105217e-05 | 7.40% | 7.99% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.382173740250998e-05 | 2.245072860624904e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3790267919478165e-05 | 2.2353694557536662e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.329691856927054e-05 | 2.2010591588500004e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3894892191334404e-05 | 2.2212363981000816e-05 | 7.04% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3446724067478943e-05 | 2.232016981606027e-05 | 4.80% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.360649270492292e-05 | 2.2027049170920585e-05 | 6.69% | 7.17% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.422002674318919e-05 | 2.238936435788871e-05 | 7.56% | 8.18% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3788460804413737e-05 | 2.212807167821689e-05 | 6.98% | 7.50% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.396524700547579e-05 | 2.185090527475872e-05 | 8.82% | 9.68% | 1.10x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.217957564584406e-05 | 6.13148569991836e-05 | 25.39% | 34.03% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.21469115671275e-05 | 5.931560167031158e-05 | 27.79% | 38.49% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.18221173721876e-05 | 5.9664327048956076e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.273190247780461e-05 | 5.954003067613661e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.28357344572058e-05 | 5.922793865677185e-05 | 28.50% | 39.86% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.226957399220398e-05 | 5.915648186120265e-05 | 28.09% | 39.07% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.913758132981808e-05 | 5.65013645729086e-05 | 28.60% | 40.06% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.232004242517958e-05 | 5.8892275400700866e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.277882487358908e-05 | 5.9021299093591714e-05 | 28.70% | 40.25% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.519610347416582e-05 | 6.006216255572116e-05 | 29.50% | 41.85% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.329159895056873e-05 | 5.923613410363979e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.23422288059536e-05 | 6.000392258486207e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.120617434724147e-05 | 5.951765178232705e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.281375631195064e-05 | 5.9810588914004495e-05 | 27.78% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.529898641567348e-05 | 5.965847210646095e-05 | 30.06% | 42.98% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.239515385769548e-05 | 5.859392936467353e-05 | 28.89% | 40.62% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.208212524085879e-05 | 5.9654885275543764e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.243365942504806e-05 | 5.90022919782165e-05 | 28.42% | 39.71% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.169554426107751e-05 | 6.007471317740305e-05 | 26.47% | 35.99% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.256309604183852e-05 | 6.00189731724013e-05 | 27.31% | 37.56% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.229607923246815e-05 | 5.995925974954796e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.279829899973166e-05 | 5.916734582262105e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.213789324588727e-05 | 5.974266433845356e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.237765544224982e-05 | 5.898837264701066e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.254848082242071e-05 | 5.9627060365657734e-05 | 27.77% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.213437869975769e-05 | 5.8844451962769444e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.103514698050002e-05 | 5.7465938550668146e-05 | 29.09% | 41.01% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.989233768578434e-05 | 5.734497996683258e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.093185286171825e-05 | 5.917548190305328e-05 | 26.88% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.206541329262897e-05 | 6.052274718326321e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.413269755033185e-05 | 6.0362983592013985e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.296693725682607e-05 | 6.0443052701406136e-05 | 27.15% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.271778873399331e-05 | 6.05729126981063e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.23732462626558e-05 | 6.077444607474457e-05 | 26.22% | 35.54% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.2952555247374e-05 | 6.0604036707896466e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.098431176994684e-05 | 5.7999886033945254e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.300211740982357e-05 | 6.05698591413376e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.279069677730058e-05 | 6.0789640493663095e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.24088964234202e-05 | 6.085149020581556e-05 | 26.16% | 35.43% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.272668686781747e-05 | 6.0512689255042695e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.387616220706261e-05 | 6.116744820271854e-05 | 27.07% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.247716422602413e-05 | 6.079481503785046e-05 | 26.29% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.266975737475023e-05 | 6.075344186737652e-05 | 26.51% | 36.07% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.254543422429316e-05 | 6.105263814012131e-05 | 26.04% | 35.20% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.293422054716436e-05 | 5.9932615734763294e-05 | 27.73% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.274454289179839e-05 | 6.073199918088062e-05 | 26.60% | 36.25% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.296775481138728e-05 | 6.0504857479578575e-05 | 27.07% | 37.13% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.290923186912903e-05 | 6.067931430199039e-05 | 26.81% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.310230497329758e-05 | 6.0473640848560255e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.330573010272841e-05 | 6.07442870296048e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.22765544722718e-05 | 6.0545644500647035e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.328386582478319e-05 | 6.087761126144824e-05 | 26.90% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.263637131941799e-05 | 6.108146133165526e-05 | 26.08% | 35.29% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.294501106213543e-05 | 6.085736201208931e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.299548956776416e-05 | 6.084401815180519e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.210548406215006e-05 | 5.81672170096625e-05 | 29.16% | 41.15% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.22814900477135e-05 | 5.8310487622557e-05 | 29.13% | 41.11% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.324006446392418e-05 | 6.084929187154547e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.269954643341516e-05 | 6.088865663451428e-05 | 26.37% | 35.82% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.263496495646697e-05 | 6.042527710397684e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.250903321917759e-05 | 6.111579144641763e-05 | 25.93% | 35.00% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.279489339346443e-05 | 6.03682968391789e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.310813371592354e-05 | 6.10087518011428e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.310132263905878e-05 | 6.061936886571655e-05 | 27.05% | 37.09% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.136013604350863e-05 | 5.7596539479045626e-05 | 29.21% | 41.26% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.243986445906968e-05 | 6.021388364479586e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.359348244800193e-05 | 6.058859789941688e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.313922031451411e-05 | 5.9412120549230666e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.316135881010526e-05 | 5.999210931307456e-05 | 27.86% | 38.62% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.30672499778271e-05 | 6.044969432869993e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.289765104315338e-05 | 6.060681947381641e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.313141030491155e-05 | 6.103859045715509e-05 | 26.58% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.285854550789584e-05 | 6.234084805537567e-05 | 24.76% | 32.91% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.310408913033848e-05 | 6.127255589297953e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.303050202144436e-05 | 6.028966505986561e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.303549369883642e-05 | 6.118144260008391e-05 | 26.32% | 35.72% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.305741042364696e-05 | 6.0211301068411646e-05 | 27.51% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.206167986468565e-05 | 6.099193711671968e-05 | 25.68% | 34.55% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.24981463626751e-05 | 6.057745370901766e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.282545177685965e-05 | 6.069651421962121e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.265742648023018e-05 | 6.042430877701627e-05 | 26.90% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.284697670307059e-05 | 6.0178602062105756e-05 | 27.36% | 37.67% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.328100263462042e-05 | 5.9788012112368275e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.190088848283774e-05 | 6.019474277234903e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.119633355915633e-05 | 5.762295574487914e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.977886162523504e-05 | 5.8103866630881914e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.22245114286932e-05 | 6.144707656301526e-05 | 25.27% | 33.81% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.192292785476007e-05 | 5.7706264692073225e-05 | 29.56% | 41.97% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.338566234646428e-05 | 6.032008052086109e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.337493998836466e-05 | 5.9340936555313965e-05 | 28.83% | 40.50% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.251769604750212e-05 | 5.870902724216814e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.203003287461172e-05 | 5.887733954341664e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.15093868383043e-05 | 5.810693637083099e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.888299037824745e-05 | 5.68399269553868e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.05944236129039e-05 | 5.997720358281496e-05 | 25.58% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.221424563711051e-05 | 5.896764175109883e-05 | 28.28% | 39.42% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.243742344641844e-05 | 5.9446182898898236e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010574616567193072 | 8.02139637983248e-05 | 24.14% | 31.83% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.991952766045701e-05 | 5.679066834664901e-05 | 28.94% | 40.73% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.215536563905217e-05 | 5.906728210811404e-05 | 28.10% | 39.09% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.177419951383302e-05 | 5.9702117250471165e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.1525531994315e-05 | 5.997382669614973e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.233224317604188e-05 | 5.93350372740734e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.180625012587988e-05 | 5.937160672325477e-05 | 27.42% | 37.79% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.86942703272148e-05 | 7.375262049094895e-05 | 25.27% | 33.82% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.987796379861237e-05 | 5.714156952292289e-05 | 28.46% | 39.79% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.836011413230541e-05 | 7.492710237165688e-05 | 23.82% | 31.27% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.312634826301133e-05 | 5.8580332197588995e-05 | 29.53% | 41.90% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.300122256143266e-05 | 5.863305344569989e-05 | 29.36% | 41.56% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.181533471893778e-05 | 5.8635967482976556e-05 | 28.33% | 39.53% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.196096905314069e-05 | 5.882570340976781e-05 | 28.23% | 39.33% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.205347478184926e-05 | 5.875397157212302e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.286931243618796e-05 | 5.967084036656123e-05 | 27.99% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.941091768876344e-05 | 5.5799104817928865e-05 | 29.73% | 42.32% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.933645423970703e-05 | 5.60174479244763e-05 | 29.39% | 41.63% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.107705369777267e-05 | 5.7808004405634684e-05 | 28.70% | 40.25% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.098617989460163e-05 | 5.755647259525515e-05 | 28.93% | 40.71% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.143682256568657e-05 | 5.937902166672692e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.169410097074459e-05 | 6.006939959778484e-05 | 26.47% | 36.00% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.107041855512901e-05 | 5.725827321780343e-05 | 29.37% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.12779005265216e-05 | 5.778535096951226e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.145916938299921e-05 | 5.800834665651901e-05 | 28.79% | 40.43% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.801024866446897e-05 | 5.5888650514243307e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.082792239979395e-05 | 5.686366180660589e-05 | 29.65% | 42.14% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.162674272110694e-05 | 5.779481009452382e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.192408495618968e-05 | 5.747673311928619e-05 | 29.84% | 42.53% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010417381142850998 | 7.713192333263968e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.091623852961866e-05 | 5.908090433155305e-05 | 26.99% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.170125090586405e-05 | 5.813042225616426e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.149065724250973e-05 | 5.7710906557738066e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.199029420202504e-05 | 5.65483585496171e-05 | 31.03% | 44.99% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.105910044294076e-05 | 5.8596978119203294e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.132654032465278e-05 | 5.722849881007995e-05 | 29.63% | 42.11% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.589083538092163e-05 | 7.240724031434369e-05 | 24.49% | 32.43% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.20108332659427e-05 | 5.723729804608896e-05 | 30.21% | 43.28% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.847491369765956e-05 | 7.155005687976878e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.167609621001101e-05 | 5.864080103646679e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.116762784769802e-05 | 5.759036449054922e-05 | 29.05% | 40.94% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.13958608888458e-05 | 5.7636882621737655e-05 | 29.19% | 41.22% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.137668692205595e-05 | 5.794105008807791e-05 | 28.80% | 40.45% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.185253898958689e-05 | 5.7920304008377406e-05 | 29.24% | 41.32% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.12411537881332e-05 | 5.840172881821155e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.952426564969281e-05 | 5.598453257791942e-05 | 29.60% | 42.05% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.96303809899846e-05 | 5.471943322425727e-05 | 31.28% | 45.52% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.142890804399512e-05 | 5.827872095056334e-05 | 28.43% | 39.72% | 1.40x | ✅ |
| `hexbytes_new['']` | 7.026581768903388e-05 | 3.827446626367918e-05 | 45.53% | 83.58% | 1.84x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.006010082148562e-05 | 5.169484140089346e-05 | 42.60% | 74.21% | 1.74x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.003897135270199e-05 | 5.151455733370989e-05 | 42.79% | 74.78% | 1.75x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.61703666673656e-05 | 4.8672218243180036e-05 | 43.52% | 77.04% | 1.77x | ✅ |
| `hexbytes_new['0x']` | 7.589224860990436e-05 | 3.8797049138118326e-05 | 48.88% | 95.61% | 1.96x | ✅ |
| `hexbytes_new['0x1234']` | 8.440169631994511e-05 | 4.608308809950841e-05 | 45.40% | 83.15% | 1.83x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.351374450736785e-05 | 4.5340753285272446e-05 | 45.71% | 84.19% | 1.84x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.431349458083218e-05 | 4.560037034101276e-05 | 45.92% | 84.90% | 1.85x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.431049653628465e-05 | 4.5347269454231935e-05 | 46.21% | 85.92% | 1.86x | ✅ |
| `hexbytes_new['abc']` | 8.059831119047755e-05 | 4.866788283775195e-05 | 39.62% | 65.61% | 1.66x | ✅ |
| `hexbytes_new['deadbeef']` | 7.56827264127264e-05 | 4.308083027417825e-05 | 43.08% | 75.68% | 1.76x | ✅ |
| `hexbytes_new[0-9]` | 4.277117204700625e-05 | 2.578906403470704e-05 | 39.70% | 65.85% | 1.66x | ✅ |
| `hexbytes_new[0]` | 0.0001211371984102714 | 6.045175889425015e-05 | 50.10% | 100.39% | 2.00x | ✅ |
| `hexbytes_new[123456]` | 0.00012446075613343244 | 6.54002415597763e-05 | 47.45% | 90.31% | 1.90x | ✅ |
| `hexbytes_new[2**16]` | 0.0001264489288632016 | 6.522183721323325e-05 | 48.42% | 93.88% | 1.94x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012971570903350603 | 7.389938393026195e-05 | 43.03% | 75.53% | 1.76x | ✅ |
| `hexbytes_new[2**32]` | 0.00012764687652203839 | 6.872014375627563e-05 | 46.16% | 85.75% | 1.86x | ✅ |
| `hexbytes_new[2**64]` | 0.00013178785485574852 | 7.233985912651677e-05 | 45.11% | 82.18% | 1.82x | ✅ |
| `hexbytes_new[2**8]` | 0.00012530346068119426 | 6.303335833973529e-05 | 49.70% | 98.79% | 1.99x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3721925286719786e-05 | 2.676692810445147e-05 | 38.78% | 63.34% | 1.63x | ✅ |
| `hexbytes_new[False]` | 5.966982286132811e-05 | 2.831841728948692e-05 | 52.54% | 110.71% | 2.11x | ✅ |
| `hexbytes_new[True]` | 6.0874310728904636e-05 | 2.80463157324768e-05 | 53.93% | 117.05% | 2.17x | ✅ |
| `hexbytes_new[all byte values]` | 4.385568904292454e-05 | 2.6734640711871418e-05 | 39.04% | 64.04% | 1.64x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.357627431033334e-05 | 2.6205202762494593e-05 | 39.86% | 66.29% | 1.66x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.328346889270559e-05 | 2.6404429126500312e-05 | 39.00% | 63.93% | 1.64x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.301638308587822e-05 | 2.597340581973166e-05 | 39.62% | 65.62% | 1.66x | ✅ |
| `hexbytes_new[b'']` | 4.193806747105171e-05 | 2.6449544407198813e-05 | 36.93% | 58.56% | 1.59x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.226755876727175e-05 | 2.612640257596975e-05 | 38.19% | 61.78% | 1.62x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.303789862497286e-05 | 2.6300442403093003e-05 | 38.89% | 63.64% | 1.64x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.287144359800684e-05 | 2.6338100843202052e-05 | 38.56% | 62.77% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.548044510454026e-05 | 3.783651195422879e-05 | 31.80% | 46.63% | 1.47x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2446159255525664e-05 | 2.6318494631730117e-05 | 38.00% | 61.28% | 1.61x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.205958938562818e-05 | 2.6132206330574523e-05 | 37.87% | 60.95% | 1.61x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.1938384115335436e-05 | 2.5823575522264672e-05 | 38.42% | 62.40% | 1.62x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.1930871130323747e-05 | 2.6052610981095975e-05 | 37.87% | 60.95% | 1.61x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.2513006961540696e-05 | 2.6150974235926885e-05 | 38.49% | 62.57% | 1.63x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.201927735362339e-05 | 2.669122599671061e-05 | 36.48% | 57.43% | 1.57x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.051984387700638e-05 | 3.2848022358483684e-05 | 34.98% | 53.80% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 4.24921773387216e-05 | 2.6226249388823627e-05 | 38.28% | 62.02% | 1.62x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.912531177068482e-05 | 3.7645441966818255e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.963681934545979e-05 | 3.790085627983307e-05 | 45.57% | 83.73% | 1.84x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.026354472011315e-05 | 3.810008667635582e-05 | 45.78% | 84.42% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 7.088028595416208e-05 | 3.751260946108734e-05 | 47.08% | 88.95% | 1.89x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.98473611688559e-05 | 3.760992366199385e-05 | 46.15% | 85.72% | 1.86x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.959598466673251e-05 | 3.827841130789465e-05 | 45.00% | 81.82% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.789799609790302e-05 | 3.6511077917480136e-05 | 46.23% | 85.97% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.910530972139383e-05 | 3.821027767659526e-05 | 44.71% | 80.86% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.0086755299983e-05 | 3.784806823552986e-05 | 46.00% | 85.18% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.019645219253669e-05 | 3.9312847477866535e-05 | 44.00% | 78.56% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.052374546278215e-05 | 5.690820449318694e-05 | 37.13% | 59.07% | 1.59x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.938821510912823e-05 | 3.836062353292349e-05 | 44.72% | 80.88% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.945606953245695e-05 | 3.8334813500057406e-05 | 44.81% | 81.18% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.98705198519529e-05 | 3.8157652517146694e-05 | 45.39% | 83.11% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.906838467197685e-05 | 3.8012367928547283e-05 | 44.96% | 81.70% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.969809420836791e-05 | 3.858239273338285e-05 | 44.64% | 80.65% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.043052604815217e-05 | 3.758113878793366e-05 | 46.64% | 87.41% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.512840789641502e-05 | 5.1287974395671e-05 | 39.75% | 65.98% | 1.66x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 7.03130215804713e-05 | 3.842638187930498e-05 | 45.35% | 82.98% | 1.83x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.493395344866202e-05 | 5.0705777745174845e-05 | 40.30% | 67.50% | 1.68x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.943465864471995e-05 | 3.8555117267377306e-05 | 44.47% | 80.09% | 1.80x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.939601587153343e-05 | 3.7820146163672197e-05 | 45.50% | 83.49% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.934993212881222e-05 | 3.799668166837723e-05 | 45.21% | 82.52% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.891835823870197e-05 | 3.813206054814783e-05 | 44.67% | 80.74% | 1.81x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.041474837247065e-05 | 3.7743007731054316e-05 | 46.40% | 86.56% | 1.87x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.96387091006445e-05 | 3.821377641699076e-05 | 45.13% | 82.23% | 1.82x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.95959270528753e-05 | 3.80093865888166e-05 | 45.39% | 83.10% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.059007591189001e-05 | 3.7930081248482664e-05 | 46.27% | 86.11% | 1.86x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.052326389189654e-05 | 3.752933664832444e-05 | 46.78% | 87.92% | 1.88x | ✅ |
| `hexbytes_new[long alternating]` | 5.171663647883696e-05 | 3.5159503318141715e-05 | 32.02% | 47.09% | 1.47x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.313758953541406e-05 | 4.410239226170989e-05 | 46.95% | 88.51% | 1.89x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.400930135097437e-05 | 4.464599652982047e-05 | 46.86% | 88.17% | 1.88x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.392000897858235e-05 | 4.508061502953792e-05 | 46.28% | 86.16% | 1.86x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.446060225520513e-05 | 4.426251986369861e-05 | 47.59% | 90.82% | 1.91x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.256439182083929e-05 | 4.442355211952597e-05 | 46.20% | 85.86% | 1.86x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.352706345769853e-05 | 4.482079239512252e-05 | 46.34% | 86.36% | 1.86x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.27844793151999e-05 | 4.051917997888602e-05 | 51.05% | 104.31% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.282635752168932e-05 | 4.4137583297957394e-05 | 46.71% | 87.65% | 1.88x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.440667143243906e-05 | 4.322766063373174e-05 | 48.79% | 95.26% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.336987377681067e-05 | 4.47956012953615e-05 | 46.27% | 86.11% | 1.86x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010481431320128697 | 6.435595574454597e-05 | 38.60% | 62.87% | 1.63x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.357908888125345e-05 | 4.309219672684222e-05 | 48.44% | 93.95% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.360038802935668e-05 | 4.3148299358940286e-05 | 48.39% | 93.75% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.299574560195052e-05 | 4.40239482064269e-05 | 46.96% | 88.52% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.284240992150222e-05 | 4.394422651991218e-05 | 46.95% | 88.52% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.3264962356344e-05 | 4.2998717843208924e-05 | 48.36% | 93.65% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.420218350240524e-05 | 4.407358743445219e-05 | 47.66% | 91.05% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.772140866798588e-05 | 5.765968516398958e-05 | 41.00% | 69.48% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.343100682831818e-05 | 4.3096863264645445e-05 | 48.34% | 93.59% | 1.94x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.931894581965446e-05 | 5.899968753465611e-05 | 40.60% | 68.34% | 1.68x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.502338871609362e-05 | 4.4429839345411165e-05 | 47.74% | 91.37% | 1.91x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.132863862083151e-05 | 4.3742846172410836e-05 | 46.21% | 85.92% | 1.86x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.27745024259733e-05 | 4.3983341432836264e-05 | 46.86% | 88.20% | 1.88x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.295682513092921e-05 | 4.3040937920687007e-05 | 48.12% | 92.74% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.391735232389395e-05 | 4.356636099789726e-05 | 48.08% | 92.62% | 1.93x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.463140180837013e-05 | 4.48603453119205e-05 | 46.99% | 88.66% | 1.89x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.310036321834817e-05 | 4.3798212674591144e-05 | 47.29% | 89.73% | 1.90x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.474322046748014e-05 | 4.373330891729606e-05 | 48.39% | 93.77% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.3074719383469e-05 | 4.445575258319931e-05 | 46.49% | 86.87% | 1.87x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3087909737135256e-05 | 2.6739412126973264e-05 | 37.94% | 61.14% | 1.61x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.246063818509364e-05 | 2.5920860304096705e-05 | 38.95% | 63.81% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.22451606537122e-05 | 2.600118952233428e-05 | 38.45% | 62.47% | 1.62x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.262531042652015e-05 | 2.6363192606158444e-05 | 38.15% | 61.68% | 1.62x | ✅ |
| `hexbytes_new[palindrome]` | 4.273815362152151e-05 | 2.6147334455829614e-05 | 38.82% | 63.45% | 1.63x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.289831158683167e-05 | 2.636790834758371e-05 | 38.53% | 62.69% | 1.63x | ✅ |
| `hexbytes_new[single 0xff]` | 4.227758680812227e-05 | 2.6097143281352997e-05 | 38.27% | 62.00% | 1.62x | ✅ |
| `hexbytes_new[single null byte]` | 4.215267746783811e-05 | 2.6140404730239452e-05 | 37.99% | 61.25% | 1.61x | ✅ |
| `hexbytes_new[two patterns]` | 4.25238593405222e-05 | 2.6392258257611142e-05 | 37.94% | 61.12% | 1.61x | ✅ |
| `hexbytes_repr[0-9]` | 2.8996358153020135e-05 | 1.4955446846129502e-05 | 48.42% | 93.88% | 1.94x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012112390949159031 | 4.108364340883967e-05 | 66.08% | 194.82% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.000121157574220718 | 4.126412868602057e-05 | 65.94% | 193.61% | 2.94x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.868424907886557e-05 | 1.995547557900892e-05 | 59.01% | 143.96% | 2.44x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.8806649911299914e-05 | 1.986592688352827e-05 | 59.30% | 145.68% | 2.46x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.094877492320732e-05 | 1.7922046888345774e-05 | 56.23% | 128.48% | 2.28x | ✅ |
| `hexbytes_repr[b'']` | 2.13859920239827e-05 | 1.2248827157071177e-05 | 42.72% | 74.60% | 1.75x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.647937355983914e-05 | 1.652771858318082e-05 | 54.69% | 120.72% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6672531967445634e-05 | 1.3957747836524567e-05 | 47.67% | 91.09% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.096514880637023e-05 | 2.347107253832965e-05 | 61.50% | 159.75% | 2.60x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007601923001542263 | 0.0002222002750426276 | 70.77% | 242.12% | 3.42x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6151066855261135e-05 | 1.3970344902841644e-05 | 46.58% | 87.19% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.703192226968649e-05 | 1.416992265641818e-05 | 47.58% | 90.77% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8360688450290624e-05 | 1.4364994652907327e-05 | 49.35% | 97.43% | 1.97x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8278424357587155e-05 | 1.4300868348467645e-05 | 49.43% | 97.74% | 1.98x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6228950893896765e-05 | 1.3941564188091256e-05 | 46.85% | 88.13% | 1.88x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.887357912640631e-05 | 1.9955702132125388e-05 | 59.17% | 144.91% | 2.45x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039406175406167494 | 0.00011869387754710777 | 69.88% | 232.00% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6518547707936523e-05 | 1.3982346384031185e-05 | 47.27% | 89.66% | 1.90x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003981461013279948 | 0.00012222075445280357 | 69.30% | 225.76% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.812190955323655e-05 | 3.3929995133773514e-05 | 65.42% | 189.19% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.897035856082906e-05 | 1.4864313894518942e-05 | 48.69% | 94.90% | 1.95x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.771114413493175e-05 | 1.4184985424997734e-05 | 48.81% | 95.36% | 1.95x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.705684589638715e-05 | 1.4169849469375347e-05 | 47.63% | 90.95% | 1.91x | ✅ |
| `hexbytes_repr[palindrome]` | 3.1584865815292956e-05 | 1.56387916925272e-05 | 50.49% | 101.96% | 2.02x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.093848747321715e-05 | 2.349758263465684e-05 | 61.44% | 159.34% | 2.59x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5531145441887856e-05 | 1.3609910140202153e-05 | 46.69% | 87.59% | 1.88x | ✅ |
| `hexbytes_repr[single null byte]` | 2.550875130919399e-05 | 1.3604167790015813e-05 | 46.67% | 87.51% | 1.88x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8900278798688735e-05 | 1.9717678614794046e-05 | 59.68% | 148.00% | 2.48x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5670702999563077e-05 | 1.362653465667102e-05 | 13.04% | 15.00% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.2306746872964954e-05 | 3.997381602896083e-05 | 5.51% | 5.84% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.2276654565066056e-05 | 4.020120164368612e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0913837115887467e-05 | 1.895319489975887e-05 | 9.37% | 10.34% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1133340916702297e-05 | 1.878537516317039e-05 | 11.11% | 12.50% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8680620516512272e-05 | 1.6948432564875806e-05 | 9.27% | 10.22% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0187082262042087e-05 | 1.1089179883270284e-05 | -8.86% | -8.13% | 0.92x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.771487452074347e-05 | 1.5697894123782482e-05 | 11.39% | 12.85% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.500250613621871e-05 | 1.3001875639226842e-05 | 13.34% | 15.39% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5134905827915887e-05 | 2.224326063044289e-05 | 11.50% | 13.00% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022211542755031692 | 0.00022211009791454488 | 0.00% | 0.00% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4972763206250326e-05 | 1.3044975767434667e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5034613384522086e-05 | 1.3016512257659895e-05 | 13.42% | 15.50% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.543617348020261e-05 | 1.3572024768839638e-05 | 12.08% | 13.74% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.546844959267876e-05 | 1.3286806495455533e-05 | 14.10% | 16.42% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5076283561580584e-05 | 1.3141049054027775e-05 | 12.84% | 14.73% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0742887918776725e-05 | 1.8783836626056542e-05 | 9.44% | 10.43% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012229086583884726 | 0.0001215386824748456 | 0.62% | 0.62% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5076352107748228e-05 | 1.2961919534372043e-05 | 14.02% | 16.31% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012245422721808644 | 0.00012177842418903104 | 0.55% | 0.55% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.539268692142237e-05 | 3.3174317433910935e-05 | 6.27% | 6.69% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.551841787232697e-05 | 1.3679175811194068e-05 | 11.85% | 13.45% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5258055412531802e-05 | 1.3206958098182363e-05 | 13.44% | 15.53% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5047855506464922e-05 | 1.3161092008909052e-05 | 12.54% | 14.34% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.657666724434273e-05 | 1.4682014965928759e-05 | 11.43% | 12.90% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5273807706052815e-05 | 2.2433230033593756e-05 | 11.24% | 12.66% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4788933537624441e-05 | 1.2775220067319677e-05 | 13.62% | 15.76% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4727621878213474e-05 | 1.2563514173277185e-05 | 14.69% | 17.23% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.070057335799865e-05 | 1.8765919225955744e-05 | 9.35% | 10.31% | 1.10x | ✅ |
