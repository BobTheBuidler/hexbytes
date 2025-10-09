#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-github-script-8.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-github-script-8.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.53668441961707e-05 | 2.3413264874501565e-05 | 7.70% | 8.34% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.535835343048155e-05 | 2.3435540755259298e-05 | 7.58% | 8.20% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4958221880409567e-05 | 2.3677863369197956e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.5163843845729108e-05 | 2.353566140678483e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.519895937420702e-05 | 2.337307511904421e-05 | 7.25% | 7.81% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5139963742164812e-05 | 2.3755085289653583e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.497491362862554e-05 | 2.35168749870477e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4869859690358813e-05 | 2.346506659541226e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4964545274870565e-05 | 2.3563169256000957e-05 | 5.61% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.5094981164728102e-05 | 2.3439062506274022e-05 | 6.60% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4836086957696625e-05 | 2.3506082188224788e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5175338649197923e-05 | 2.3468791715395408e-05 | 6.78% | 7.27% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.5274735993702316e-05 | 2.3371489472293352e-05 | 7.53% | 8.14% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4863772292065482e-05 | 2.358318074101012e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4905947287175086e-05 | 2.350468987903225e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.48787054860981e-05 | 2.3447220223501416e-05 | 5.75% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.488839303629594e-05 | 2.351828371347345e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4761393895366423e-05 | 2.345053470695019e-05 | 5.29% | 5.59% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.5225060229056707e-05 | 2.3518121164515742e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.505665404345325e-05 | 2.3809426036493395e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.507129268895164e-05 | 2.348729304614607e-05 | 6.32% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.5016810147063034e-05 | 2.3714810607608998e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.5130096027823786e-05 | 2.36004006839955e-05 | 6.09% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4882202812194837e-05 | 2.3454388286837558e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4975481556897965e-05 | 2.3655581550371606e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.494390757173162e-05 | 2.3739764633671874e-05 | 4.83% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3623205313857716e-05 | 2.278495145315533e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3592226923938415e-05 | 2.2913188202596257e-05 | 2.88% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.353546146993868e-05 | 2.3027643241948626e-05 | 2.16% | 2.21% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3803651274509934e-05 | 2.2959521380607028e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3662002023504002e-05 | 2.287470271878636e-05 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.404342992683894e-05 | 2.2918523555307587e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3620474800843862e-05 | 2.3255366828781506e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.380044116267868e-05 | 2.2869957261726755e-05 | 3.91% | 4.07% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3802765781994403e-05 | 2.289171617527974e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3663042351062443e-05 | 2.2894168909310263e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.379856958728949e-05 | 2.3294773286290518e-05 | 2.12% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3759822392784532e-05 | 2.299867629024606e-05 | 3.20% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.378087902084635e-05 | 2.280057223543121e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.388418986514796e-05 | 2.296560626895673e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3758930580768526e-05 | 2.273265518684773e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3935800482942908e-05 | 2.3226224137519547e-05 | 2.96% | 3.06% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3581879630163417e-05 | 2.3122420316036963e-05 | 1.95% | 1.99% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3648752674859415e-05 | 2.3129492756923876e-05 | 2.20% | 2.25% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.35587776726874e-05 | 2.303869365794312e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3744324666640247e-05 | 2.2765292041378557e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3616995152371287e-05 | 2.296720115405289e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3818153394882057e-05 | 2.2978367416656703e-05 | 3.53% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.4150971098124356e-05 | 2.2989559430905114e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3899857899656665e-05 | 2.2954695384213256e-05 | 3.95% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.391110775855449e-05 | 2.2924078834067346e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3887542004513157e-05 | 2.2914153846016135e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3724544184474418e-05 | 2.2999193001892647e-05 | 3.06% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.405482049242797e-05 | 2.2963841204917406e-05 | 4.54% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.371156993893801e-05 | 2.2888825072187992e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.372896791003886e-05 | 2.269922830738383e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.380317445569293e-05 | 2.2593638991616627e-05 | 5.08% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3699771774537176e-05 | 2.276535814154895e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.377200881454919e-05 | 2.2754159891962368e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3756691697094774e-05 | 2.2663964665438177e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3767305987420814e-05 | 2.3367393519318766e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.399809459218964e-05 | 2.3247274959597835e-05 | 3.13% | 3.23% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3949388110192527e-05 | 2.275685947791296e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.383678068567881e-05 | 2.2767386446981837e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.4151543190830392e-05 | 2.3158983566504542e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4054796124526218e-05 | 2.2790557389935175e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.4071587001955212e-05 | 2.2816616885874204e-05 | 5.21% | 5.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3944039128735428e-05 | 2.2609005310486514e-05 | 5.58% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.4032881006856603e-05 | 2.3292751418470645e-05 | 3.08% | 3.18% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.404124401434776e-05 | 2.3398603101390204e-05 | 2.67% | 2.75% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.4008458806567057e-05 | 2.3175824511740988e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.401755625128544e-05 | 2.279957423716565e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.390790682817183e-05 | 2.27166546800126e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.403059410918169e-05 | 2.2575590546631365e-05 | 6.05% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.382972400637899e-05 | 2.2745992149954278e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3880851865731264e-05 | 2.2836056500781297e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3856371347415718e-05 | 2.2845357952078757e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.400405000773179e-05 | 2.323827245067462e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3790814298149022e-05 | 2.2569582550622386e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3824659296862453e-05 | 2.258859549653083e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.36092339109195e-05 | 2.2570396588956234e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.357672278301972e-05 | 2.2635781606367467e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3584692413796272e-05 | 2.2566128899089113e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.368017951183617e-05 | 2.249870697838234e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.372379267755866e-05 | 2.2433916337710812e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3978481840717973e-05 | 2.244955862431443e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3532261105084142e-05 | 2.243633292164117e-05 | 4.66% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3554293105139784e-05 | 2.2634609970217897e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.369131921251666e-05 | 2.2480415096570504e-05 | 5.11% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3595932908404814e-05 | 2.2471037654105893e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3649134354149903e-05 | 2.2429308665822077e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.378839341436541e-05 | 2.237026957968727e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3739667878615078e-05 | 2.2566223589040366e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3669419777256432e-05 | 2.2140452039908372e-05 | 6.46% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.371907944013633e-05 | 2.249199152564079e-05 | 5.17% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3549165714029224e-05 | 2.2544291882540323e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.355785184616235e-05 | 2.5287046753424913e-05 | -7.34% | -6.84% | 0.93x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.366162314470262e-05 | 2.2537453215408807e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3623186065576826e-05 | 2.236197064305323e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3644000555255504e-05 | 2.2518408857112463e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.361604729333547e-05 | 2.238324815518049e-05 | 5.22% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.35780447313011e-05 | 2.24834448495838e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3669255904920467e-05 | 2.245882381639944e-05 | 5.11% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.358325843683949e-05 | 2.2542085972087914e-05 | 4.41% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.372390646514084e-05 | 2.2348053569568903e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3826290877865748e-05 | 2.250825453079483e-05 | 5.53% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3828436793963676e-05 | 2.245046642878092e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.383707357871923e-05 | 2.238193558744374e-05 | 6.10% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.4039200678842475e-05 | 2.2383740392175624e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.408119728309102e-05 | 2.244337852294664e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.377580135795096e-05 | 2.2378248316989097e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3777009804800353e-05 | 2.249231187115984e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3771741816576736e-05 | 2.2487086745067828e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.4028378177412885e-05 | 2.2497653202927855e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.4012534743073494e-05 | 2.2512114029033673e-05 | 6.25% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3823265405745716e-05 | 2.2397709815691707e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4122424451164747e-05 | 2.2357759145210398e-05 | 7.32% | 7.89% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.4004183209680407e-05 | 2.256813102319778e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.403556503037755e-05 | 2.2407854120956383e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.396372596112053e-05 | 2.241237758689271e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.375108990738313e-05 | 2.2467664845483026e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3712376080590073e-05 | 2.237604421211015e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3882535272038305e-05 | 2.2341917181914634e-05 | 6.45% | 6.90% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3807035451042842e-05 | 2.2720458408153257e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3850585115060407e-05 | 2.2308194495428264e-05 | 6.47% | 6.91% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3976538207292815e-05 | 2.247994384341074e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.386431892485114e-05 | 2.2388046078988552e-05 | 6.19% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3998119681394765e-05 | 2.2535705942361015e-05 | 6.09% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3391208440659576e-05 | 2.258605350409192e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3643262767441073e-05 | 2.257997850333367e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3756245437472095e-05 | 2.2485195569860916e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.386633909939304e-05 | 2.2535182490374337e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3781009070968543e-05 | 2.2563871719464805e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3811430476572753e-05 | 2.2605342916820077e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3770265442833896e-05 | 2.253533894356181e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3669945165055705e-05 | 2.240485812856034e-05 | 5.34% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3587497994532377e-05 | 2.258220765017642e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.380249738779756e-05 | 2.2567504761308617e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.365415547517736e-05 | 2.235929858511821e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.384046141423947e-05 | 2.2598431219666145e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.362779096809785e-05 | 2.2351192832918548e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3751705012549378e-05 | 2.248246869065687e-05 | 5.34% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.348643920320551e-05 | 2.2586503318959275e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3804392589893877e-05 | 2.2383749124667584e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.377498481236263e-05 | 2.2610584673160668e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.364091288900887e-05 | 2.2511082345918043e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.4387607646955965e-05 | 2.245998858468971e-05 | 7.90% | 8.58% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.357190918713692e-05 | 2.244823525416672e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.362264116513507e-05 | 2.2505083292646864e-05 | 4.73% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3682015401749925e-05 | 2.252887480220006e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3643763159370785e-05 | 2.2432700605115797e-05 | 5.12% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.365356288664023e-05 | 2.2422660161102335e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.375181559498149e-05 | 2.2496725323083268e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3619463831396372e-05 | 2.2169952315289615e-05 | 6.14% | 6.54% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3482523131575337e-05 | 2.248026876382764e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3608352031633873e-05 | 2.2500713381869102e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3716020870394847e-05 | 2.243097248462823e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3545629894661186e-05 | 2.2329749916216746e-05 | 5.16% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3639480367010277e-05 | 2.2523698534708007e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3746129928628982e-05 | 2.2436127952719607e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3654693905457973e-05 | 2.2432503125030924e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3798469782612525e-05 | 2.2460054949217077e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.371747597132707e-05 | 2.2490925560634133e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.371522237988283e-05 | 2.2449880101051846e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.366644006149346e-05 | 2.2269583752326842e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.363342940670444e-05 | 2.2438871844331197e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.368525560635718e-05 | 2.239454876736823e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3749044911890636e-05 | 2.2547582596510158e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3522728714952302e-05 | 2.2354826109503575e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3721992976339844e-05 | 2.2399775045628947e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.352780515435566e-05 | 2.2271560132776767e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.368942615045379e-05 | 2.2295442868052675e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.650172957526956e-05 | 6.098375413780732e-05 | 29.50% | 41.84% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.654815186607393e-05 | 6.0697515790363374e-05 | 29.87% | 42.59% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.655806708583257e-05 | 6.088540537266686e-05 | 29.66% | 42.17% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.722603723361744e-05 | 6.042848945803879e-05 | 30.72% | 44.35% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.695015349342915e-05 | 6.0999785165116677e-05 | 29.85% | 42.54% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.680302440795095e-05 | 6.111686388199567e-05 | 29.59% | 42.03% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.408548248236194e-05 | 5.7930825576887875e-05 | 31.10% | 45.15% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.66974437249276e-05 | 6.137522656223519e-05 | 29.21% | 41.26% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.633107246174567e-05 | 6.006161007277399e-05 | 30.43% | 43.74% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.576203560792851e-05 | 5.984399344558123e-05 | 30.22% | 43.31% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.677893501193669e-05 | 6.081469663559373e-05 | 29.92% | 42.69% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.687454394433717e-05 | 6.039779447584007e-05 | 30.48% | 43.84% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.679621940860932e-05 | 6.0958538292427005e-05 | 29.77% | 42.39% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 9.181735137421331e-05 | 6.048643267764398e-05 | 34.12% | 51.80% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.713707239090026e-05 | 6.0264380344689674e-05 | 30.84% | 44.59% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.624643122709693e-05 | 5.982634756700357e-05 | 30.63% | 44.16% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.695304362358399e-05 | 6.074777602709766e-05 | 30.14% | 43.14% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.675387953338203e-05 | 6.071932396803161e-05 | 30.01% | 42.88% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.748911967689668e-05 | 6.059107217773463e-05 | 30.74% | 44.39% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.636940474133197e-05 | 6.0723359804754805e-05 | 29.69% | 42.23% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.57677193303011e-05 | 6.0675963459967505e-05 | 29.26% | 41.35% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.628357814241968e-05 | 6.113147036672355e-05 | 29.15% | 41.14% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.624592913755605e-05 | 6.0886753924109136e-05 | 29.40% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.636620208880436e-05 | 6.057234352705215e-05 | 29.87% | 42.58% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.693523447684256e-05 | 6.0055930745449056e-05 | 30.92% | 44.76% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.673578588887855e-05 | 6.082342654538515e-05 | 29.88% | 42.60% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.531924908162597e-05 | 5.851533088291579e-05 | 31.42% | 45.81% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.464742564471074e-05 | 5.819731024681039e-05 | 31.25% | 45.45% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.653219679132671e-05 | 6.032846211734217e-05 | 30.28% | 43.44% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.347743001811588e-05 | 6.263777931496986e-05 | 24.96% | 33.27% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.346210534893569e-05 | 6.244654166994495e-05 | 25.18% | 33.65% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.367308282398218e-05 | 6.232831764365692e-05 | 25.51% | 34.25% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.384125133980742e-05 | 6.226752786855615e-05 | 25.73% | 34.65% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.334512413009009e-05 | 6.222679951664572e-05 | 25.34% | 33.94% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.373242692776574e-05 | 6.22375460613441e-05 | 25.67% | 34.54% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.070018650644294e-05 | 5.874180827406877e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.390465609349209e-05 | 6.162967905072766e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.351945734697131e-05 | 6.132746851893104e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.369569170855588e-05 | 6.173065071853307e-05 | 26.24% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.341322716089449e-05 | 6.25074442805649e-05 | 25.06% | 33.45% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.377946675406143e-05 | 6.195123734924679e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.321359434561078e-05 | 6.190091165067227e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.375787629304684e-05 | 6.153879546737606e-05 | 26.53% | 36.11% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.344926987134793e-05 | 6.1642614307153e-05 | 26.13% | 35.38% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.353670002563623e-05 | 6.368312971554312e-05 | 23.77% | 31.18% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.360700301555149e-05 | 6.17153039865693e-05 | 26.18% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.405143734931213e-05 | 6.112323752789971e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.4911593794863e-05 | 6.127828582921122e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.407198601884133e-05 | 6.235596937075041e-05 | 25.83% | 34.83% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.363714556117435e-05 | 6.184957581807966e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.374440480842824e-05 | 6.234690629555381e-05 | 25.55% | 34.32% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.328323571730266e-05 | 6.189305205910975e-05 | 25.68% | 34.56% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.355863467251337e-05 | 6.210091067207564e-05 | 25.68% | 34.55% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.38220569775427e-05 | 6.16011580777265e-05 | 26.51% | 36.07% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.351505665894445e-05 | 6.192464612781977e-05 | 25.85% | 34.87% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.189859491729671e-05 | 6.0364975812996094e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.250422532977175e-05 | 6.055838242409959e-05 | 26.60% | 36.24% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.332521098694872e-05 | 6.1587678005899e-05 | 26.09% | 35.30% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.281846959233638e-05 | 6.216785611605697e-05 | 24.93% | 33.22% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.370647598551834e-05 | 6.270310982571674e-05 | 25.09% | 33.50% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.369744528396635e-05 | 6.221755629092244e-05 | 25.66% | 34.52% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.367527636376351e-05 | 6.224474809726317e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.315625258247382e-05 | 6.254615473285287e-05 | 24.78% | 32.95% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.344022092823084e-05 | 6.16268626369846e-05 | 26.14% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.06390057648166e-05 | 5.9348932300641786e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.339223696943339e-05 | 6.143669704491595e-05 | 26.33% | 35.74% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.386885385641777e-05 | 6.15049294071608e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.422635206423999e-05 | 6.188549317441164e-05 | 26.52% | 36.10% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.274081604483525e-05 | 6.228846565995126e-05 | 24.72% | 32.83% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.297571943690846e-05 | 6.174009099033164e-05 | 25.59% | 34.40% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.31416126322104e-05 | 6.2315826108282e-05 | 25.05% | 33.42% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.327559061347901e-05 | 6.265867738623011e-05 | 24.76% | 32.90% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.290784852972536e-05 | 6.215435579387524e-05 | 25.03% | 33.39% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.427277763338647e-05 | 6.116550099024312e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.504464426330012e-05 | 6.164713295902746e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.356796357580826e-05 | 6.215825053896414e-05 | 25.62% | 34.44% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.338266576855385e-05 | 6.124230628699482e-05 | 26.55% | 36.15% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.339710557245608e-05 | 6.23145864836247e-05 | 25.28% | 33.83% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.301861977958666e-05 | 6.118064485283486e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.294400297999244e-05 | 6.233892464875498e-05 | 24.84% | 33.05% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.382989589643676e-05 | 6.247541568128054e-05 | 25.47% | 34.18% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.376694766931585e-05 | 6.221021568357997e-05 | 25.73% | 34.65% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.357040109242445e-05 | 6.22277373739108e-05 | 25.54% | 34.30% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.332963632340842e-05 | 6.165620689619066e-05 | 26.01% | 35.15% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.013901333905286e-05 | 5.9489806498919005e-05 | 25.77% | 34.71% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.073017376156698e-05 | 5.992156694406824e-05 | 25.78% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.330717975715887e-05 | 6.1766522787849e-05 | 25.86% | 34.87% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.495037724187647e-05 | 5.92803369682673e-05 | 30.22% | 43.30% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.479440733633198e-05 | 6.217859101665102e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.478827886179592e-05 | 6.194309746904687e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.303093360305436e-05 | 5.967514439140643e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.323342385724614e-05 | 6.129594097797893e-05 | 26.36% | 35.79% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.23069845786339e-05 | 6.054087262196027e-05 | 26.45% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.954360946668255e-05 | 5.858778291251932e-05 | 26.35% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.357414752064403e-05 | 6.077208159697232e-05 | 27.28% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.243541390908452e-05 | 6.0185564346194634e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.347207197112576e-05 | 6.081821888755038e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010671023591249223 | 8.496250846319225e-05 | 20.38% | 25.60% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.011366366173192e-05 | 5.8571394987221525e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.167321945647962e-05 | 6.0099477158379935e-05 | 26.41% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.249057593999691e-05 | 6.031262832709946e-05 | 26.89% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.236727332903603e-05 | 6.044663212469396e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.212531046215409e-05 | 6.292233490569667e-05 | 23.38% | 30.52% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.343178070749147e-05 | 6.111144094279654e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 0.00010216713800364962 | 7.73090736284103e-05 | 24.33% | 32.15% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.012998955769856e-05 | 5.902858407211222e-05 | 26.33% | 35.75% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010132382240795733 | 7.829413126737977e-05 | 22.73% | 29.41% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.433880177153223e-05 | 6.199164797632242e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.277429740080695e-05 | 5.9822030876207574e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.224426090673177e-05 | 6.0581855929546533e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.19361081889131e-05 | 6.056887853217517e-05 | 26.08% | 35.28% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.325052301223801e-05 | 6.0434268193049404e-05 | 27.41% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.343757393323069e-05 | 6.167043470652948e-05 | 26.09% | 35.30% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.967348344968058e-05 | 5.826896781177851e-05 | 26.87% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.894594186184669e-05 | 5.843741873608922e-05 | 25.98% | 35.09% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.323599017509566e-05 | 6.0857434145128495e-05 | 26.89% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.155944391748565e-05 | 5.841610993450571e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.325088098791546e-05 | 6.0922193637762126e-05 | 26.82% | 36.65% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.406596145529075e-05 | 6.056686498948495e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.135988155939501e-05 | 5.9837766760429356e-05 | 26.45% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.154568505659007e-05 | 5.9462396282962866e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.50714137786448e-05 | 5.950596871047226e-05 | 30.05% | 42.96% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.798281931560021e-05 | 5.655100017550528e-05 | 27.48% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.112376547452729e-05 | 5.950998375479925e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.09977367163334e-05 | 5.905084247873777e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.199109125474554e-05 | 6.0105909560529665e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.0001077737582948519 | 8.330046157825986e-05 | 22.71% | 29.38% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.132855820246344e-05 | 5.943881600013775e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.118418806625616e-05 | 5.8723553594249096e-05 | 27.67% | 38.25% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.184241032633548e-05 | 5.855686328276118e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.066409683949013e-05 | 5.8622512146106755e-05 | 27.33% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.092313100690317e-05 | 5.9576069137822156e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.140455967361234e-05 | 5.969788807184846e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.801818790108813e-05 | 7.634320618276988e-05 | 22.11% | 28.39% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.132678305498368e-05 | 5.8916078250798293e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 0.00010028520977146443 | 7.687148002281858e-05 | 23.35% | 30.46% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.625321418224586e-05 | 6.0158489318827836e-05 | 30.25% | 43.38% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.148166472831242e-05 | 5.8459829250578385e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.09398165631258e-05 | 5.7947875038295735e-05 | 28.41% | 39.68% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.171645700814158e-05 | 5.919894109426395e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.200891921679035e-05 | 5.854704353029032e-05 | 28.61% | 40.07% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.640292048809523e-05 | 6.002093847136316e-05 | 30.53% | 43.95% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.814525946225656e-05 | 5.7172172978665314e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.839417804731216e-05 | 5.7179271314254106e-05 | 27.06% | 37.10% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.65082128967642e-05 | 5.9101849921317355e-05 | 31.68% | 46.37% | 1.46x | ✅ |
| `hexbytes_new['']` | 7.187600653615649e-05 | 3.711547486813823e-05 | 48.36% | 93.66% | 1.94x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.206240200704286e-05 | 5.2103245493038935e-05 | 43.40% | 76.69% | 1.77x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.288672524004619e-05 | 5.0473638746859295e-05 | 45.66% | 84.03% | 1.84x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 9.007900296835155e-05 | 4.716217676208771e-05 | 47.64% | 91.00% | 1.91x | ✅ |
| `hexbytes_new['0x']` | 8.045518460289151e-05 | 3.861820185475324e-05 | 52.00% | 108.33% | 2.08x | ✅ |
| `hexbytes_new['0x1234']` | 8.750064676925577e-05 | 4.530785432084637e-05 | 48.22% | 93.12% | 1.93x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.72686114034651e-05 | 4.520030779029282e-05 | 48.21% | 93.07% | 1.93x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.829037389268557e-05 | 4.5439760549192184e-05 | 48.53% | 94.30% | 1.94x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.83417690574794e-05 | 4.71968700122485e-05 | 46.57% | 87.18% | 1.87x | ✅ |
| `hexbytes_new['abc']` | 8.3434339468516e-05 | 4.7921453890622364e-05 | 42.56% | 74.11% | 1.74x | ✅ |
| `hexbytes_new['deadbeef']` | 7.78518392258758e-05 | 4.176653216963581e-05 | 46.35% | 86.40% | 1.86x | ✅ |
| `hexbytes_new[0-9]` | 4.247946230703372e-05 | 2.5707444494787636e-05 | 39.48% | 65.24% | 1.65x | ✅ |
| `hexbytes_new[0]` | 0.00012525747156400677 | 6.140135831176088e-05 | 50.98% | 104.00% | 2.04x | ✅ |
| `hexbytes_new[123456]` | 0.00013157387795480674 | 6.725765882009888e-05 | 48.88% | 95.63% | 1.96x | ✅ |
| `hexbytes_new[2**16]` | 0.00013014946772006348 | 6.628157546086792e-05 | 49.07% | 96.36% | 1.96x | ✅ |
| `hexbytes_new[2**256-1]` | 0.000130804479081109 | 7.326525896179238e-05 | 43.99% | 78.54% | 1.79x | ✅ |
| `hexbytes_new[2**32]` | 0.0001322340980528789 | 7.10278064584895e-05 | 46.29% | 86.17% | 1.86x | ✅ |
| `hexbytes_new[2**64]` | 0.00013066663475398585 | 7.378235262227734e-05 | 43.53% | 77.10% | 1.77x | ✅ |
| `hexbytes_new[2**8]` | 0.00012772239171880044 | 6.334276449565793e-05 | 50.41% | 101.64% | 2.02x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.278307265941352e-05 | 2.664515797530688e-05 | 37.72% | 60.57% | 1.61x | ✅ |
| `hexbytes_new[False]` | 5.847194414842383e-05 | 2.6911896901620587e-05 | 53.97% | 117.27% | 2.17x | ✅ |
| `hexbytes_new[True]` | 6.052389796573496e-05 | 2.70871850162114e-05 | 55.25% | 123.44% | 2.23x | ✅ |
| `hexbytes_new[all byte values]` | 4.2820605326811456e-05 | 2.663537239656793e-05 | 37.80% | 60.77% | 1.61x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.266438961870035e-05 | 2.6717302102540028e-05 | 37.38% | 59.69% | 1.60x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.255269179195082e-05 | 2.6590495662978765e-05 | 37.51% | 60.03% | 1.60x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.3063771164318944e-05 | 2.576563848161034e-05 | 40.17% | 67.14% | 1.67x | ✅ |
| `hexbytes_new[b'']` | 4.24356245267544e-05 | 2.5323248357974074e-05 | 40.33% | 67.58% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.221803066531191e-05 | 2.6143641472193286e-05 | 38.07% | 61.48% | 1.61x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.283357416602382e-05 | 2.5747728147875673e-05 | 39.89% | 66.36% | 1.66x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.2853508345090514e-05 | 2.6331886606565568e-05 | 38.55% | 62.74% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.5454500119809736e-05 | 3.8122476259708996e-05 | 31.25% | 45.46% | 1.45x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.235633539674121e-05 | 2.567211245119113e-05 | 39.39% | 64.99% | 1.65x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.266183021775265e-05 | 2.5766875610684125e-05 | 39.60% | 65.57% | 1.66x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.2356976807499604e-05 | 2.5641798424890412e-05 | 39.46% | 65.19% | 1.65x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2317650578542036e-05 | 2.569354480117202e-05 | 39.28% | 64.70% | 1.65x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.2855726291966505e-05 | 2.55794383141787e-05 | 40.31% | 67.54% | 1.68x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.323803890889476e-05 | 2.689161002363233e-05 | 37.81% | 60.79% | 1.61x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0680143616162246e-05 | 3.294380154282919e-05 | 35.00% | 53.84% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 4.249936921167797e-05 | 2.567838949433384e-05 | 39.58% | 65.51% | 1.66x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.95340656148973e-05 | 3.690396758999365e-05 | 46.93% | 88.42% | 1.88x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.893620238345855e-05 | 3.864214749635716e-05 | 43.95% | 78.40% | 1.78x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.978425475018694e-05 | 3.8076533827136296e-05 | 45.44% | 83.27% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 7.05342091161263e-05 | 3.731451347916396e-05 | 47.10% | 89.03% | 1.89x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.972757109291266e-05 | 3.7753417963987255e-05 | 45.86% | 84.69% | 1.85x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.004178157605682e-05 | 3.7309781562102375e-05 | 46.73% | 87.73% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.774213118041401e-05 | 3.565252826450098e-05 | 47.37% | 90.01% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.982226028093515e-05 | 3.739251585267e-05 | 46.45% | 86.73% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.00530319886894e-05 | 3.704759989272136e-05 | 47.11% | 89.09% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.014248970754344e-05 | 3.7833264861284294e-05 | 46.06% | 85.40% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.306611869754197e-05 | 5.7365737196283094e-05 | 38.36% | 62.23% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.957723599392608e-05 | 3.716828414803076e-05 | 46.58% | 87.20% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.985857173842472e-05 | 3.697112429371292e-05 | 47.08% | 88.95% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.886472075759649e-05 | 3.67080863631717e-05 | 46.70% | 87.60% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.836995925780335e-05 | 3.673418363646719e-05 | 46.27% | 86.12% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.977316258596596e-05 | 3.736879256038579e-05 | 46.44% | 86.72% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.905436959781151e-05 | 3.751937116435395e-05 | 45.67% | 84.05% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.49170586286655e-05 | 4.992648900847446e-05 | 41.21% | 70.08% | 1.70x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.939131340608572e-05 | 3.746702444946466e-05 | 46.01% | 85.21% | 1.85x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.540101875651676e-05 | 5.1030301839094406e-05 | 40.25% | 67.35% | 1.67x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.934604263510807e-05 | 3.8522424972305306e-05 | 44.45% | 80.01% | 1.80x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.968915095273908e-05 | 3.675937655322673e-05 | 47.25% | 89.58% | 1.90x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.91408236486941e-05 | 3.7248212033737376e-05 | 46.13% | 85.62% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.842819166789907e-05 | 3.7242241374008936e-05 | 45.57% | 83.74% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.023977486929806e-05 | 3.7806998326036466e-05 | 46.17% | 85.79% | 1.86x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.931371402297584e-05 | 3.790549212782003e-05 | 45.31% | 82.86% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.960975131467602e-05 | 3.7378918695139616e-05 | 46.30% | 86.23% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.984820125945704e-05 | 3.72764009342491e-05 | 46.63% | 87.38% | 1.87x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.005848521657388e-05 | 3.7648937556502977e-05 | 46.26% | 86.08% | 1.86x | ✅ |
| `hexbytes_new[long alternating]` | 5.041383905470062e-05 | 3.316323955881613e-05 | 34.22% | 52.02% | 1.52x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 7.993717802173928e-05 | 4.351984597910141e-05 | 45.56% | 83.68% | 1.84x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.352614774876686e-05 | 4.422316659583628e-05 | 47.05% | 88.87% | 1.89x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.345564610381085e-05 | 4.388410947792567e-05 | 47.42% | 90.17% | 1.90x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.440867945999549e-05 | 4.33951537777885e-05 | 48.59% | 94.51% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.368116994070649e-05 | 4.3563243391193054e-05 | 47.94% | 92.09% | 1.92x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.289401503155546e-05 | 4.401885198259139e-05 | 46.90% | 88.31% | 1.88x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.029413703482374e-05 | 4.011780951087135e-05 | 50.04% | 100.15% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.350964295041347e-05 | 4.4240350142295186e-05 | 47.02% | 88.76% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.406044602789914e-05 | 4.3761780192862345e-05 | 47.94% | 92.09% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.264734500859322e-05 | 4.3991571227754476e-05 | 46.77% | 87.87% | 1.88x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010613367015182173 | 6.431892533048162e-05 | 39.40% | 65.01% | 1.65x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.294821830597736e-05 | 4.3489006009257866e-05 | 47.57% | 90.73% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.312858591154287e-05 | 4.3736373901983196e-05 | 47.39% | 90.07% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.168060108472474e-05 | 4.378246870985592e-05 | 46.40% | 86.56% | 1.87x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.221612568256672e-05 | 4.3319689627420114e-05 | 47.31% | 89.79% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.339326137282136e-05 | 4.350991168556694e-05 | 47.83% | 91.66% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.3448866238303e-05 | 4.377323179787343e-05 | 47.54% | 90.64% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.93522255642983e-05 | 5.763793244382201e-05 | 41.99% | 72.37% | 1.72x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.279582990315901e-05 | 4.3699292957952794e-05 | 47.22% | 89.47% | 1.89x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.797042880855122e-05 | 5.727185276186311e-05 | 41.54% | 71.06% | 1.71x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.294948916234722e-05 | 4.3634997814454674e-05 | 47.40% | 90.10% | 1.90x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.113670386445784e-05 | 4.368276405172693e-05 | 46.16% | 85.74% | 1.86x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.318195163770402e-05 | 4.372693834099705e-05 | 47.43% | 90.23% | 1.90x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.346909385540398e-05 | 4.30177468171375e-05 | 48.46% | 94.03% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.259786381310108e-05 | 4.391911388514271e-05 | 46.83% | 88.07% | 1.88x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.363024013507729e-05 | 4.38891036496465e-05 | 47.52% | 90.55% | 1.91x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.297601004585901e-05 | 4.343621792841316e-05 | 47.65% | 91.03% | 1.91x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.440343358252629e-05 | 4.348144784366797e-05 | 48.48% | 94.11% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.328144363068986e-05 | 4.347906328271583e-05 | 47.79% | 91.54% | 1.92x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.290169444402308e-05 | 2.6526878314507255e-05 | 38.17% | 61.73% | 1.62x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.216837532021829e-05 | 2.571299488069995e-05 | 39.02% | 64.00% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.242144287999865e-05 | 2.558629913891683e-05 | 39.69% | 65.80% | 1.66x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.274285942543968e-05 | 2.5627114675728542e-05 | 40.04% | 66.79% | 1.67x | ✅ |
| `hexbytes_new[palindrome]` | 4.2815230589208924e-05 | 2.5476636915406403e-05 | 40.50% | 68.06% | 1.68x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2892621845209835e-05 | 2.6765973572780606e-05 | 37.60% | 60.25% | 1.60x | ✅ |
| `hexbytes_new[single 0xff]` | 4.278613468882647e-05 | 2.537814231766721e-05 | 40.69% | 68.59% | 1.69x | ✅ |
| `hexbytes_new[single null byte]` | 4.225382451745097e-05 | 2.5383828314942248e-05 | 39.93% | 66.46% | 1.66x | ✅ |
| `hexbytes_new[two patterns]` | 4.261855565122866e-05 | 2.6281564098630062e-05 | 38.33% | 62.16% | 1.62x | ✅ |
| `hexbytes_repr[0-9]` | 2.9235195099396078e-05 | 1.5192418831954908e-05 | 48.03% | 92.43% | 1.92x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012166829057769285 | 4.177817934053407e-05 | 65.66% | 191.22% | 2.91x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012185891279496494 | 4.158201804237389e-05 | 65.88% | 193.06% | 2.93x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.896757154050744e-05 | 2.090918988359975e-05 | 57.30% | 134.19% | 2.34x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.885238825849154e-05 | 2.084735239593969e-05 | 57.33% | 134.33% | 2.34x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.046045765093335e-05 | 1.8324152105888238e-05 | 54.71% | 120.80% | 2.21x | ✅ |
| `hexbytes_repr[b'']` | 2.1336348748599003e-05 | 1.2710992406068083e-05 | 40.43% | 67.86% | 1.68x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.626581562929964e-05 | 1.7346331632359716e-05 | 52.17% | 109.07% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6329545310885394e-05 | 1.4631990799940066e-05 | 44.43% | 79.95% | 1.80x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.110192516339711e-05 | 2.3903194237482907e-05 | 60.88% | 155.62% | 2.56x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007705367622723461 | 0.0002229412559143363 | 71.07% | 245.62% | 3.46x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6246381327036725e-05 | 1.4624216051321857e-05 | 44.28% | 79.47% | 1.79x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7180684022235857e-05 | 1.4654945777657106e-05 | 46.08% | 85.47% | 1.85x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.83725688870761e-05 | 1.4838732835059721e-05 | 47.70% | 91.21% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8371168889990704e-05 | 1.4968495903767416e-05 | 47.24% | 89.54% | 1.90x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6372344980089936e-05 | 1.4118381068646362e-05 | 46.47% | 86.79% | 1.87x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.8871217549970734e-05 | 2.0931898431562216e-05 | 57.17% | 133.48% | 2.33x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040188494961825803 | 0.00012222423753413447 | 69.59% | 228.81% | 3.29x | ✅ |
| `hexbytes_repr[b'abc']` | 2.618081919622833e-05 | 1.4455382837678395e-05 | 44.79% | 81.11% | 1.81x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00039846481988195656 | 0.00012259284607957712 | 69.23% | 225.03% | 3.25x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.773845534306344e-05 | 3.44727481698714e-05 | 64.73% | 183.52% | 2.84x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.910638703253044e-05 | 1.5185007564003744e-05 | 47.83% | 91.68% | 1.92x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.763814403639247e-05 | 1.4814648338874089e-05 | 46.40% | 86.56% | 1.87x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.710101169346885e-05 | 1.4595762460786128e-05 | 46.14% | 85.68% | 1.86x | ✅ |
| `hexbytes_repr[palindrome]` | 3.180561352267103e-05 | 1.6305599635558327e-05 | 48.73% | 95.06% | 1.95x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.099143514266719e-05 | 2.379154788816956e-05 | 60.99% | 156.36% | 2.56x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5713310750110952e-05 | 1.385824108065418e-05 | 46.10% | 85.55% | 1.86x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5691125795742833e-05 | 1.4090990072244553e-05 | 45.15% | 82.32% | 1.82x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8883160890551966e-05 | 2.0655052849650852e-05 | 57.75% | 136.66% | 2.37x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.572234359240731e-05 | 1.4107699023500995e-05 | 10.27% | 11.45% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.254590930665352e-05 | 4.024901817799001e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.2673582088771386e-05 | 4.0224402736325815e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.069014657130875e-05 | 1.8770449533431738e-05 | 9.28% | 10.23% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.099026827769922e-05 | 1.9087322691500777e-05 | 9.07% | 9.97% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8862271472816303e-05 | 1.6993767237708192e-05 | 9.91% | 11.00% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0093981001840318e-05 | 1.1241378596169978e-05 | -11.37% | -10.21% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7499615810712146e-05 | 1.5613534737679413e-05 | 10.78% | 12.08% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5096251300732518e-05 | 1.3398327529298406e-05 | 11.25% | 12.67% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.4994013817017275e-05 | 2.2420431870923486e-05 | 10.30% | 11.48% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022327877667327242 | 0.00022155423743013973 | 0.77% | 0.78% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4949097440647257e-05 | 1.3136081912910963e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5085284184727312e-05 | 1.3500232033819185e-05 | 10.51% | 11.74% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5477794584565958e-05 | 1.3837466020806903e-05 | 10.60% | 11.85% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5341486495262567e-05 | 1.3867366264958598e-05 | 9.61% | 10.63% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5073188332194708e-05 | 1.3349973535611335e-05 | 11.43% | 12.91% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0709806906741908e-05 | 1.8970930765454188e-05 | 8.40% | 9.17% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012273627537299432 | 0.000121509033672454 | 1.00% | 1.01% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4994784239154681e-05 | 1.3194834816697029e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001228400938215593 | 0.00012183138415757379 | 0.82% | 0.83% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4952237402039935e-05 | 3.298176539972781e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5729951057286166e-05 | 1.400216052409979e-05 | 10.98% | 12.34% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5332414275091718e-05 | 1.358913579331186e-05 | 11.37% | 12.83% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5168139790291177e-05 | 1.3474622081405412e-05 | 11.16% | 12.57% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.654937734377445e-05 | 1.4682665411405627e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5044551873583642e-05 | 2.237342131255036e-05 | 10.67% | 11.94% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4756711750680648e-05 | 1.2839414257926546e-05 | 12.99% | 14.93% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4763823544209967e-05 | 1.28110887486335e-05 | 13.23% | 15.24% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.084530987872292e-05 | 1.8892028390652176e-05 | 9.37% | 10.34% | 1.10x | ✅ |
