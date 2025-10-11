#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.5436390744287646e-05 | 2.3298060767530137e-05 | 8.41% | 9.18% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.5400365607685962e-05 | 2.3467228214521195e-05 | 7.61% | 8.24% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.5549229725974316e-05 | 2.3351058154944697e-05 | 8.60% | 9.41% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.5437739259076793e-05 | 2.3540827085013496e-05 | 7.46% | 8.06% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.5674348737415375e-05 | 2.3742790301913945e-05 | 7.52% | 8.14% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5491474823110162e-05 | 2.3257605856557487e-05 | 8.76% | 9.60% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.5738816411933375e-05 | 2.3530708777910685e-05 | 8.58% | 9.38% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.5305566474965747e-05 | 2.3459397476595695e-05 | 7.30% | 7.87% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.5547081778212753e-05 | 2.3473099516836466e-05 | 8.12% | 8.84% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.5586915570337544e-05 | 2.3400606215587494e-05 | 8.54% | 9.34% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.5719230727753942e-05 | 2.3538405277197263e-05 | 8.48% | 9.26% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5496031708198466e-05 | 2.3530038047080494e-05 | 7.71% | 8.36% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.556397405178346e-05 | 2.3463523428732082e-05 | 8.22% | 8.95% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.5269436344364915e-05 | 2.3532571587538634e-05 | 6.87% | 7.38% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.505795359803719e-05 | 2.351865758316885e-05 | 6.14% | 6.54% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.5378498443784416e-05 | 2.3570616333601e-05 | 7.12% | 7.67% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.536796217605163e-05 | 2.3583271365780484e-05 | 7.04% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.558087570716293e-05 | 2.3413728788139762e-05 | 8.47% | 9.26% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.5490106687330945e-05 | 2.3395409145218406e-05 | 8.22% | 8.95% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.560799864426915e-05 | 2.351785908715696e-05 | 8.16% | 8.89% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.573611102501675e-05 | 2.3222284491434522e-05 | 9.77% | 10.83% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.5324234021086154e-05 | 2.3296943235617554e-05 | 8.01% | 8.70% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.530579829640371e-05 | 2.3240805817805835e-05 | 8.16% | 8.89% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.5632634911864418e-05 | 2.3432652653453046e-05 | 8.58% | 9.39% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.5570853998508186e-05 | 2.323212094177341e-05 | 9.15% | 10.07% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.5583188435173564e-05 | 2.3311410763867386e-05 | 8.88% | 9.75% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.425530915544807e-05 | 2.2467727704898727e-05 | 7.37% | 7.96% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.4441118443996986e-05 | 2.2517137447786105e-05 | 7.87% | 8.54% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.440579785525404e-05 | 2.2424893845780257e-05 | 8.12% | 8.83% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.4292706079575542e-05 | 2.2506039876648737e-05 | 7.35% | 7.94% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.4484199291201903e-05 | 2.2466784820937515e-05 | 8.24% | 8.98% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.4475377456011266e-05 | 2.2415968948492115e-05 | 8.41% | 9.19% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.4513685888977224e-05 | 2.2235467255586656e-05 | 9.29% | 10.25% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.4492978651003103e-05 | 2.2385152413986386e-05 | 8.61% | 9.42% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.4337049572007555e-05 | 2.2382405828980003e-05 | 8.03% | 8.73% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.441957011353223e-05 | 2.2227685794710123e-05 | 8.98% | 9.86% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.4276485645007908e-05 | 2.2192896089175888e-05 | 8.58% | 9.39% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.434313194505011e-05 | 2.236287414945353e-05 | 8.13% | 8.86% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.4543882505371466e-05 | 2.2393841465350297e-05 | 8.76% | 9.60% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.432225131390031e-05 | 2.230176767762654e-05 | 8.31% | 9.06% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.4480194400277603e-05 | 2.219871319944255e-05 | 9.32% | 10.28% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.4298331652397016e-05 | 2.2189630713562568e-05 | 8.68% | 9.50% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.4413579879212683e-05 | 2.210479321646131e-05 | 9.46% | 10.44% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.409775675363341e-05 | 2.2434224595596274e-05 | 6.90% | 7.42% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.41987146251888e-05 | 2.2444441559359366e-05 | 7.25% | 7.82% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.4104413317004765e-05 | 2.2335514522306402e-05 | 7.34% | 7.92% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.4394259474592607e-05 | 2.239048589564657e-05 | 8.21% | 8.95% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.440301243600659e-05 | 2.2437271112497383e-05 | 8.06% | 8.76% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.4242448994183863e-05 | 2.2437469882525066e-05 | 7.45% | 8.04% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.4825615115671096e-05 | 2.226703169349708e-05 | 10.31% | 11.49% | 1.11x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.413660588064052e-05 | 2.2431825360397113e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.4411852278529296e-05 | 2.2402058264078315e-05 | 8.23% | 8.97% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.4380409162948406e-05 | 2.246555971767355e-05 | 7.85% | 8.52% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.4314100479497665e-05 | 2.2459675745532846e-05 | 7.63% | 8.26% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.4438051524457385e-05 | 2.2509230804432465e-05 | 7.89% | 8.57% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.4029808760491994e-05 | 2.216360634596092e-05 | 7.77% | 8.42% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3875755061879934e-05 | 2.2281593636027693e-05 | 6.68% | 7.15% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.4408380315874422e-05 | 2.2270611284492803e-05 | 8.76% | 9.60% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.4323445644876098e-05 | 2.2586256381460634e-05 | 7.14% | 7.69% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.4038248820795232e-05 | 2.2528695523023342e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.4420300114894402e-05 | 2.221527693803759e-05 | 9.03% | 9.93% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.4384156844581877e-05 | 2.225763384035542e-05 | 8.72% | 9.55% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.4365656791525397e-05 | 2.2389575239502162e-05 | 8.11% | 8.83% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.4221619457365466e-05 | 2.1734473546002438e-05 | 10.27% | 11.44% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.4412605883087305e-05 | 2.212056072044959e-05 | 9.39% | 10.36% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4296365092895975e-05 | 2.231355959747814e-05 | 8.16% | 8.89% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.4302605305069972e-05 | 2.3262794119606948e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.4191809159784125e-05 | 2.2228813781773265e-05 | 8.11% | 8.83% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.4311386111335956e-05 | 2.209357962047261e-05 | 9.12% | 10.04% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.408560796097078e-05 | 2.2233451119446485e-05 | 7.69% | 8.33% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.409388487542799e-05 | 2.2242072819639656e-05 | 7.69% | 8.33% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.430279197799932e-05 | 2.2280712963374035e-05 | 8.32% | 9.08% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.41203127865342e-05 | 2.213494879548349e-05 | 8.23% | 8.97% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3908627241751444e-05 | 2.27933696010802e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.437946087880298e-05 | 2.236875214454886e-05 | 8.25% | 8.99% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3679013792369127e-05 | 2.283542214199951e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3963660290163455e-05 | 2.2321128293399032e-05 | 6.85% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.433860203319467e-05 | 2.473181047495741e-05 | -1.62% | -1.59% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.4041832892813843e-05 | 2.248552031651306e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3770892374334567e-05 | 2.2544529045539747e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.4244415569536655e-05 | 2.2299320075785745e-05 | 8.02% | 8.72% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.4098462586603336e-05 | 2.2502901245824784e-05 | 6.62% | 7.09% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.4110946373082613e-05 | 2.2347724030143746e-05 | 7.31% | 7.89% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.4242216937983412e-05 | 2.2377513338861933e-05 | 7.69% | 8.33% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.4210702185961175e-05 | 2.2337357910343283e-05 | 7.74% | 8.39% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3966912707784524e-05 | 2.2283291293721078e-05 | 7.02% | 7.56% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.417068364124171e-05 | 2.2471157879296735e-05 | 7.03% | 7.56% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.4119396593296104e-05 | 2.232720463964139e-05 | 7.43% | 8.03% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.4276281255627565e-05 | 2.2358396502662854e-05 | 7.90% | 8.58% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.411072650538012e-05 | 2.244543648430775e-05 | 6.91% | 7.42% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.4085824435471224e-05 | 2.2336828480852336e-05 | 7.26% | 7.83% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4283479015007948e-05 | 2.2398580770554523e-05 | 7.76% | 8.42% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.4233424615951713e-05 | 2.217216179934468e-05 | 8.51% | 9.30% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.425914751097879e-05 | 2.2319380354041405e-05 | 8.00% | 8.69% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3940192138007366e-05 | 2.2254581270240258e-05 | 7.04% | 7.57% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.4164114413798258e-05 | 2.2289000902806753e-05 | 7.76% | 8.41% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.4085671639068005e-05 | 2.5018220437773233e-05 | -3.87% | -3.73% | 0.96x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.402746112709058e-05 | 2.2669214334218074e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.4128129120932564e-05 | 2.240955595282167e-05 | 7.12% | 7.67% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.4205364900264775e-05 | 2.2319222975850516e-05 | 7.79% | 8.45% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.418512116502596e-05 | 2.227853400996357e-05 | 7.88% | 8.56% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.4206976523327436e-05 | 2.2526124537792325e-05 | 6.94% | 7.46% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.414621261861482e-05 | 2.219893304676724e-05 | 8.06% | 8.77% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.419102208392585e-05 | 2.230622513775129e-05 | 7.79% | 8.45% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.4499102826859664e-05 | 2.2527231744481515e-05 | 8.05% | 8.75% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.4123208384817657e-05 | 2.2479229333779515e-05 | 6.81% | 7.31% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.417600487612528e-05 | 2.234041364882286e-05 | 7.59% | 8.22% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.4164828935948726e-05 | 2.2326618819403376e-05 | 7.61% | 8.23% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.418683182291497e-05 | 2.2449368449538876e-05 | 7.18% | 7.74% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.446492541857315e-05 | 2.2192763839092597e-05 | 9.29% | 10.24% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.437131062647012e-05 | 2.2434512676347666e-05 | 7.95% | 8.63% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.4165870800931403e-05 | 2.2252134988312418e-05 | 7.92% | 8.60% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.452448178450455e-05 | 2.2296391745875273e-05 | 9.09% | 9.99% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.4203009258323277e-05 | 2.2183499806017555e-05 | 8.34% | 9.10% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.4373472379242054e-05 | 2.2165594036291073e-05 | 9.06% | 9.96% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.433677236957727e-05 | 2.2705366834254867e-05 | 6.70% | 7.19% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4231354118415342e-05 | 2.2115543246438045e-05 | 8.73% | 9.57% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.4043406668064546e-05 | 2.215708643615461e-05 | 7.85% | 8.51% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.4185451277580215e-05 | 2.220252070115237e-05 | 8.20% | 8.93% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.416578629036297e-05 | 2.245919535217012e-05 | 7.06% | 7.60% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.424979064476921e-05 | 2.228048537107206e-05 | 8.12% | 8.84% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.418140350342552e-05 | 2.2413704386948553e-05 | 7.31% | 7.89% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.421734347254145e-05 | 2.2279926524545042e-05 | 8.00% | 8.70% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.409337727472331e-05 | 2.2309218636955755e-05 | 7.41% | 8.00% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.4291450916342807e-05 | 2.22782199888511e-05 | 8.29% | 9.04% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.4055573142262087e-05 | 2.225896496132687e-05 | 7.47% | 8.07% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.4094594480437723e-05 | 2.220905889229611e-05 | 7.83% | 8.49% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.4365135026216626e-05 | 2.2154709109780438e-05 | 9.07% | 9.98% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.40915407689209e-05 | 2.23016260325464e-05 | 7.43% | 8.03% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.419838867551514e-05 | 2.2242963906091817e-05 | 8.08% | 8.79% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.4225362751715408e-05 | 2.2376983789720502e-05 | 7.63% | 8.26% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.4093413862181306e-05 | 2.2439733112820257e-05 | 6.86% | 7.37% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.4205534562215246e-05 | 2.233192433220199e-05 | 7.74% | 8.39% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.4142128581668316e-05 | 2.226675666345603e-05 | 7.77% | 8.42% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.392549092912116e-05 | 2.239951130004797e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.4202291480289368e-05 | 2.238281495459324e-05 | 7.52% | 8.13% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.4111002907152292e-05 | 2.2311781598417136e-05 | 7.46% | 8.06% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3886035191243716e-05 | 2.252541453686808e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.4071647836660192e-05 | 2.2160847006709516e-05 | 7.94% | 8.62% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.40300307229132e-05 | 2.2472360642414388e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.4049626065524357e-05 | 2.242792441163613e-05 | 6.74% | 7.23% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3952142444911515e-05 | 2.241171927364177e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.4331249666087732e-05 | 2.2173648188021472e-05 | 8.87% | 9.73% | 1.10x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.412433860381172e-05 | 2.220345002452317e-05 | 7.96% | 8.65% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3746688109508442e-05 | 2.228078712742679e-05 | 6.17% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.421384480853815e-05 | 2.237487865437409e-05 | 7.59% | 8.22% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.395574784696316e-05 | 2.2419082520404426e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.4261678938690255e-05 | 2.23500368260087e-05 | 7.88% | 8.55% | 1.09x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.41532253466421e-05 | 2.2301447254628233e-05 | 7.67% | 8.30% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.4166279302246413e-05 | 2.2334181152484028e-05 | 7.58% | 8.20% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.419783483995442e-05 | 2.2305215077217098e-05 | 7.82% | 8.49% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.4166691393135993e-05 | 2.234579277765461e-05 | 7.53% | 8.15% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.415451803450219e-05 | 2.2344492522918423e-05 | 7.49% | 8.10% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.4461668779704913e-05 | 2.2468695798607122e-05 | 8.15% | 8.87% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.4526896095555104e-05 | 2.2350740438410917e-05 | 8.87% | 9.74% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.4143876749553816e-05 | 2.247950545067045e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3826695283883187e-05 | 2.2581648821141653e-05 | 5.23% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.4331468357782205e-05 | 2.2098955099183076e-05 | 9.18% | 10.10% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.430473650514047e-05 | 2.2990063662705162e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.4267668357544978e-05 | 2.2323805960041367e-05 | 8.01% | 8.71% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.408882952909903e-05 | 2.2374081719132762e-05 | 7.12% | 7.66% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.4414670015407634e-05 | 2.2259146179606612e-05 | 8.83% | 9.68% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3977866052149447e-05 | 2.2838356073548533e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.4916472762100033e-05 | 2.2197529395813842e-05 | 10.91% | 12.25% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.4429348633123922e-05 | 2.2397836996968996e-05 | 8.32% | 9.07% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.442525775135446e-05 | 2.2398005774624392e-05 | 8.30% | 9.05% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.4426943229586223e-05 | 2.231260201431081e-05 | 8.66% | 9.48% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.4258021054845778e-05 | 2.2375936533533025e-05 | 7.76% | 8.41% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.4595723090018547e-05 | 2.226629253598567e-05 | 9.47% | 10.46% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.4184849605882023e-05 | 2.240437206199145e-05 | 7.36% | 7.95% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.4449071312681704e-05 | 2.2223056236256117e-05 | 9.10% | 10.02% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.4600495698672144e-05 | 2.2241351518153398e-05 | 9.59% | 10.61% | 1.11x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.109822745421519e-05 | 5.934696680707812e-05 | 26.82% | 36.65% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.237302343490868e-05 | 5.937544201425723e-05 | 27.92% | 38.73% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.243582634270907e-05 | 5.91607607292822e-05 | 28.23% | 39.34% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.284119780003567e-05 | 5.8901962489552276e-05 | 28.90% | 40.64% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.274262507405514e-05 | 5.871635081362543e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.191191542988262e-05 | 5.8757131631430473e-05 | 28.27% | 39.41% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.019374245683357e-05 | 5.58313000935178e-05 | 30.38% | 43.64% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.217610250724421e-05 | 5.905784780246903e-05 | 28.13% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.437779492822262e-05 | 5.957040467167534e-05 | 29.40% | 41.64% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.185415211611684e-05 | 5.895277111103877e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.271197555162181e-05 | 5.948375176320305e-05 | 28.08% | 39.05% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.291729849357516e-05 | 5.955597468410873e-05 | 28.17% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.308586567426791e-05 | 6.0307195153575426e-05 | 27.42% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.251827976656279e-05 | 5.890079248388075e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.214448578611163e-05 | 5.946997317733736e-05 | 27.60% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.239467528411867e-05 | 5.930399517222878e-05 | 28.02% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.250207007116865e-05 | 5.887144119965016e-05 | 28.64% | 40.14% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.237465018695229e-05 | 5.891534965676207e-05 | 28.48% | 39.82% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.148292657655743e-05 | 5.8754134224980015e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.205347586967844e-05 | 5.914824296099802e-05 | 27.92% | 38.73% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.17242604360277e-05 | 5.999690367474975e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.208982248861554e-05 | 5.9880895932595985e-05 | 27.05% | 37.09% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.245719274508182e-05 | 5.9193080142279505e-05 | 28.21% | 39.30% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.224783716585996e-05 | 5.841675369391383e-05 | 28.97% | 40.79% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.176603901363424e-05 | 5.9243127119971696e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.126241957498211e-05 | 5.855319337614148e-05 | 27.95% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.107511893099894e-05 | 5.772708525918401e-05 | 28.80% | 40.45% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.067200033316357e-05 | 5.7539193662996e-05 | 28.68% | 40.20% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.163885830741557e-05 | 5.881779586400655e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.315856726264862e-05 | 6.087453332108221e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.28790134479815e-05 | 5.9083644765355076e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.367096508132459e-05 | 5.953004733338457e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.436305355602156e-05 | 5.982426018082541e-05 | 29.09% | 41.02% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.361811276539272e-05 | 5.975743397892355e-05 | 28.54% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.34619878601952e-05 | 5.965085137592923e-05 | 28.53% | 39.92% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.200373242947297e-05 | 5.7324917483730085e-05 | 30.09% | 43.05% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.363976687310334e-05 | 5.984127959333996e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.285443299014988e-05 | 5.9974818752046784e-05 | 27.61% | 38.15% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.36396541847934e-05 | 6.010157424496724e-05 | 28.14% | 39.16% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.276590091865628e-05 | 5.9292349705907625e-05 | 28.36% | 39.59% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.308336083350276e-05 | 5.982714580750343e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.28157121285493e-05 | 6.088234132945903e-05 | 26.48% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.343262764136882e-05 | 5.963962369002214e-05 | 28.52% | 39.89% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.332028949151277e-05 | 5.980416016845955e-05 | 28.22% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.438530174427448e-05 | 6.021107705096401e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.325727841261816e-05 | 5.989217447807462e-05 | 28.06% | 39.01% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.300412326577643e-05 | 6.033404652818307e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.396832953872635e-05 | 6.0080285275518486e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.399434960635853e-05 | 5.946872631765933e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.354582031481949e-05 | 5.9693920430457674e-05 | 28.55% | 39.96% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.318688003799056e-05 | 5.993481766612991e-05 | 27.95% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.26215916058924e-05 | 5.9128798860127226e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.379672533288304e-05 | 5.8854254750571816e-05 | 29.77% | 42.38% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.334520737485796e-05 | 5.97315193824666e-05 | 28.33% | 39.53% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.339960154942494e-05 | 5.917407804143091e-05 | 29.05% | 40.94% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.20461445662428e-05 | 5.816234607806348e-05 | 29.11% | 41.06% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.160932409201539e-05 | 5.846077686885992e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.34719302031235e-05 | 6.0228532935824554e-05 | 27.85% | 38.59% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.304120442521239e-05 | 5.9513773017755354e-05 | 28.33% | 39.53% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.278786010985059e-05 | 6.029716845854711e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.296964237701681e-05 | 6.04454378967543e-05 | 27.15% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.23194077347433e-05 | 5.946044486429683e-05 | 27.77% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.230309523756451e-05 | 5.9477118903230374e-05 | 27.73% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.255311079352084e-05 | 5.982115968614051e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.020242400871506e-05 | 5.6964174541072085e-05 | 28.97% | 40.79% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.345150530347419e-05 | 5.987323700326012e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.31584389378622e-05 | 6.010803852983335e-05 | 27.72% | 38.35% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.296461210986003e-05 | 5.978936685032712e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.319623319560384e-05 | 5.990714490684664e-05 | 27.99% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.320992228369728e-05 | 6.0357676475539456e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.272856800534554e-05 | 6.0278835675956855e-05 | 27.14% | 37.24% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.263435659002694e-05 | 5.9938958743133706e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.266650652744275e-05 | 5.984373975126228e-05 | 27.61% | 38.14% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.3189246222292e-05 | 5.990667752574828e-05 | 27.99% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.344542083767353e-05 | 6.0266538073128244e-05 | 27.78% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.337305391026689e-05 | 6.013827141105082e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.306302735194207e-05 | 5.992090918115183e-05 | 27.86% | 38.62% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.295460001709453e-05 | 5.9885874774813256e-05 | 27.81% | 38.52% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.23649272630917e-05 | 5.9724700342349976e-05 | 27.49% | 37.91% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.323216830405566e-05 | 6.000593971460864e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.292404566043788e-05 | 5.999141718111593e-05 | 27.65% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.214486541281033e-05 | 6.034271107894215e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.2815195845254e-05 | 5.98974898654265e-05 | 27.67% | 38.26% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.254985224050253e-05 | 5.995422737176669e-05 | 27.37% | 37.69% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.996285563052716e-05 | 5.7204382228366704e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.058896685549699e-05 | 5.718741378433685e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.301480051497781e-05 | 6.008519960158616e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.299544448236158e-05 | 5.896065511233726e-05 | 28.96% | 40.76% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.270699897511886e-05 | 6.056914953410043e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.356663954073812e-05 | 5.99797763160345e-05 | 28.23% | 39.32% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.271889531588747e-05 | 5.932319626420986e-05 | 28.28% | 39.44% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.277668807600246e-05 | 6.019526804914412e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.259952441075653e-05 | 6.018178392360118e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.962183566050274e-05 | 5.643857867021551e-05 | 29.12% | 41.08% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.257460615322352e-05 | 5.897461548820421e-05 | 28.58% | 40.02% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.224552179085638e-05 | 5.906014966779389e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.245628560434216e-05 | 5.965399311720529e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010659857088805951 | 7.742516723332857e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.09819284756203e-05 | 5.719355957427316e-05 | 29.37% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.489648422145543e-05 | 5.9704603131030955e-05 | 29.67% | 42.19% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.219614473907485e-05 | 5.9671690729327297e-05 | 27.40% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.230548619491193e-05 | 5.9878502152602626e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.190242840314268e-05 | 5.9504331531713234e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.20909809159168e-05 | 5.906328035201062e-05 | 28.05% | 38.99% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 0.00010101191562729828 | 7.329977225342727e-05 | 27.43% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.969101037602326e-05 | 5.720501374002099e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.837515224005266e-05 | 7.53383309842874e-05 | 23.42% | 30.58% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.350682048495061e-05 | 5.992745047153371e-05 | 28.24% | 39.35% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.280391057662391e-05 | 5.8546699575472135e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.238321118968775e-05 | 5.891295247060633e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.228437180326548e-05 | 5.9291704237165855e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.282618157775673e-05 | 5.92753859994165e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.203449842994447e-05 | 6.023450620364193e-05 | 26.57% | 36.19% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.036414564370682e-05 | 5.695319034782047e-05 | 29.13% | 41.11% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.998914033665058e-05 | 5.700367588008864e-05 | 28.74% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.217657261863478e-05 | 5.916327051860404e-05 | 28.00% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.138661546181942e-05 | 5.7476257655937686e-05 | 29.38% | 41.60% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.225540526991797e-05 | 5.9374155693097254e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.257653616220237e-05 | 5.9490670320242734e-05 | 27.96% | 38.81% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.154132955191952e-05 | 5.8385853648772835e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.151512669257545e-05 | 5.833652811055827e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.117700455756239e-05 | 5.7870404214894385e-05 | 28.71% | 40.27% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.80272089885524e-05 | 5.508355415820893e-05 | 29.40% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.131586641342035e-05 | 5.795855399364036e-05 | 28.72% | 40.30% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.002308529565672e-05 | 5.823754509443074e-05 | 27.22% | 37.41% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.15837274465782e-05 | 5.8344582540813137e-05 | 28.49% | 39.83% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010473972853924946 | 7.865984117509225e-05 | 24.90% | 33.16% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.071407620333572e-05 | 5.789782852382632e-05 | 28.27% | 39.41% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.150298185300441e-05 | 5.818686185731129e-05 | 28.61% | 40.07% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.102922622328996e-05 | 5.6653477484053965e-05 | 30.08% | 43.03% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.096505749011665e-05 | 5.7391639880672964e-05 | 29.12% | 41.07% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.032329702784517e-05 | 5.9405804273619835e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.17012649923086e-05 | 5.92151706162135e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.640329246121791e-05 | 6.953683262551344e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.039482061330855e-05 | 5.792697174710155e-05 | 27.95% | 38.79% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.952732815210545e-05 | 7.21915969191772e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.188805349147834e-05 | 5.833756062421042e-05 | 28.76% | 40.37% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.094904935201397e-05 | 5.751439998795577e-05 | 28.95% | 40.75% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.17604120132599e-05 | 5.7333737884141926e-05 | 29.88% | 42.60% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.069605996347859e-05 | 5.734129211223428e-05 | 28.94% | 40.73% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.034148623404495e-05 | 5.7820602721187005e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.105601103520871e-05 | 5.8020739404697555e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.842684498258443e-05 | 5.49025784929141e-05 | 30.00% | 42.85% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.901352154780409e-05 | 5.525479950583057e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.120628381319012e-05 | 5.8170835199795765e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_new['']` | 7.068547401441922e-05 | 3.643496885379037e-05 | 48.45% | 94.00% | 1.94x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.197574867347415e-05 | 4.9615136987271256e-05 | 46.06% | 85.38% | 1.85x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.224377851142097e-05 | 4.91000447034653e-05 | 46.77% | 87.87% | 1.88x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.915199276218098e-05 | 4.7818932584576934e-05 | 46.36% | 86.44% | 1.86x | ✅ |
| `hexbytes_new['0x']` | 7.87655623348165e-05 | 3.803289051475865e-05 | 51.71% | 107.10% | 2.07x | ✅ |
| `hexbytes_new['0x1234']` | 8.580084860801838e-05 | 4.4983292952141135e-05 | 47.57% | 90.74% | 1.91x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.745935556735071e-05 | 4.4608621141467414e-05 | 49.00% | 96.06% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.669439737584206e-05 | 4.526726553417234e-05 | 47.79% | 91.52% | 1.92x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.664875764727009e-05 | 4.4363382656374295e-05 | 48.80% | 95.32% | 1.95x | ✅ |
| `hexbytes_new['abc']` | 8.293618598035809e-05 | 4.754185887759291e-05 | 42.68% | 74.45% | 1.74x | ✅ |
| `hexbytes_new['deadbeef']` | 7.650124734586989e-05 | 4.160965351845961e-05 | 45.61% | 83.85% | 1.84x | ✅ |
| `hexbytes_new[0-9]` | 4.340209798992782e-05 | 2.6040666775004528e-05 | 40.00% | 66.67% | 1.67x | ✅ |
| `hexbytes_new[0]` | 0.00012063733591264394 | 6.089289052193173e-05 | 49.52% | 98.11% | 1.98x | ✅ |
| `hexbytes_new[123456]` | 0.00012396047368376498 | 6.593651967896935e-05 | 46.81% | 88.00% | 1.88x | ✅ |
| `hexbytes_new[2**16]` | 0.00012571457356197447 | 6.647586311219946e-05 | 47.12% | 89.11% | 1.89x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013274509653117507 | 7.41734686824851e-05 | 44.12% | 78.97% | 1.79x | ✅ |
| `hexbytes_new[2**32]` | 0.0001293944631536387 | 6.970192678203201e-05 | 46.13% | 85.64% | 1.86x | ✅ |
| `hexbytes_new[2**64]` | 0.00012802655259240418 | 7.197533946136962e-05 | 43.78% | 77.88% | 1.78x | ✅ |
| `hexbytes_new[2**8]` | 0.0001252371056731053 | 6.329803195779175e-05 | 49.46% | 97.85% | 1.98x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.41649981847421e-05 | 2.726303579156121e-05 | 38.27% | 62.00% | 1.62x | ✅ |
| `hexbytes_new[False]` | 5.9703296611241896e-05 | 2.6816197056187918e-05 | 55.08% | 122.64% | 2.23x | ✅ |
| `hexbytes_new[True]` | 5.9786884212968516e-05 | 2.70089403356989e-05 | 54.82% | 121.36% | 2.21x | ✅ |
| `hexbytes_new[all byte values]` | 4.463154656435076e-05 | 2.7042754048534536e-05 | 39.41% | 65.04% | 1.65x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.4156426448369485e-05 | 2.6583346320884296e-05 | 39.80% | 66.11% | 1.66x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.354281896842732e-05 | 2.6416438015906693e-05 | 39.33% | 64.83% | 1.65x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.312299561191494e-05 | 2.6484634693788167e-05 | 38.58% | 62.82% | 1.63x | ✅ |
| `hexbytes_new[b'']` | 4.2152835637097806e-05 | 2.5284057179679503e-05 | 40.02% | 66.72% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.336451790986668e-05 | 2.635797873913242e-05 | 39.22% | 64.52% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.286373624264335e-05 | 2.6259770200542067e-05 | 38.74% | 63.23% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.330684581547887e-05 | 2.675745215537249e-05 | 38.21% | 61.85% | 1.62x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6128810407512204e-05 | 3.912339990271881e-05 | 30.30% | 43.47% | 1.43x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2929157612584444e-05 | 2.61001821521611e-05 | 39.20% | 64.48% | 1.64x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.3407519670143946e-05 | 2.597213039262449e-05 | 40.17% | 67.13% | 1.67x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.2517448491608834e-05 | 2.617243936818634e-05 | 38.44% | 62.45% | 1.62x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.289828989332265e-05 | 2.5947345279386856e-05 | 39.51% | 65.33% | 1.65x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.356827596535527e-05 | 2.613323389082877e-05 | 40.02% | 66.72% | 1.67x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.172100721820488e-05 | 2.6787940839330786e-05 | 35.79% | 55.75% | 1.56x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.1019182237996924e-05 | 3.310481681965658e-05 | 35.11% | 54.11% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 4.2440613873431844e-05 | 2.6034690509894992e-05 | 38.66% | 63.02% | 1.63x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.970813439963739e-05 | 3.719664475122067e-05 | 46.64% | 87.40% | 1.87x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.970846486889084e-05 | 3.885470384648831e-05 | 44.26% | 79.41% | 1.79x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.941631413474463e-05 | 3.833721049778523e-05 | 44.77% | 81.07% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.805770772453928e-05 | 3.801313540360703e-05 | 44.15% | 79.04% | 1.79x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.90768099303549e-05 | 3.796775562541672e-05 | 45.04% | 81.94% | 1.82x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.965189739410647e-05 | 3.726624366115849e-05 | 46.50% | 86.90% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.775240273081897e-05 | 3.538977516035628e-05 | 47.77% | 91.45% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.983471392448371e-05 | 3.6971884609298236e-05 | 47.06% | 88.89% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.97493531307348e-05 | 3.773981397671745e-05 | 45.89% | 84.82% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.037082855316753e-05 | 3.837815996964463e-05 | 45.46% | 83.36% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.060026917118623e-05 | 5.5692310929631646e-05 | 38.53% | 62.68% | 1.63x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.946552137721825e-05 | 3.790164765100416e-05 | 45.44% | 83.28% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.93743376612542e-05 | 3.8271792710677156e-05 | 44.83% | 81.27% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.923713105893634e-05 | 3.761470069718089e-05 | 45.67% | 84.07% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.897039304319232e-05 | 3.7447489753324534e-05 | 45.70% | 84.18% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.962534111419634e-05 | 3.770667377618231e-05 | 45.84% | 84.65% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.021056949485115e-05 | 3.8508887289211266e-05 | 45.15% | 82.32% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.496938412065207e-05 | 5.059700542122202e-05 | 40.45% | 67.93% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.884329304829434e-05 | 3.840619568508685e-05 | 44.21% | 79.25% | 1.79x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.440338861360044e-05 | 5.012104799376672e-05 | 40.62% | 68.40% | 1.68x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.873307577655587e-05 | 3.8305960634412986e-05 | 44.27% | 79.43% | 1.79x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.921225604098673e-05 | 3.7229421649516645e-05 | 46.21% | 85.91% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.93855133482087e-05 | 3.7849552744185434e-05 | 45.45% | 83.32% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.979341347497555e-05 | 3.763240799590082e-05 | 46.08% | 85.46% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.020136996698736e-05 | 3.77985894345203e-05 | 46.16% | 85.72% | 1.86x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.994889881439206e-05 | 3.812529913574517e-05 | 45.50% | 83.47% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.836217284182861e-05 | 3.808100435269928e-05 | 44.30% | 79.52% | 1.80x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.935694739514334e-05 | 3.78242107875361e-05 | 45.46% | 83.37% | 1.83x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.97437302110927e-05 | 3.845997863189549e-05 | 44.86% | 81.34% | 1.81x | ✅ |
| `hexbytes_new[long alternating]` | 5.091455098603236e-05 | 3.301766039444292e-05 | 35.15% | 54.20% | 1.54x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.343104370699861e-05 | 4.379877314171106e-05 | 47.50% | 90.49% | 1.90x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.41042181017874e-05 | 4.420950625898282e-05 | 47.43% | 90.24% | 1.90x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.267996448740742e-05 | 4.449823822126817e-05 | 46.18% | 85.81% | 1.86x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.172730304613137e-05 | 4.330329300998063e-05 | 47.01% | 88.73% | 1.89x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.214762799605057e-05 | 4.3247803757400135e-05 | 47.35% | 89.95% | 1.90x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.296310363068434e-05 | 4.300026322622829e-05 | 48.17% | 92.94% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.153908291327685e-05 | 4.020269118679214e-05 | 50.70% | 102.82% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.351918135323528e-05 | 4.344130819721966e-05 | 47.99% | 92.26% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.418686631227915e-05 | 4.265831373366244e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.259019703656104e-05 | 4.330114728659343e-05 | 47.57% | 90.73% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010499538549097385 | 6.171489220806384e-05 | 41.22% | 70.13% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.473542485608866e-05 | 4.3255419444745306e-05 | 48.95% | 95.90% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.336554980933414e-05 | 4.258888556224709e-05 | 48.91% | 95.74% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.266674605054027e-05 | 4.352092062291172e-05 | 47.35% | 89.95% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.269438721119731e-05 | 4.3393891248270046e-05 | 47.52% | 90.57% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.166555396946981e-05 | 4.3087162172112174e-05 | 47.24% | 89.54% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.188913998927564e-05 | 4.3585464327042605e-05 | 46.78% | 87.88% | 1.88x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.674288086752237e-05 | 5.642464994734783e-05 | 41.68% | 71.45% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.184776197516628e-05 | 4.388500023831169e-05 | 46.38% | 86.51% | 1.87x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.845307298160714e-05 | 5.516781647069556e-05 | 43.97% | 78.46% | 1.78x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.287099922051888e-05 | 4.374904406483315e-05 | 47.21% | 89.42% | 1.89x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.482230887441657e-05 | 4.3794560821620976e-05 | 48.37% | 93.68% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.254455598022554e-05 | 4.3318527663746757e-05 | 47.52% | 90.55% | 1.91x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.294892521197925e-05 | 4.2900149612502955e-05 | 48.28% | 93.35% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.236613231441595e-05 | 4.261015625269018e-05 | 48.27% | 93.30% | 1.93x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.13034657610096e-05 | 4.356140340970168e-05 | 46.42% | 86.64% | 1.87x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.313414886641096e-05 | 4.353548062335253e-05 | 47.63% | 90.96% | 1.91x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.320984127848304e-05 | 4.320943731756206e-05 | 48.07% | 92.57% | 1.93x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.356721980584258e-05 | 4.366879392941981e-05 | 47.74% | 91.37% | 1.91x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.365951706041104e-05 | 2.664868008221551e-05 | 38.96% | 63.83% | 1.64x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3399708155713644e-05 | 2.6080858951120992e-05 | 39.91% | 66.40% | 1.66x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.265739922269339e-05 | 2.6130617727231734e-05 | 38.74% | 63.25% | 1.63x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.341127940571113e-05 | 2.6188895363662265e-05 | 39.67% | 65.76% | 1.66x | ✅ |
| `hexbytes_new[palindrome]` | 4.360560786363201e-05 | 2.610195980308686e-05 | 40.14% | 67.06% | 1.67x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.294454729310883e-05 | 2.6918413322544063e-05 | 37.32% | 59.54% | 1.60x | ✅ |
| `hexbytes_new[single 0xff]` | 4.3028281062969125e-05 | 2.5415749210429996e-05 | 40.93% | 69.30% | 1.69x | ✅ |
| `hexbytes_new[single null byte]` | 4.2227135327196064e-05 | 2.5446633689403234e-05 | 39.74% | 65.94% | 1.66x | ✅ |
| `hexbytes_new[two patterns]` | 4.34895086048685e-05 | 2.7242135222994092e-05 | 37.36% | 59.64% | 1.60x | ✅ |
| `hexbytes_repr[0-9]` | 3.0085077687269938e-05 | 1.4763183333542614e-05 | 50.93% | 103.78% | 2.04x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012082995521046726 | 4.247989233825196e-05 | 64.84% | 184.44% | 2.84x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012132927034129566 | 4.224082483310528e-05 | 65.18% | 187.23% | 2.87x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.880782588815023e-05 | 2.053150146379133e-05 | 57.93% | 137.72% | 2.38x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.8893547292306866e-05 | 2.0540948166084265e-05 | 57.99% | 138.03% | 2.38x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.066289942803566e-05 | 1.796571363834692e-05 | 55.82% | 126.34% | 2.26x | ✅ |
| `hexbytes_repr[b'']` | 2.167076116507663e-05 | 1.2426634578263107e-05 | 42.66% | 74.39% | 1.74x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.6978156856528455e-05 | 1.6820786979005185e-05 | 54.51% | 119.84% | 2.20x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.664408470696132e-05 | 1.4190595718228422e-05 | 46.74% | 87.76% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.205689746123589e-05 | 2.3566688921328196e-05 | 62.02% | 163.32% | 2.63x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.000759706957615766 | 0.0002229783522203603 | 70.65% | 240.71% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.640220528730324e-05 | 1.4056501138677934e-05 | 46.76% | 87.83% | 1.88x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7163056470863583e-05 | 1.4030082481912044e-05 | 48.35% | 93.61% | 1.94x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8608318907790686e-05 | 1.4272289734342924e-05 | 50.11% | 100.45% | 2.00x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8462348432509383e-05 | 1.4324060154807807e-05 | 49.67% | 98.70% | 1.99x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6470958989230182e-05 | 1.4140883491206113e-05 | 46.58% | 87.19% | 1.87x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.910823655710094e-05 | 1.995576700803032e-05 | 59.36% | 146.09% | 2.46x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00039537763499463823 | 0.00011960565652989466 | 69.75% | 230.57% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6392488669775246e-05 | 1.4040542978001046e-05 | 46.80% | 87.97% | 1.88x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00039865544817419604 | 0.00012312532385376875 | 69.11% | 223.78% | 3.24x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010009207864616417 | 3.45447584075179e-05 | 65.49% | 189.75% | 2.90x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.9131503541047708e-05 | 1.4760664743588338e-05 | 49.33% | 97.36% | 1.97x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.9056123105044568e-05 | 1.4209752397260852e-05 | 51.10% | 104.48% | 2.04x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.8456189237168856e-05 | 1.4187919941213347e-05 | 50.14% | 100.57% | 2.01x | ✅ |
| `hexbytes_repr[palindrome]` | 3.2162296530324446e-05 | 1.5902854521833594e-05 | 50.55% | 102.24% | 2.02x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.251018046011762e-05 | 2.3739894318188736e-05 | 62.02% | 163.31% | 2.63x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.729458757256124e-05 | 1.3686243265365777e-05 | 49.86% | 99.43% | 1.99x | ✅ |
| `hexbytes_repr[single null byte]` | 2.7277924098528845e-05 | 1.3623806187906993e-05 | 50.06% | 100.22% | 2.00x | ✅ |
| `hexbytes_repr[two patterns]` | 4.913709615529845e-05 | 2.0473448418038218e-05 | 58.33% | 140.00% | 2.40x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5817572055224047e-05 | 1.4167815843374486e-05 | 10.43% | 11.64% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.270800446003841e-05 | 4.1060057047062125e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.268829509344083e-05 | 4.128079684078993e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.089135436471792e-05 | 1.918752189002066e-05 | 8.16% | 8.88% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1028141103805553e-05 | 1.9309891481896873e-05 | 8.17% | 8.90% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.927172641731634e-05 | 1.6997082885086754e-05 | 11.80% | 13.38% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.055048106143779e-05 | 1.175789840046412e-05 | -11.44% | -10.27% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.820402827153615e-05 | 1.62981526977399e-05 | 10.47% | 11.69% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5253493744912151e-05 | 1.3226184002678508e-05 | 13.29% | 15.33% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5598919540125475e-05 | 2.317315911344985e-05 | 9.48% | 10.47% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.000223192332210511 | 0.0002221630271881458 | 0.46% | 0.46% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.518403526497681e-05 | 1.3167872432175693e-05 | 13.28% | 15.31% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5331006214378414e-05 | 1.3630109909149088e-05 | 11.09% | 12.48% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.570095454939299e-05 | 1.3602257191001543e-05 | 13.37% | 15.43% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5616888054544002e-05 | 1.3851365294062877e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5288208181027084e-05 | 1.3202088701564096e-05 | 13.65% | 15.80% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0923809309158802e-05 | 1.9201263546957865e-05 | 8.23% | 8.97% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012269421410042474 | 0.00012204349938594545 | 0.53% | 0.53% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5186216785018308e-05 | 1.3352652045592194e-05 | 12.07% | 13.73% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001224083723675288 | 0.0001226601147864015 | -0.21% | -0.21% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.5861840935697e-05 | 3.326413221628714e-05 | 7.24% | 7.81% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.589171012001429e-05 | 1.386710407139982e-05 | 12.74% | 14.60% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5427591014245552e-05 | 1.3375219514129835e-05 | 13.30% | 15.34% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5210105011876948e-05 | 1.322108983113795e-05 | 13.08% | 15.04% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.680089082357137e-05 | 1.5003721404406791e-05 | 10.70% | 11.98% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5615827905068646e-05 | 2.316603156317615e-05 | 9.56% | 10.57% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.497061842896928e-05 | 1.313653476582995e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5034890149149935e-05 | 1.2837679456529806e-05 | 14.61% | 17.12% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.1302926568550656e-05 | 1.9231730373558392e-05 | 9.72% | 10.77% | 1.11x | ✅ |
