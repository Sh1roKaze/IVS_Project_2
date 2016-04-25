# options: -translation lf -encoding utf-8

proc ::InstallJammer::InitFiles {} {
    File ::90478E45-5FD6-171F-FF03-EEF7FC6ED1FC -name gitivs -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -type dir -permissions 040755 -filemethod 0
    File ::CE72E189-160B-EAE8-7DBD-BF965A3B80FF -name interface.glade -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -size 24876 -mtime 1461277770 -permissions 00755 -filemethod 0
    File ::8A86D7AA-531E-C994-D8F5-7AD54FD411D9 -name LICENSE -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -size 35141 -mtime 1461177896 -permissions 00755 -filemethod 0
    File ::0A5DA803-14C9-EFBE-CF61-EE72BF2F8760 -name README.md -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -size 15 -mtime 1461177896 -permissions 00755 -filemethod 0
    File ::94D64485-6D2F-1573-8964-C9AE8092647E -name .git -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -type dir -permissions 040755 -filemethod 0
    File ::C7CE6C3C-F680-EFA0-D657-2486181B58E7 -name COMMIT_EDITMSG -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 13 -mtime 1461277748 -permissions 00644 -filemethod 0
    File ::491D073D-AE70-3856-6DB3-3AB85AF9F75C -name config -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 271 -mtime 1461177896 -permissions 00644 -filemethod 0
    File ::D5BC8B4A-7C15-346E-CB0B-02E347382F03 -name description -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 73 -mtime 1461177882 -permissions 00644 -filemethod 0
    File ::4BA87E1D-0D1E-B5A3-C30E-91B1F091CF94 -name FETCH_HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 590 -mtime 1461277770 -permissions 00644 -filemethod 0
    File ::E541FAA4-F840-9C3A-D954-C6B401FF4E84 -name gitk.cache -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 4291 -mtime 1461258682 -permissions 00644 -filemethod 0
    File ::DC7F32DD-C144-8C73-E476-421ED4861932 -name HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 27 -mtime 1461278065 -permissions 00644 -filemethod 0
    File ::AF22E662-6FB2-C266-DAE1-9A23A82CBF13 -name index -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 792 -mtime 1461278065 -permissions 00644 -filemethod 0
    File ::A3263D13-6CA2-B77E-30EF-223641042282 -name ORIG_HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 41 -mtime 1461277770 -permissions 00644 -filemethod 0
    File ::1AD8BAEB-0899-892B-6491-744F724E14A4 -name packed-refs -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git -size 325 -mtime 1461177896 -permissions 00644 -filemethod 0
    File ::781BB060-9AA8-3D66-DF6D-72FED77A7046 -name branches -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/branches -type dir -permissions 040755 -filemethod 0
    File ::17428F6D-E329-05C0-A356-9C2F5947821C -name hooks -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -type dir -permissions 040755 -filemethod 0
    File ::9DBBE20F-9238-368B-3E0B-E840800433A1 -name applypatch-msg.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 452 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::BAAE202C-59B7-2176-5620-7260B9E70A3E -name commit-msg.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 896 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::DD5CB0D3-FB34-23EC-F64A-F82DF88EF843 -name post-update.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 189 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::D086CA16-836E-47FA-36FC-3E3A0F78F63F -name pre-applypatch.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 398 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::194317BA-A3E8-8AC2-59F8-18BD0460E283 -name pre-commit.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 1642 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::6125775F-B8FB-ED1D-AB06-0248A3C3EC4C -name pre-push.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 1352 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::60F5C554-1D15-8439-0991-E91C9EAEAEC1 -name pre-rebase.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 4898 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::83440E7E-98E2-B444-FCF4-9E9ED324EC4D -name prepare-commit-msg.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 1239 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::0DFB3A73-E971-85BA-4EF4-401E40648F82 -name update.sample -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/hooks -size 3611 -mtime 1461177882 -permissions 00755 -filemethod 0
    File ::4A8E287C-73AB-82F8-6E03-7B6C906C48C6 -name info -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/info -type dir -permissions 040755 -filemethod 0
    File ::F496422E-45CF-69A3-3C78-8D9D92962B3C -name exclude -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/info -size 240 -mtime 1461177882 -permissions 00644 -filemethod 0
    File ::F86B9A52-E5EE-E335-7B5C-89F31FB3EAFC -name logs -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs -type dir -permissions 040755 -filemethod 0
    File ::5FDD80E0-5467-B76F-0079-4F3FE500E4B5 -name HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs -size 677 -mtime 1461278065 -permissions 00644 -filemethod 0
    File ::09EB3F73-D5BE-8A50-8F4F-F71B146CB39F -name refs -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs -type dir -permissions 040755 -filemethod 0
    File ::C9B7EDC9-45A8-FD1B-ED2C-8EE4F55EF840 -name heads -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/heads -type dir -permissions 040755 -filemethod 0
    File ::92D11824-CFA7-6E20-19FF-E8C0FD460CB1 -name deployment -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/heads -size 153 -mtime 1461278065 -permissions 00644 -filemethod 0
    File ::46530DC2-150D-75CB-63BD-DA4218A1E755 -name master -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/heads -size 507 -mtime 1461277860 -permissions 00644 -filemethod 0
    File ::B4F91B66-9FA7-4CC8-18B9-EBAB11752CAF -name remotes -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/remotes -type dir -permissions 040755 -filemethod 0
    File ::D1803562-328D-0FA2-1199-0C3FECFB3D86 -name origin -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/remotes/origin -type dir -permissions 040755 -filemethod 0
    File ::CA5591EC-E698-FD0E-0542-4D33C8DA0F0B -name deployment -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/remotes/origin -size 151 -mtime 1461277563 -permissions 00644 -filemethod 0
    File ::CA0200A8-63E7-9037-EB0C-1D63341FEAFD -name HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/remotes/origin -size 186 -mtime 1461177896 -permissions 00644 -filemethod 0
    File ::262307DE-DED2-7F35-780D-2F88484BEA0C -name master -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/logs/refs/remotes/origin -size 159 -mtime 1461259378 -permissions 00644 -filemethod 0
    File ::26229F63-4F8A-89FC-E6D3-6B1529A676B2 -name objects -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects -type dir -permissions 040755 -filemethod 0
    File ::073DC171-9FF5-1157-1F9E-2FA7DFA747C2 -name 3c -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3c -type dir -permissions 040755 -filemethod 0
    File ::6B337971-995F-E4EA-5636-D44B6F46BEC4 -name 6b87de9867f6a3e3155a51b6a34e44d5beed23 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3c -size 157 -mtime 1461277748 -permissions 00444 -filemethod 0
    File ::58E4E20B-609C-722C-F75F-E0D003715B3D -name 3d -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3d -type dir -permissions 040755 -filemethod 0
    File ::1089738C-6D62-F1D9-E0D9-66EAA1C4F84F -name a5e25106158db503350fc9ca41c38716d87852 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3d -size 347 -mtime 1461277748 -permissions 00444 -filemethod 0
    File ::010CDF55-60FD-EC7A-F26C-73C416D5E92C -name 3e -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3e -type dir -permissions 040755 -filemethod 0
    File ::D7896D70-1637-E7C0-5ED3-8C92256D81C3 -name 5c8e02da2324dcf3d8389a4e43d5d0cb42a4e3 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/3e -size 242 -mtime 1461277860 -permissions 00444 -filemethod 0
    File ::CD174B04-731D-15E0-8C2F-A7D56BB81683 -name 14 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/14 -type dir -permissions 040755 -filemethod 0
    File ::CE066A6F-5E3F-01CD-FC03-CB1167C1D99E -name 610fdd7fb36b67c58bd479d55b5c16999c0fd8 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/14 -size 3199 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::FB5D2EF7-4DBC-9301-1F5C-4CB87F3180FB -name 76 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/76 -type dir -permissions 040755 -filemethod 0
    File ::E62D06A8-54C1-B22C-4656-B12AFE620139 -name 85bb4faf6147a4ae40efc955db0f1ea5802c66 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/76 -size 171 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::FDC9B50F-AF5E-AA35-D8B5-52CA9533D0B6 -name 97 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/97 -type dir -permissions 040755 -filemethod 0
    File ::4DE29127-2A4B-7EB1-3A89-8C860C25F878 -name 15108f6e8e4732676a189ba6ff37b12ab37e3a -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/97 -size 397 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::160CBD24-DC46-6DF3-1943-1868FC264D9B -name a5 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/a5 -type dir -permissions 040755 -filemethod 0
    File ::89E19B8F-3158-083A-A7CB-FF870FEF089A -name 189bc83e5236b4909afa6b85c16fc4d8c5b7ae -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/a5 -size 1879 -mtime 1461277748 -permissions 00444 -filemethod 0
    File ::8E5BDCBB-0EBC-14BB-AE1E-AAFA27A6DB5E -name a6 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/a6 -type dir -permissions 040755 -filemethod 0
    File ::0DA81679-97CA-6517-AD1B-B119AA4C7E34 -name 320be18cbae5e91405c7c592256270e6183843 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/a6 -size 346 -mtime 1461277770 -permissions 00444 -filemethod 0
    File ::8A22AE89-2B46-6100-DC6C-478FA9C1FF96 -name b9 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/b9 -type dir -permissions 040755 -filemethod 0
    File ::CFBD1574-23BB-BFA5-1D3D-AB63EC505369 -name 01cf47f94a73d08f2a3a6fbefb092a438c408d -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/b9 -size 1878 -mtime 1461277770 -permissions 00444 -filemethod 0
    File ::D2D3B0E5-9D4E-2162-C598-A8D095423CF2 -name be -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/be -type dir -permissions 040755 -filemethod 0
    File ::A55D5142-CD79-15BB-F44A-AC1BEBA11D43 -name f27ba001b641879c83f21d0871c6fccdb53759 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/be -size 156 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::1AB11E79-8F8C-4876-DD3F-C1D96B422889 -name c7 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/c7 -type dir -permissions 040755 -filemethod 0
    File ::A9249AAD-F5F4-6D73-434D-9208799D30BB -name a210e35ba00684826f1df50c021127ef7e8721 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/c7 -size 373 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::90CBF27C-5F85-5F2F-027B-4BFF0EC0C1A2 -name e2 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/e2 -type dir -permissions 040755 -filemethod 0
    File ::F9A53672-6393-D193-EE0C-CFD0620A5D94 -name ebbaa1e31736ff6ebf143e7d1d783976a9f662 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/e2 -size 1877 -mtime 1461259378 -permissions 00444 -filemethod 0
    File ::EF7AA9C3-844C-933D-D641-2EB1959780CE -name e5 -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/e5 -type dir -permissions 040755 -filemethod 0
    File ::38254D9C-5B08-80B7-6A6C-2FA6E4FB07AB -name 7a39d2d61d27c4ed65742abca03ea7cd218f4d -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/e5 -size 147 -mtime 1461277748 -permissions 00444 -filemethod 0
    File ::EA04F674-F4BE-ADC3-051E-F63F2EA5D54E -name info -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/info -type dir -permissions 040755 -filemethod 0
    File ::BBB6EA54-631F-7C35-CCDE-FA61FB6A1041 -name pack -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/pack -type dir -permissions 040755 -filemethod 0
    File ::49E59785-9F69-374F-0FB4-E9DE77CCAF81 -name pack-722231dac5e63a68b8f4e49f3165a1c8de26b5b1.idx -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/pack -size 4768 -mtime 1461177896 -permissions 00444 -filemethod 0
    File ::FA5A144F-3228-7919-6FE8-5B8F2AB5F191 -name pack-722231dac5e63a68b8f4e49f3165a1c8de26b5b1.pack -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/objects/pack -size 50758 -mtime 1461177896 -permissions 00444 -filemethod 0
    File ::5A024382-7F3D-6E9F-5878-2F2C813C1515 -name refs -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs -type dir -permissions 040755 -filemethod 0
    File ::72D98736-F03A-BABA-02E2-72FA0A5FDE93 -name heads -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/heads -type dir -permissions 040755 -filemethod 0
    File ::B5282AD1-8731-0E0C-ADEB-10E87A33411A -name deployment -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/heads -size 41 -mtime 1461278065 -permissions 00644 -filemethod 0
    File ::D7697C00-5C3D-F2AC-89D1-6F084B22CF83 -name master -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/heads -size 41 -mtime 1461277860 -permissions 00644 -filemethod 0
    File ::80D17F23-FB2C-B721-7465-7639FBD422FC -name remotes -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/remotes -type dir -permissions 040755 -filemethod 0
    File ::521A1709-89CC-27D1-995C-6C944189AC4F -name origin -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/remotes/origin -type dir -permissions 040755 -filemethod 0
    File ::6793DA58-3319-6EB5-E18B-D860FD8B11D4 -name deployment -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/remotes/origin -size 41 -mtime 1461277563 -permissions 00644 -filemethod 0
    File ::E723DE98-2AEF-0356-B2E1-8CB4683C79AE -name HEAD -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/remotes/origin -size 32 -mtime 1461177896 -permissions 00644 -filemethod 0
    File ::80335854-A194-E8FD-6438-E0CE127513DF -name master -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/remotes/origin -size 41 -mtime 1461259378 -permissions 00644 -filemethod 0
    File ::DE11D231-7779-EA4C-3EC4-91D5C533F66C -name tags -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/.git/refs/tags -type dir -permissions 040755 -filemethod 0
    File ::1AC44F02-ADC8-BB88-0D39-436ACC4992C7 -name Calc420_InstallJammer -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer -type dir -permissions 040755 -filemethod 0
    File ::24B9211D-A21F-D39F-A714-C393CFD8282C -name Calc420_InstallJammer.mpi -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer -size 74284 -mtime 1461466081 -permissions 00644 -filemethod 0
    File ::1CE64DDF-6101-41FD-3EA6-14DE62A76890 -name build.log -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer -size 856 -mtime 1461466085 -permissions 00644 -filemethod 0
    File ::9C0F7928-9769-D6E1-220E-2B8DB1EC417D -name build -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/build -type dir -permissions 040755 -filemethod 0
    File ::395014FB-9AFD-FEF2-8D45-10BFC5880782 -name Linux-x86_64-main.tcl -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/build -size 4096 -mtime 1461466084 -permissions 00644 -filemethod 0
    File ::19DA7876-22F9-5F3E-3D9D-ED027B861BE6 -name messages -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/build -size 143912 -mtime 1461466084 -permissions 00644 -filemethod 0
    File ::7D2F6889-A5D8-B684-894D-AC44B08314A6 -name Linux-x86_64-manifest.txt -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/build -size 5194 -mtime 1461444408 -permissions 00644 -filemethod 0
    File ::7DA57D9C-2FBF-2DA5-9BB2-558447351DFD -name main.tcl -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/build -size 118 -mtime 1461444408 -permissions 00644 -filemethod 0
    File ::248AC877-77A4-878D-E229-FB5BC0D9AD8E -name output -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/output -type dir -permissions 040755 -filemethod 0
    File ::6D63C6B1-4278-3397-8383-FE84E98781C2 -name {Calculator 420-1.0-Linux-x86_64-Install} -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%>/Calc420_InstallJammer/output -size 1749430 -mtime 1461444409 -permissions 00755 -filemethod 0
    File ::C4D96774-A53E-2B35-22B8-D06B1D010905 -name main -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -size 27562 -mtime 1461443820 -permissions 00755 -filemethod 0
    File ::E67342DC-A262-9FD0-5A03-DE598F4E5254 -name calc.ico -parent E386687C-0D84-F51F-00AC-779CFC4376DD -directory <%InstallDir%> -size 106838 -mtime 1461443928 -permissions 00644 -filemethod 0

}
