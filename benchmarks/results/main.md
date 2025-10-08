#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/runners/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/runners/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.683342075187277e-05 | 2.3614494043916564e-05 | 12.00% | 13.63% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6878489792962704e-05 | 2.351972072426058e-05 | 12.50% | 14.28% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.7064980261288622e-05 | 2.3457925146424976e-05 | 13.33% | 15.38% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.698628755518709e-05 | 2.340843362417897e-05 | 13.26% | 15.28% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6945276059861084e-05 | 2.3449604689665994e-05 | 12.97% | 14.91% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6785586098664646e-05 | 2.3524210029456118e-05 | 12.18% | 13.86% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6850887455300902e-05 | 2.3626956454356054e-05 | 12.01% | 13.65% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6830410252455162e-05 | 2.352729254095488e-05 | 12.31% | 14.04% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.7121778354373074e-05 | 2.3464253055069125e-05 | 13.49% | 15.59% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.705154069083104e-05 | 2.3457078070917965e-05 | 13.29% | 15.32% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.6954122625280193e-05 | 2.3334379073788215e-05 | 13.43% | 15.51% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.7150127469005602e-05 | 2.334857417950899e-05 | 14.00% | 16.28% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6934948374297855e-05 | 2.3465739760338774e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6784413091421566e-05 | 2.352199909329963e-05 | 12.18% | 13.87% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.690681055663457e-05 | 2.352905875245167e-05 | 12.55% | 14.36% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.7031926885057915e-05 | 2.351868734560532e-05 | 13.00% | 14.94% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7016831196366405e-05 | 2.3401156341208732e-05 | 13.38% | 15.45% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6955919708158066e-05 | 2.4931559970839662e-05 | 7.51% | 8.12% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.702710651202123e-05 | 2.358193133661035e-05 | 12.75% | 14.61% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.767334475083477e-05 | 2.3636032467909236e-05 | 14.59% | 17.08% | 1.17x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6995173851744448e-05 | 2.3606584250606127e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6853823351766403e-05 | 2.3552238931148274e-05 | 12.29% | 14.02% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.714335465001659e-05 | 2.33639906378498e-05 | 13.92% | 16.18% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.668339311665106e-05 | 2.3488598810313383e-05 | 11.97% | 13.60% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.709963930465682e-05 | 2.3517979674877275e-05 | 13.22% | 15.23% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.694625547514083e-05 | 2.3501014336321722e-05 | 12.79% | 14.66% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6458956254620006e-05 | 2.284376489148949e-05 | 13.66% | 15.83% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6368828665730092e-05 | 2.279080855540419e-05 | 13.57% | 15.70% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6235611417714633e-05 | 2.2771079658717135e-05 | 13.21% | 15.21% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6344621695229084e-05 | 2.2966578938092795e-05 | 12.82% | 14.71% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6493351638722628e-05 | 2.3065314684592146e-05 | 12.94% | 14.86% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6554458352743543e-05 | 2.285346416868127e-05 | 13.94% | 16.19% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6112114090952956e-05 | 2.2678091334132825e-05 | 13.15% | 15.14% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.644535615687312e-05 | 2.2826270843802882e-05 | 13.69% | 15.85% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6471463154182772e-05 | 2.3027315933786316e-05 | 13.01% | 14.96% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.660807405828442e-05 | 2.2832772135532928e-05 | 14.19% | 16.53% | 1.17x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6415190363125535e-05 | 2.2995000357407113e-05 | 12.95% | 14.87% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6371503781560653e-05 | 2.2840037634074363e-05 | 13.39% | 15.46% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6193569797256712e-05 | 2.2870889292482928e-05 | 12.69% | 14.53% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6508804996564526e-05 | 2.2920143865014456e-05 | 13.54% | 15.66% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.654756518205687e-05 | 2.2807475837560425e-05 | 14.09% | 16.40% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6366013926057394e-05 | 2.300477638253802e-05 | 12.75% | 14.61% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.65738836709436e-05 | 2.2916779426517857e-05 | 13.76% | 15.96% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6436145735604407e-05 | 2.4491297723413763e-05 | 7.36% | 7.94% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6801570139627007e-05 | 2.2863873265446986e-05 | 14.69% | 17.22% | 1.17x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.64265957839103e-05 | 2.289394107088699e-05 | 13.37% | 15.43% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6436645292529913e-05 | 2.240543553128169e-05 | 15.25% | 17.99% | 1.18x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6203094624563366e-05 | 2.2869767328557628e-05 | 12.72% | 14.58% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6287197082831328e-05 | 2.2775440884258197e-05 | 13.36% | 15.42% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6324575753382498e-05 | 2.2869717370485044e-05 | 13.12% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6411762059308176e-05 | 2.2871172312344164e-05 | 13.41% | 15.48% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.63855294203684e-05 | 2.297505300844415e-05 | 12.93% | 14.84% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6478739373709226e-05 | 2.274165885748214e-05 | 14.11% | 16.43% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.660376799625297e-05 | 2.2729193427154358e-05 | 14.56% | 17.05% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6448346697738943e-05 | 2.2994277692794463e-05 | 13.06% | 15.02% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.675176318836546e-05 | 2.2600444410681887e-05 | 15.52% | 18.37% | 1.18x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.646507775426448e-05 | 2.282381868503358e-05 | 13.76% | 15.95% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5915396699347774e-05 | 2.2946338668501592e-05 | 11.46% | 12.94% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6303688763084133e-05 | 2.307265529848165e-05 | 12.28% | 14.00% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6452596223180856e-05 | 2.3044877790911902e-05 | 12.88% | 14.79% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6617582779826343e-05 | 2.281483601343802e-05 | 14.29% | 16.67% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6259453080888986e-05 | 2.2889841396122535e-05 | 12.83% | 14.72% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6441984591746712e-05 | 2.3071557198916035e-05 | 12.75% | 14.61% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6384844122800088e-05 | 2.268630484912292e-05 | 14.02% | 16.30% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.650364203883374e-05 | 2.3095494668275358e-05 | 12.86% | 14.76% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6246011721564148e-05 | 2.2898421236196596e-05 | 12.75% | 14.62% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6299294483797482e-05 | 2.320624530194442e-05 | 11.76% | 13.33% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6170902652808027e-05 | 2.3076535677420943e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.618718703521813e-05 | 2.289711937264426e-05 | 12.56% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6111924984923273e-05 | 2.2929507030203782e-05 | 12.19% | 13.88% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6430981365228704e-05 | 2.3119633730423705e-05 | 12.53% | 14.32% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6614027650830667e-05 | 2.3127329232499398e-05 | 13.10% | 15.08% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.652355214236802e-05 | 2.2903115645949157e-05 | 13.65% | 15.81% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6510435901359616e-05 | 2.3186112402790046e-05 | 12.54% | 14.34% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.622187998671809e-05 | 2.2928140316319495e-05 | 12.56% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6459178623601955e-05 | 2.3095875215351986e-05 | 12.71% | 14.56% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.65496181805294e-05 | 2.2885566279570445e-05 | 13.80% | 16.01% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.642895087130769e-05 | 2.3020740016263565e-05 | 12.90% | 14.80% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6314146242341908e-05 | 2.29610842699774e-05 | 12.74% | 14.60% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.651625235921881e-05 | 2.3107907731187933e-05 | 12.85% | 14.75% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6272539270107355e-05 | 2.297637572332995e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6328662662574945e-05 | 2.3166207283780165e-05 | 12.01% | 13.65% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6434841600800092e-05 | 2.2977009022214135e-05 | 13.08% | 15.05% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6350035551025872e-05 | 2.297603511608321e-05 | 12.80% | 14.68% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6277329755957508e-05 | 2.2827876907913047e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.660072667609492e-05 | 2.292793631589129e-05 | 13.81% | 16.02% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6261268441038266e-05 | 2.265850687554713e-05 | 13.72% | 15.90% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6386989696787778e-05 | 2.3150321681773e-05 | 12.27% | 13.98% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6330216512753073e-05 | 2.304999169975863e-05 | 12.46% | 14.23% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6208081503942898e-05 | 2.3162471424818124e-05 | 11.62% | 13.15% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6229394422820447e-05 | 2.2852714525299883e-05 | 12.87% | 14.78% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5997862785181846e-05 | 2.2846653829375814e-05 | 12.12% | 13.79% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6264289424315692e-05 | 2.3035821625029408e-05 | 12.29% | 14.01% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6156268863905957e-05 | 2.3191596010811348e-05 | 11.33% | 12.78% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6418333603451155e-05 | 2.2933429726417975e-05 | 13.19% | 15.20% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6330846289188525e-05 | 2.2816792980971184e-05 | 13.35% | 15.40% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.639310707540807e-05 | 2.298829925475959e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.641674701742198e-05 | 2.2855803588863445e-05 | 13.48% | 15.58% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.636934937718839e-05 | 2.3010035860538634e-05 | 12.74% | 14.60% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.697117146239293e-05 | 2.3124626996062685e-05 | 14.26% | 16.63% | 1.17x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6296997242878018e-05 | 2.301923860484595e-05 | 12.46% | 14.24% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6322392769446154e-05 | 2.3032857233369313e-05 | 12.50% | 14.28% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.631884589064544e-05 | 2.289662907961165e-05 | 13.00% | 14.95% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6522412211167392e-05 | 2.289949671738527e-05 | 13.66% | 15.82% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6849437055147844e-05 | 2.2852909444280806e-05 | 14.88% | 17.49% | 1.17x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.640031535706597e-05 | 2.2826740367903406e-05 | 13.54% | 15.66% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6470623348264854e-05 | 2.2935022900929596e-05 | 13.36% | 15.42% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6410228454999557e-05 | 2.302775164717684e-05 | 12.81% | 14.69% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6385345624052702e-05 | 2.314723325703518e-05 | 12.27% | 13.99% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6408595691847786e-05 | 2.2993129826194078e-05 | 12.93% | 14.85% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6346150642644543e-05 | 2.2942088109252545e-05 | 12.92% | 14.84% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6301561061211364e-05 | 2.2979365927186143e-05 | 12.63% | 14.46% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6295499985905547e-05 | 2.2813286296319683e-05 | 13.24% | 15.26% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.623509926156132e-05 | 2.2917147326410966e-05 | 12.65% | 14.48% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6426295454863673e-05 | 2.308940427881148e-05 | 12.63% | 14.45% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6354557624284152e-05 | 2.3040233835332993e-05 | 12.58% | 14.38% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6318007913033975e-05 | 2.3289999588514703e-05 | 11.51% | 13.00% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.645855242954869e-05 | 2.316128500313389e-05 | 12.46% | 14.24% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6647552083501878e-05 | 2.3145267064638117e-05 | 13.14% | 15.13% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.630696084387339e-05 | 2.2878125048161598e-05 | 13.03% | 14.99% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6383782734660458e-05 | 2.292195457232212e-05 | 13.12% | 15.10% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.648998005670545e-05 | 2.30127555822588e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6707079793941278e-05 | 2.3103844810120625e-05 | 13.49% | 15.60% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6450960821083922e-05 | 2.3062170210396132e-05 | 12.81% | 14.69% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6221481436635375e-05 | 2.3174981752019424e-05 | 11.62% | 13.15% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.639993046023465e-05 | 2.319875309657115e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.639534701028572e-05 | 2.3117698333793453e-05 | 12.42% | 14.18% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6296646337113384e-05 | 2.298035093757323e-05 | 12.61% | 14.43% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.637190292647325e-05 | 2.285258204470091e-05 | 13.34% | 15.40% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.642919335279694e-05 | 2.3088638598492788e-05 | 12.64% | 14.47% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6279167871098363e-05 | 2.312536903782184e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6152792346530584e-05 | 2.3043624277244878e-05 | 11.89% | 13.49% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6344965852291653e-05 | 2.3065244360299146e-05 | 12.45% | 14.22% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.602841860205564e-05 | 2.3301457413000813e-05 | 10.48% | 11.70% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6289285985425542e-05 | 2.3027915113527942e-05 | 12.41% | 14.16% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.623464086318287e-05 | 2.311636623472705e-05 | 11.89% | 13.49% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6204690748526704e-05 | 2.293286964890638e-05 | 12.49% | 14.27% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6274153803257557e-05 | 2.308068726460112e-05 | 12.15% | 13.84% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.5803175431301884e-05 | 2.2943795617922602e-05 | 11.08% | 12.46% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.624066703553715e-05 | 2.3124832777072268e-05 | 11.87% | 13.47% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6170105733224996e-05 | 2.2985115312443358e-05 | 12.17% | 13.86% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.595534662895277e-05 | 2.3134022461215785e-05 | 10.87% | 12.20% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6605858159183126e-05 | 2.2954031760120894e-05 | 13.73% | 15.91% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6786035055838848e-05 | 2.285977388611057e-05 | 14.66% | 17.18% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6421593626689502e-05 | 2.3174264721462052e-05 | 12.29% | 14.01% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.640976830916083e-05 | 2.3174622381397598e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6398683454103625e-05 | 2.3178771253543246e-05 | 12.20% | 13.89% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.629688449937142e-05 | 2.3198836821850835e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6195539707250407e-05 | 2.30103772946549e-05 | 12.16% | 13.84% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.5703693418257795e-05 | 2.2966032713196694e-05 | 10.65% | 11.92% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.61233492019952e-05 | 2.30825133813845e-05 | 11.64% | 13.17% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.623861310896482e-05 | 2.3056994985193504e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.644825158173142e-05 | 2.312982893158236e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6346313180021045e-05 | 2.3059327798047255e-05 | 12.48% | 14.25% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.601289204931827e-05 | 2.3059627733654076e-05 | 11.35% | 12.81% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6213490100985658e-05 | 2.3061324034292642e-05 | 12.02% | 13.67% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.628473402201565e-05 | 2.3532735432866686e-05 | 10.47% | 11.69% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6128496232344852e-05 | 2.4334949043023545e-05 | 6.86% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.5992478878798203e-05 | 2.311447382125778e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.651346775330279e-05 | 2.308509059748571e-05 | 12.93% | 14.85% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6882692540487804e-05 | 2.3241257279408742e-05 | 13.55% | 15.67% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6743438143783957e-05 | 2.294028949712097e-05 | 14.22% | 16.58% | 1.17x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6483024667822445e-05 | 2.320580563541238e-05 | 12.37% | 14.12% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.621567778156306e-05 | 2.303455500741323e-05 | 12.13% | 13.81% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6578086071852088e-05 | 2.3023968127783303e-05 | 13.37% | 15.44% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6525286100082587e-05 | 2.315994275761613e-05 | 12.69% | 14.53% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.5963169165746253e-05 | 2.4310242708204696e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6350744048205948e-05 | 2.3013380471476585e-05 | 12.67% | 14.50% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.587597315030712e-05 | 2.29959275865014e-05 | 11.13% | 12.52% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6646195644799232e-05 | 2.3059566119072025e-05 | 13.46% | 15.55% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.630161628570026e-05 | 2.4424320190453865e-05 | 7.14% | 7.69% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6076372797283995e-05 | 2.446811747977251e-05 | 6.17% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.216246446105255e-05 | 5.883131925310449e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.078771336497064e-05 | 5.8826585420171326e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.259930265598635e-05 | 5.847972295045801e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.063896997378576e-05 | 5.9189920109540004e-05 | 26.60% | 36.24% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.034206947141316e-05 | 5.878240977805415e-05 | 26.83% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.113817483336502e-05 | 5.885920279398772e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.860401209453553e-05 | 5.5120468951282944e-05 | 29.88% | 42.60% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.128057348237463e-05 | 5.8297290770877985e-05 | 28.28% | 39.42% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.21902791291909e-05 | 5.851195390318894e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.139840697587867e-05 | 5.934083154853671e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.141180967324224e-05 | 5.829543382281944e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.17858192249313e-05 | 5.911875097809339e-05 | 27.72% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.177250927049108e-05 | 5.941285175147073e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.196142038673288e-05 | 5.891969469975556e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.14318184015257e-05 | 5.8520885479272095e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.310484720790543e-05 | 5.8243153277009206e-05 | 29.92% | 42.69% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.216711231554872e-05 | 5.886825175493439e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.163819088184103e-05 | 5.871021949600266e-05 | 28.08% | 39.05% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.111352200721216e-05 | 5.981358416749393e-05 | 26.26% | 35.61% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.082646268091637e-05 | 5.902119707477664e-05 | 26.98% | 36.94% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.040345268497074e-05 | 5.942016912159621e-05 | 26.10% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.30034075124934e-05 | 5.877860196429023e-05 | 29.19% | 41.21% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.228190827558438e-05 | 5.852465290564695e-05 | 28.87% | 40.59% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.095963282253784e-05 | 5.9740925297632406e-05 | 26.21% | 35.52% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.241718788368347e-05 | 5.811377614291716e-05 | 29.49% | 41.82% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.177049475710459e-05 | 5.826593708391428e-05 | 28.74% | 40.34% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.007104702968477e-05 | 5.5804607695116514e-05 | 30.31% | 43.48% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.086634233798985e-05 | 5.566890149228553e-05 | 31.16% | 45.26% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.242453226953789e-05 | 5.948532526852598e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.178254555397603e-05 | 5.851582537111812e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.202949468664443e-05 | 5.8879433233590146e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.232277155220094e-05 | 6.021378788970981e-05 | 26.86% | 36.72% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.174265672023438e-05 | 5.91643796425947e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.169507065284995e-05 | 5.869376821421863e-05 | 28.16% | 39.19% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.149365619978571e-05 | 5.9314410462635474e-05 | 27.22% | 37.39% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.996190992076568e-05 | 5.590890997319929e-05 | 30.08% | 43.02% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.240671906190718e-05 | 5.926865724668126e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.132928221760124e-05 | 5.899350018432585e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.289632780407706e-05 | 5.919025847304517e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.212797779039861e-05 | 5.939863902837001e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.2878497582531e-05 | 5.901659521563369e-05 | 28.79% | 40.43% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.174297360149419e-05 | 5.915396507866067e-05 | 27.63% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.36612621218782e-05 | 5.975397849404802e-05 | 28.58% | 40.01% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.283541744155295e-05 | 5.918868004689137e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.222337080670354e-05 | 5.915612436565296e-05 | 28.05% | 38.99% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.370640608831364e-05 | 5.862040561560038e-05 | 29.97% | 42.79% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.342991931590907e-05 | 5.8921925444437385e-05 | 29.38% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.148694748871699e-05 | 5.9099390302468626e-05 | 27.47% | 37.88% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.159180330949078e-05 | 5.882598228229901e-05 | 27.90% | 38.70% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.227594222666183e-05 | 5.8769133864685334e-05 | 28.57% | 40.00% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.201489362383748e-05 | 5.876633802405518e-05 | 28.35% | 39.56% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.253777249113283e-05 | 5.9167919059475515e-05 | 28.31% | 39.50% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.212073915943329e-05 | 5.999498170008173e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.233280925086171e-05 | 5.9121066983494345e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.14967783433998e-05 | 5.8988672794737096e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.963758423325456e-05 | 5.621976246968337e-05 | 29.41% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.982526298965246e-05 | 5.677252263662684e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.237658913378394e-05 | 5.8643489525988634e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.381348660125471e-05 | 5.901795094884419e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.169603103543477e-05 | 5.874211152286444e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.1486045572402e-05 | 5.837100484779785e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.302610113237468e-05 | 5.930472244042698e-05 | 28.57% | 40.00% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.429488199070748e-05 | 5.891333855105281e-05 | 30.11% | 43.08% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.334197560967376e-05 | 5.894892525643651e-05 | 29.27% | 41.38% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.977929378773036e-05 | 5.6389643407097476e-05 | 29.32% | 41.48% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.119972440544164e-05 | 5.8893754383156685e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.347063292959929e-05 | 5.960442664246221e-05 | 28.59% | 40.04% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.339740398930703e-05 | 5.931342886674513e-05 | 28.88% | 40.60% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.296864900201171e-05 | 5.9278584513948864e-05 | 28.55% | 39.96% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.285323783086634e-05 | 5.867721658044714e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.212798670718541e-05 | 5.868532335962312e-05 | 28.54% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.319313759097335e-05 | 5.958756442734682e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.221413044956319e-05 | 5.937436611772361e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.31005388648922e-05 | 5.906699485194604e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.34487409524446e-05 | 5.92055423815437e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.157703956585299e-05 | 5.877487529097686e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.238292911273948e-05 | 5.8925961187384015e-05 | 28.47% | 39.81% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.226330360433135e-05 | 5.86074373502569e-05 | 28.76% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.407033951334574e-05 | 5.88009409482939e-05 | 30.06% | 42.97% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.310032448995181e-05 | 5.862917651506322e-05 | 29.45% | 41.74% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.160534240658915e-05 | 5.8825414874816786e-05 | 27.91% | 38.72% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.229732702191599e-05 | 5.8603230350215134e-05 | 28.79% | 40.43% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.231861697450663e-05 | 5.9230680394394526e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.29217807789109e-05 | 5.8217424909638625e-05 | 29.79% | 42.43% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.988982090760821e-05 | 5.590066018919787e-05 | 30.03% | 42.91% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.007950593754993e-05 | 5.6064359523233894e-05 | 29.99% | 42.83% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.303819569654426e-05 | 5.84415736429943e-05 | 29.62% | 42.09% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.127728846983843e-05 | 5.736521830655608e-05 | 29.42% | 41.68% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.199663717831768e-05 | 5.702199716665752e-05 | 30.46% | 43.80% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.233355531115878e-05 | 5.703315516111861e-05 | 30.73% | 44.36% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.14754145580197e-05 | 5.7512514829124875e-05 | 29.41% | 41.67% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.176687654370469e-05 | 5.746940123048258e-05 | 29.72% | 42.28% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.096191775486349e-05 | 5.683658355483225e-05 | 29.80% | 42.45% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 8.001833407017259e-05 | 5.4524097220916235e-05 | 31.86% | 46.76% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.09685056140073e-05 | 5.7027887793476546e-05 | 29.57% | 41.98% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.132553838944405e-05 | 5.8737463916799714e-05 | 27.77% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.203248199349888e-05 | 5.754786344373439e-05 | 29.85% | 42.55% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010334480585559122 | 7.95138977942868e-05 | 23.06% | 29.97% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.929931345115974e-05 | 5.530294468304709e-05 | 30.26% | 43.39% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.242996198207072e-05 | 5.9684667178785146e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.278584816998604e-05 | 5.9061375659454196e-05 | 28.66% | 40.17% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.207323230146422e-05 | 5.813149892336308e-05 | 29.17% | 41.19% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.181087294234123e-05 | 5.8010233022861507e-05 | 29.09% | 41.03% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.116011152621594e-05 | 5.759329926140287e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.94913062037942e-05 | 7.239752042710053e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.98556828548223e-05 | 5.469515874940215e-05 | 31.51% | 46.00% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.991826021284559e-05 | 7.311273748277797e-05 | 26.83% | 36.66% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.15542925360716e-05 | 5.712011888944354e-05 | 29.96% | 42.78% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.102929190660198e-05 | 5.726658205278375e-05 | 29.33% | 41.49% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.086629872863095e-05 | 5.79391100525774e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.125989398324994e-05 | 5.812772740880921e-05 | 28.47% | 39.80% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.18761830822823e-05 | 5.850229652898935e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.227134349351595e-05 | 5.736285510684697e-05 | 30.28% | 43.42% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.004288240657182e-05 | 5.4763467493863124e-05 | 31.58% | 46.16% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.949370302169115e-05 | 5.436249157246382e-05 | 31.61% | 46.23% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.033598699930045e-05 | 5.7330848591833285e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.936820724954915e-05 | 5.7686215797947514e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.077926405182589e-05 | 5.802295265653636e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.978421550083952e-05 | 5.807615309688254e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.102609492281682e-05 | 5.7831282062849974e-05 | 28.63% | 40.11% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.049139045537208e-05 | 5.8653479326881974e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.027272217595847e-05 | 5.749311642385781e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.97602191558108e-05 | 5.413197097845026e-05 | 32.13% | 47.34% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.051180431507461e-05 | 5.685746478055181e-05 | 29.38% | 41.60% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.94839215604339e-05 | 5.7407133853067195e-05 | 27.78% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.036060745011976e-05 | 5.770832245146652e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010468064865455254 | 7.795744114725508e-05 | 25.53% | 34.28% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.97764916883993e-05 | 5.706195583837408e-05 | 28.47% | 39.81% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.083868410941491e-05 | 5.664103371426885e-05 | 29.93% | 42.72% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.997861541076252e-05 | 5.7187333764764246e-05 | 28.50% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.955763685881965e-05 | 5.6359400973995896e-05 | 29.16% | 41.16% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.981866509590801e-05 | 5.742658824456118e-05 | 28.05% | 38.99% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.041390550624833e-05 | 5.7013146807172495e-05 | 29.10% | 41.04% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.712889095535903e-05 | 7.11218674118405e-05 | 26.78% | 36.57% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.038723158679853e-05 | 5.6900831417609226e-05 | 29.22% | 41.28% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.928981631839991e-05 | 7.217430111781888e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.090275824887763e-05 | 5.7419414189728556e-05 | 29.03% | 40.90% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.951524164116293e-05 | 5.6981931298750955e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.946264903676989e-05 | 5.7698169496365615e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.012751211936729e-05 | 5.7393786761255914e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.010254490034071e-05 | 5.664256305521196e-05 | 29.29% | 41.42% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.925920753771262e-05 | 5.759193733047152e-05 | 27.34% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.794754279150391e-05 | 5.44200992367421e-05 | 30.18% | 43.23% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.820444043573222e-05 | 5.368425830583903e-05 | 31.35% | 45.67% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.018420885544436e-05 | 5.7670974067459594e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_new['']` | 7.173663251787065e-05 | 3.458476293331719e-05 | 51.79% | 107.42% | 2.07x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.273228027959987e-05 | 4.9730144651475775e-05 | 46.37% | 86.47% | 1.86x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.364382374362694e-05 | 5.008426308520661e-05 | 46.52% | 86.97% | 1.87x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.759926267103871e-05 | 4.617470422324786e-05 | 47.29% | 89.71% | 1.90x | ✅ |
| `hexbytes_new['0x']` | 7.747455386977928e-05 | 3.6081998492510166e-05 | 53.43% | 114.72% | 2.15x | ✅ |
| `hexbytes_new['0x1234']` | 8.555924933540767e-05 | 4.359130560639934e-05 | 49.05% | 96.28% | 1.96x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.60452695636541e-05 | 4.386125584846758e-05 | 49.03% | 96.18% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.661315956224866e-05 | 4.38293342874065e-05 | 49.40% | 97.61% | 1.98x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.690362742123429e-05 | 4.406165784907602e-05 | 49.30% | 97.23% | 1.97x | ✅ |
| `hexbytes_new['abc']` | 8.407123030682286e-05 | 4.495456688889454e-05 | 46.53% | 87.01% | 1.87x | ✅ |
| `hexbytes_new['deadbeef']` | 7.823365638187167e-05 | 3.987227999141698e-05 | 49.03% | 96.21% | 1.96x | ✅ |
| `hexbytes_new[0-9]` | 4.514042828003808e-05 | 2.4845726733881732e-05 | 44.96% | 81.68% | 1.82x | ✅ |
| `hexbytes_new[0]` | 0.00012357979927511285 | 5.855055957652015e-05 | 52.62% | 111.07% | 2.11x | ✅ |
| `hexbytes_new[123456]` | 0.00012709497949527237 | 6.22172666307607e-05 | 51.05% | 104.28% | 2.04x | ✅ |
| `hexbytes_new[2**16]` | 0.00012760960084280137 | 6.241048949144321e-05 | 51.09% | 104.47% | 2.04x | ✅ |
| `hexbytes_new[2**256-1]` | 0.000127876456159039 | 6.778841878621794e-05 | 46.99% | 88.64% | 1.89x | ✅ |
| `hexbytes_new[2**32]` | 0.00012912688600170543 | 6.527429560847489e-05 | 49.45% | 97.82% | 1.98x | ✅ |
| `hexbytes_new[2**64]` | 0.00012932719351878104 | 6.56975019863123e-05 | 49.20% | 96.85% | 1.97x | ✅ |
| `hexbytes_new[2**8]` | 0.00012761280527332666 | 6.144926800810075e-05 | 51.85% | 107.67% | 2.08x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.5526765687818024e-05 | 2.531319603711753e-05 | 44.40% | 79.85% | 1.80x | ✅ |
| `hexbytes_new[False]` | 6.240522681895294e-05 | 2.6093733763122415e-05 | 58.19% | 139.16% | 2.39x | ✅ |
| `hexbytes_new[True]` | 6.147919580166633e-05 | 2.603129267227767e-05 | 57.66% | 136.17% | 2.36x | ✅ |
| `hexbytes_new[all byte values]` | 4.5836663180969165e-05 | 2.5117082812045897e-05 | 45.20% | 82.49% | 1.82x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.490835504981953e-05 | 2.4958035255346677e-05 | 44.42% | 79.94% | 1.80x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.534357980131828e-05 | 2.5060100780472577e-05 | 44.73% | 80.94% | 1.81x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.4934762981385585e-05 | 2.4827333626375446e-05 | 44.75% | 80.99% | 1.81x | ✅ |
| `hexbytes_new[b'']` | 4.521932323291899e-05 | 2.4900112945471052e-05 | 44.93% | 81.60% | 1.82x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.525945213237442e-05 | 2.490616163649723e-05 | 44.97% | 81.72% | 1.82x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.501302663272004e-05 | 2.4946568752132763e-05 | 44.58% | 80.44% | 1.80x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.5039391450232594e-05 | 2.5147139839806616e-05 | 44.17% | 79.10% | 1.79x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.93811877080336e-05 | 3.7635148236039927e-05 | 36.62% | 57.78% | 1.58x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.555088697529741e-05 | 2.5107123386709807e-05 | 44.88% | 81.43% | 1.81x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.519250457835166e-05 | 2.5013351999156232e-05 | 44.65% | 80.67% | 1.81x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.421067589532868e-05 | 2.500535570200284e-05 | 43.44% | 76.80% | 1.77x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.428762229506352e-05 | 2.4878315199657578e-05 | 43.83% | 78.02% | 1.78x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.549737887740255e-05 | 2.510035182999274e-05 | 44.83% | 81.26% | 1.81x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.5581859251544004e-05 | 2.5295285428011166e-05 | 44.51% | 80.20% | 1.80x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.403649237227217e-05 | 3.205917674412866e-05 | 40.67% | 68.55% | 1.69x | ✅ |
| `hexbytes_new[b'abc']` | 4.5255304980572216e-05 | 2.500269851058294e-05 | 44.75% | 81.00% | 1.81x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 7.111712323348034e-05 | 3.589817200918621e-05 | 49.52% | 98.11% | 1.98x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.259957137036138e-05 | 3.596605659643624e-05 | 50.46% | 101.86% | 2.02x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.262260456968335e-05 | 3.6956218312480815e-05 | 49.11% | 96.51% | 1.97x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 7.150625955546695e-05 | 3.549977870673864e-05 | 50.35% | 101.43% | 2.01x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 7.222538084962658e-05 | 3.5873055577473024e-05 | 50.33% | 101.34% | 2.01x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.105094283916749e-05 | 3.5093922423535176e-05 | 50.61% | 102.46% | 2.02x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.893621199498625e-05 | 3.328822189793627e-05 | 51.71% | 107.09% | 2.07x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 7.133018913147693e-05 | 3.541523242581237e-05 | 50.35% | 101.41% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.1421566737625e-05 | 3.549598702072158e-05 | 50.30% | 101.21% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.252845651995463e-05 | 3.563581843614683e-05 | 50.87% | 103.53% | 2.04x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.473731192277241e-05 | 5.590311111082064e-05 | 40.99% | 69.47% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 7.130140439823194e-05 | 3.5568021761829706e-05 | 50.12% | 100.46% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.040972509618193e-05 | 3.561956496949829e-05 | 49.41% | 97.67% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 7.161123921042344e-05 | 3.5456141179258063e-05 | 50.49% | 101.97% | 2.02x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 7.171403084352643e-05 | 3.547159085772263e-05 | 50.54% | 102.17% | 2.02x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 7.146803553184858e-05 | 3.555010142311779e-05 | 50.26% | 101.03% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.199069315127906e-05 | 3.560327276560512e-05 | 50.54% | 102.20% | 2.02x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.754874009225688e-05 | 4.909645414031372e-05 | 43.92% | 78.32% | 1.78x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 7.254476112886449e-05 | 3.5447048662087456e-05 | 51.14% | 104.66% | 2.05x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.634589549651097e-05 | 5.104518980895969e-05 | 40.88% | 69.16% | 1.69x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.121525846048925e-05 | 3.554750609919414e-05 | 50.08% | 100.34% | 2.00x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 7.095879208235918e-05 | 3.548866444789349e-05 | 49.99% | 99.95% | 2.00x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 7.264033958455406e-05 | 3.610682184628244e-05 | 50.29% | 101.18% | 2.01x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 7.262026923966438e-05 | 3.532062834877554e-05 | 51.36% | 105.60% | 2.06x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.223901516888606e-05 | 3.563236278496975e-05 | 50.67% | 102.73% | 2.03x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.173342191244289e-05 | 3.5633458565158165e-05 | 50.33% | 101.31% | 2.01x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.182460181797472e-05 | 3.535271086222659e-05 | 50.78% | 103.17% | 2.03x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.199809353918508e-05 | 3.5174971400291855e-05 | 51.14% | 104.69% | 2.05x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.165803930346972e-05 | 3.556202079472241e-05 | 50.37% | 101.50% | 2.02x | ✅ |
| `hexbytes_new[long alternating]` | 5.31097770994216e-05 | 3.1773075728100354e-05 | 40.17% | 67.15% | 1.67x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.507821809632537e-05 | 4.011267757456777e-05 | 52.85% | 112.10% | 2.12x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.625071884385903e-05 | 4.061057322252697e-05 | 52.92% | 112.38% | 2.12x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.61470411200062e-05 | 4.0226299618414264e-05 | 53.31% | 114.16% | 2.14x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.762088835141855e-05 | 4.093660347500446e-05 | 53.28% | 114.04% | 2.14x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.620420352646008e-05 | 4.1651002461896136e-05 | 51.68% | 106.97% | 2.07x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.533261709132897e-05 | 3.971484930285852e-05 | 53.46% | 114.86% | 2.15x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.233849901496423e-05 | 3.791145359790248e-05 | 53.96% | 117.19% | 2.17x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.660271171898996e-05 | 3.9616432341056546e-05 | 54.25% | 118.60% | 2.19x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.61620066869358e-05 | 4.056597899410772e-05 | 52.92% | 112.40% | 2.12x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.66901435156027e-05 | 4.104142835663629e-05 | 52.66% | 111.23% | 2.11x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010908796985511337 | 6.264133299242442e-05 | 42.58% | 74.15% | 1.74x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.565208602953515e-05 | 4.116645413243992e-05 | 51.94% | 108.06% | 2.08x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.629525105606268e-05 | 4.043135068956586e-05 | 53.15% | 113.44% | 2.13x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.482017250831429e-05 | 4.062927380745419e-05 | 52.10% | 108.77% | 2.09x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.617206406596732e-05 | 4.0183893957667736e-05 | 53.37% | 114.44% | 2.14x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.569273165545556e-05 | 4.091354604933359e-05 | 52.26% | 109.45% | 2.09x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.678977833435791e-05 | 3.990434049215013e-05 | 54.02% | 117.49% | 2.17x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010146473728388128 | 5.474578841920251e-05 | 46.04% | 85.34% | 1.85x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.564451718344954e-05 | 3.9553173434411925e-05 | 53.82% | 116.53% | 2.17x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.00010147240916658155 | 5.680520907421316e-05 | 44.02% | 78.63% | 1.79x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.621790386355137e-05 | 4.119785972157272e-05 | 52.22% | 109.28% | 2.09x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.562976444147253e-05 | 4.0761820467325324e-05 | 52.40% | 110.07% | 2.10x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.503409450701965e-05 | 3.945760529914218e-05 | 53.60% | 115.51% | 2.16x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.44488919636808e-05 | 4.0747710526320344e-05 | 51.75% | 107.25% | 2.07x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.478186089186116e-05 | 4.099665844868701e-05 | 51.64% | 106.80% | 2.07x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.768405265040633e-05 | 4.0487046698538266e-05 | 53.83% | 116.57% | 2.17x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.48809562817688e-05 | 4.0214408003221416e-05 | 52.62% | 111.07% | 2.11x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.542876678420594e-05 | 4.050474776375736e-05 | 52.59% | 110.91% | 2.11x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.712304672478666e-05 | 3.997654724193587e-05 | 54.11% | 117.94% | 2.18x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.52536214532478e-05 | 2.504923136075216e-05 | 44.65% | 80.66% | 1.81x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.477711282152006e-05 | 2.4837954501720877e-05 | 44.53% | 80.28% | 1.80x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.4858392093261304e-05 | 2.4847461310042897e-05 | 44.61% | 80.54% | 1.81x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.52091003245682e-05 | 2.482068884191992e-05 | 45.10% | 82.14% | 1.82x | ✅ |
| `hexbytes_new[palindrome]` | 4.4786752096052017e-05 | 2.4811819209044154e-05 | 44.60% | 80.51% | 1.81x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.515285580315532e-05 | 2.5460003097572265e-05 | 43.61% | 77.35% | 1.77x | ✅ |
| `hexbytes_new[single 0xff]` | 4.4494103595831184e-05 | 2.4915204951344966e-05 | 44.00% | 78.58% | 1.79x | ✅ |
| `hexbytes_new[single null byte]` | 4.453983847251604e-05 | 2.4883639927086194e-05 | 44.13% | 78.99% | 1.79x | ✅ |
| `hexbytes_new[two patterns]` | 4.5280889639053086e-05 | 2.5068562219062685e-05 | 44.64% | 80.63% | 1.81x | ✅ |
| `hexbytes_repr[0-9]` | 3.268710967483135e-05 | 1.5165011455762294e-05 | 53.61% | 115.54% | 2.16x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012609939474835224 | 4.1363062306729685e-05 | 67.20% | 204.86% | 3.05x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012625382294224275 | 4.133844550182231e-05 | 67.26% | 205.42% | 3.05x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.126228183966683e-05 | 2.0177869451503005e-05 | 60.64% | 154.05% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.144705543140832e-05 | 2.0286853790308108e-05 | 60.57% | 153.60% | 2.54x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.452524102607736e-05 | 1.83569675573733e-05 | 58.77% | 142.55% | 2.43x | ✅ |
| `hexbytes_repr[b'']` | 2.3274135394479778e-05 | 1.2002882186726025e-05 | 48.43% | 93.90% | 1.94x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.9302909378228845e-05 | 1.719017198710534e-05 | 56.26% | 128.64% | 2.29x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.961870114683138e-05 | 1.4384838667720393e-05 | 51.43% | 105.90% | 2.06x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.537476235559746e-05 | 2.3638839531443953e-05 | 63.84% | 176.56% | 2.77x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007687565638453774 | 0.00022451291674782984 | 70.80% | 242.41% | 3.42x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9453432410972552e-05 | 1.4255790753297004e-05 | 51.60% | 106.61% | 2.07x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.0011395166050088e-05 | 1.4598817249421121e-05 | 51.36% | 105.57% | 2.06x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1901982677116835e-05 | 1.4936181106911942e-05 | 53.18% | 113.59% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.178732806362342e-05 | 1.4935401429465434e-05 | 53.01% | 112.83% | 2.13x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.96025615475561e-05 | 1.4289206030549434e-05 | 51.73% | 107.17% | 2.07x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.118271880687982e-05 | 2.0241265001360877e-05 | 60.45% | 152.86% | 2.53x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00041088382263455874 | 0.0001194941053676914 | 70.92% | 243.85% | 3.44x | ✅ |
| `hexbytes_repr[b'abc']` | 2.92500243950137e-05 | 1.4333864908413759e-05 | 51.00% | 104.06% | 2.04x | ✅ |
| `hexbytes_repr[long alternating]` | 0.000406696371848655 | 0.00012339191248773138 | 69.66% | 229.60% | 3.30x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010166247779872133 | 3.42517385692763e-05 | 66.31% | 196.81% | 2.97x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.269222329931157e-05 | 1.5199249068632451e-05 | 53.51% | 115.09% | 2.15x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.1016192684636526e-05 | 1.4759560815395373e-05 | 52.41% | 110.14% | 2.10x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9976173250188476e-05 | 1.450440710877731e-05 | 51.61% | 106.67% | 2.07x | ✅ |
| `hexbytes_repr[palindrome]` | 3.507290393533578e-05 | 1.6092325354665943e-05 | 54.12% | 117.95% | 2.18x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.431797204943509e-05 | 2.3735704233597187e-05 | 63.10% | 170.98% | 2.71x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8719854712785916e-05 | 1.4218441997586297e-05 | 50.49% | 101.99% | 2.02x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8864154442366075e-05 | 1.410011148476491e-05 | 51.15% | 104.71% | 2.05x | ✅ |
| `hexbytes_repr[two patterns]` | 5.174944576914282e-05 | 2.0289117242280153e-05 | 60.79% | 155.06% | 2.55x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.733408320913077e-05 | 1.4645784038758768e-05 | 15.51% | 18.36% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.435890245653969e-05 | 4.09430625985849e-05 | 7.70% | 8.34% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.440366008223518e-05 | 4.1020983401578516e-05 | 7.62% | 8.25% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.291746774782621e-05 | 1.996717929072401e-05 | 12.87% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2549801208005882e-05 | 1.9839471111227924e-05 | 12.02% | 13.66% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.1192593380145658e-05 | 1.768536722610338e-05 | 16.55% | 19.83% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.1220891610623365e-05 | 1.1554400272992174e-05 | -2.97% | -2.89% | 0.97x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.938557653959248e-05 | 1.683632049087562e-05 | 13.15% | 15.14% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.664511225766897e-05 | 1.4003281085894108e-05 | 15.87% | 18.87% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6469209877391792e-05 | 2.317378555857643e-05 | 12.45% | 14.22% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0002263564926866769 | 0.00022456220873277768 | 0.79% | 0.80% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6531557671912177e-05 | 1.4243489745779123e-05 | 13.84% | 16.06% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.66584006952561e-05 | 1.4320292280952926e-05 | 14.04% | 16.33% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7116533831005567e-05 | 1.4392601358565644e-05 | 15.91% | 18.93% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7068713321466876e-05 | 1.459922311414581e-05 | 14.47% | 16.92% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.65791335571849e-05 | 1.4226714552784092e-05 | 14.19% | 16.54% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2628528837606343e-05 | 1.975682559457623e-05 | 12.69% | 14.54% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001256660515479814 | 0.00012283011988735947 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.642516334390593e-05 | 1.420501111699863e-05 | 13.52% | 15.63% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012610452641691896 | 0.00012356493494720654 | 2.01% | 2.06% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.735107773447766e-05 | 3.418876489976262e-05 | 8.47% | 9.25% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7211825452898842e-05 | 1.4650487263703858e-05 | 14.88% | 17.48% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6898558886489917e-05 | 1.4301208729784148e-05 | 15.37% | 18.16% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6591458931990508e-05 | 1.4335599855166677e-05 | 13.60% | 15.74% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.8238900188430606e-05 | 1.5560168431183704e-05 | 14.69% | 17.22% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6298462682706338e-05 | 2.3193925852738653e-05 | 11.81% | 13.39% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.6198134703394408e-05 | 1.3594241339565413e-05 | 16.08% | 19.15% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.612709308262001e-05 | 1.3624388245696523e-05 | 15.52% | 18.37% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.260316263352173e-05 | 1.974778160026696e-05 | 12.63% | 14.46% | 1.14x | ✅ |
