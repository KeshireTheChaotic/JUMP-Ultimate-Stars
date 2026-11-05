
/* WARNING: Removing unreachable block (ram,0x02188c5e) */
/* WARNING: Removing unreachable block (ram,0x02188c68) */

int FUN_0218794c(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_r5;
  int iVar8;
  undefined4 unaff_r7;
  undefined1 *puStack00000000;
  undefined *puStack00000004;
  int in_stack_0000001c;
  int in_stack_00000028;
  int iStack00000038;
  undefined4 uStack00000090;
  undefined4 uStack00000094;
  code *in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined1 uStack000000a0;
  undefined1 uStack000000a4;
  int in_stack_000000a8;
  undefined4 in_stack_000000ac;
  int in_stack_000000b0;
  undefined4 in_stack_000000b4;
  int in_stack_000000b8;
  undefined4 in_stack_000000bc;
  int in_stack_000000c0;
  undefined4 in_stack_000000c4;
  int in_stack_000000c8;
  undefined4 in_stack_000000cc;
  int in_stack_000000d0;
  undefined4 in_stack_000000d4;
  int in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 uStack000000e0;
  int in_stack_000000e4;
  int in_stack_000000e8;
  int in_stack_000000ec;
  undefined1 uStack000000f0;
  char in_stack_000002f0;
  undefined1 auStack_7ffffffe [2147483646];
  
  puStack00000000 = (undefined1 *)0x1;
  puStack00000004 = &DAT_021a5fd4;
  iVar3 = FUN_02183728(unaff_r7,unaff_r5[1],unaff_r5 + 6,&uStack000000a4);
  if (iVar3 != 0) {
    FUN_02188c6e();
  }
  iVar3 = *(int *)(in_stack_0000001c + 0x14);
  if (iVar3 == 1) {
    iVar3 = FUN_02189298(unaff_r7,unaff_r5[1],&uStack00000090);
    if (iVar3 != 0) {
      FUN_02188c6e();
    }
    if (uStack00000090 == 4) {
      FUN_0218913c(unaff_r7,0xd01,s_Could_not_connect_to_the_search_m_021a5fd8);
      FUN_02183f3c(unaff_r7,4,0);
      return 4;
    }
    if (uStack00000090 != 3) {
      FUN_02188c5a();
    }
    iVar3 = *unaff_r5;
    if (iVar3 == 1) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__search__021a6004);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__sesskey__021a6010);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x198));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__profileid__021a601c);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x1a0));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__namespaceid__021a6028);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x470));
      if ((char)unaff_r5[10] != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__nick__021a6038);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 10);
      }
      if (*(char *)((int)unaff_r5 + 0x47) != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__uniquenick__021a6040);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0x47);
      }
      if ((char)unaff_r5[0x17] != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__email__021a6050);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x17);
      }
      if (*(char *)((int)unaff_r5 + 0x8f) != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__firstname__021a6058);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0x8f);
      }
      if (*(char *)((int)unaff_r5 + 0xae) != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__lastname__021a6064);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0xae);
      }
      if (unaff_r5[0x4c] != 0) {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__icquin__021a6070);
        FUN_02183b70(unaff_r7,unaff_r5 + 6,unaff_r5[0x4c]);
      }
      if (0 < unaff_r5[0x4d]) {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__skip__021a607c);
        FUN_02183b70(unaff_r7,unaff_r5 + 6,unaff_r5[0x4d]);
      }
    }
    else if (iVar3 == 2) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__valid__021a6084);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__email__021a6050);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x17);
    }
    else if (iVar3 == 3) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__nicks__021a608c);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__email__021a6050);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x17);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__pass__021a6094);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0xcd);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__namespaceid__021a6028);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x470));
    }
    else if (iVar3 == 4) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__pmatch__021a609c);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__sesskey__021a6010);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x198));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__profileid__021a601c);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x1a0));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__productid__021a60a8);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,unaff_r5[0x4e]);
    }
    else if (iVar3 == 5) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__check__021a60b4);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__nick__021a6038);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 10);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__email__021a6050);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x17);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__pass__021a6094);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0xcd);
    }
    else if (iVar3 == 6) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__newuser__021a60bc);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__nick__021a6038);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 10);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__email__021a6050);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x17);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__pass__021a6094);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0xcd);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__productID__021a60c8);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x46c));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__namespaceid__021a6028);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x470));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__uniquenick__021a6040);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0x47);
      if ((char)unaff_r5[0x3b] != '\0') {
        FUN_02183b94(unaff_r7,unaff_r5 + 6,s__cdkey__021a60d4);
        FUN_02183b94(unaff_r7,unaff_r5 + 6,unaff_r5 + 0x3b);
      }
    }
    else if (iVar3 == 7) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__others__021a60dc);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__sesskey__021a6010);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x198));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__profileid__021a601c);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x1a0));
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__namespaceid__021a6028);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x470));
    }
    else if (iVar3 == 8) {
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__uniquesearch__021a60e8);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__preferrednick__021a60f8);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,(int)unaff_r5 + 0x47);
      FUN_02183b94(unaff_r7,unaff_r5 + 6,s__namespaceid__021a6028);
      FUN_02183b70(unaff_r7,unaff_r5 + 6,*(undefined4 *)(in_stack_00000028 + 0x470));
    }
    else {
      FUN_02002068(&DAT_021a6108,s_gpiSearch_c_021a5fc8,0,0x275);
    }
    FUN_02183b94(unaff_r7,unaff_r5 + 6,s__gamename__021a610c);
    FUN_02183b94(unaff_r7,unaff_r5 + 6,&DAT_020a0604);
    FUN_02183b94(unaff_r7,unaff_r5 + 6,s__final__021a6118);
    *(undefined4 *)(in_stack_0000001c + 0x14) = 4;
    iVar3 = FUN_02188c5a();
  }
  if (iVar3 != 4) {
    FUN_02188c5a();
  }
  puStack00000000 = &uStack000000a4;
  puStack00000004 = &DAT_021a5fd4;
  iVar3 = FUN_02183824(unaff_r7,unaff_r5[1],unaff_r5 + 2,&uStack000000a0);
  if (iVar3 != 0) {
    if (iVar3 != 3) {
      FUN_02188c6e();
    }
    FUN_0218913c(unaff_r7,0xd01,s_There_was_an_error_reading_from_t_021a6120);
    FUN_02183f3c(unaff_r7,3,0);
    return 3;
  }
  iVar3 = FUN_02004d40(unaff_r5[2],s__final__021a6118);
  if (iVar3 == 0) {
    FUN_02188c5a();
  }
  uStack00000094 = 0;
  *(undefined4 *)(in_stack_0000001c + 0x14) = 5;
  iVar3 = FUN_021893dc(unaff_r7,unaff_r5[2],1);
  if (iVar3 != 0) {
    unaff_r5[0x50] = 1;
    return 4;
  }
  iVar3 = *unaff_r5;
  if (iVar3 == 1) {
    bVar2 = false;
    uStack000000e0 = 0;
    in_stack_000000e4 = 0;
    in_stack_000000ec = 0;
    in_stack_000000e8 = 0x601;
    do {
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        FUN_02188c6e();
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,s_bsrdone_021a614c);
      if (iVar3 == 0) {
        puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
        iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
        if (iVar3 != 0) {
          FUN_02188c6e();
        }
        iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6154);
        if ((iVar3 == 0) &&
           (iVar3 = FUN_02004c2c((int)register0x00000054 + 0x2f0,&DAT_021a6108), iVar3 != 0)) {
          in_stack_000000e8 = 0x600;
        }
        bVar2 = true;
      }
      else {
        iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a615c);
        if (iVar3 != 0) {
          FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(unaff_r7,3,1);
          return 3;
        }
        in_stack_000000e4 = in_stack_000000e4 + 1;
        iVar3 = FUN_02175824(in_stack_000000ec,in_stack_000000e4 * 0xac);
        in_stack_000000ec = iVar3;
        if (iVar3 == 0) {
          FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
          return 1;
        }
        iVar8 = (in_stack_000000e4 + -1) * 0xac;
        iVar7 = iVar3 + iVar8;
        FUN_02002488(iVar7,0,0xac);
        uVar6 = FUN_02005f14((int)register0x00000054 + 0x2f0);
        *(undefined4 *)(iVar3 + iVar8) = uVar6;
        bVar1 = false;
        do {
          uVar6 = uStack00000094;
          puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
          iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
          if (iVar3 != 0) {
            FUN_02188c6e();
          }
          iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6160);
          if (iVar3 == 0) {
            FUN_02189478(iVar7 + 4,(int)register0x00000054 + 0x2f0,0x1f);
          }
          else {
            iVar3 = FUN_02004c2c(&uStack000000f0,s_uniquenick_021a6168);
            if (iVar3 == 0) {
              FUN_02189478(iVar7 + 0x23,(int)register0x00000054 + 0x2f0,0x15);
            }
            else {
              iVar3 = FUN_02004c2c(&uStack000000f0,s_firstname_021a6174);
              if (iVar3 == 0) {
                FUN_02189478(iVar7 + 0x38,(int)register0x00000054 + 0x2f0,0x1f);
              }
              else {
                iVar3 = FUN_02004c2c(&uStack000000f0,s_lastname_021a6180);
                if (iVar3 == 0) {
                  FUN_02189478(iVar7 + 0x57,(int)register0x00000054 + 0x2f0,0x1f);
                }
                else {
                  iVar3 = FUN_02004c2c(&uStack000000f0,s_email_021a618c);
                  if (iVar3 == 0) {
                    FUN_02189478(iVar7 + 0x76,(int)register0x00000054 + 0x2f0,0x33);
                  }
                  else {
                    iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a615c);
                    if ((iVar3 == 0) ||
                       (iVar3 = FUN_02004c2c(&uStack000000f0,s_bsrdone_021a614c), iVar3 == 0)) {
                      bVar1 = true;
                      uStack00000094 = uVar6;
                    }
                  }
                }
              }
            }
          }
        } while (!bVar1);
      }
      iVar3 = in_stack_000000e8;
    } while (!bVar2);
    in_stack_00000098 = *(code **)(in_stack_0000001c + 0xc);
    in_stack_0000009c = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_00000098 != (code *)0x0) {
      (*in_stack_00000098)(unaff_r7,&uStack000000e0);
    }
    if ((iVar3 == 0x600) && (in_stack_000000e8 == 0x600)) {
      puStack00000000 = (undefined1 *)((int)unaff_r5 + 0x8f);
      puStack00000004 = (undefined *)((int)unaff_r5 + 0xae);
      iVar3 = FUN_02188c88(unaff_r7,unaff_r5 + 10,(int)unaff_r5 + 0x47,unaff_r5 + 0x17);
      if (iVar3 != 0) {
        FUN_02188c6e();
      }
    }
    FUN_02175814(in_stack_000000ec);
    in_stack_000000ec = 0;
    iVar3 = FUN_02188c52();
  }
  if (iVar3 == 2) {
    in_stack_000000d8 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000dc = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000d8 == 0) {
      FUN_02188c52();
    }
    puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
    iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
    if (iVar3 != 0) {
      FUN_02188c6e();
    }
    iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61bc);
    if (iVar3 != 0) {
      FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
      FUN_02183f3c(unaff_r7,3,1);
      return 3;
    }
    puVar4 = (undefined4 *)FUN_0217583c(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
      return 1;
    }
    *puVar4 = 0;
    FUN_02189478(puVar4 + 1,unaff_r5 + 0x17,0x33);
    if (in_stack_000002f0 == '0') {
      puVar4[0xe] = 0;
    }
    else {
      puVar4[0xe] = 1;
    }
    puStack00000000 = (undefined1 *)in_stack_0000001c;
    puStack00000004 = (undefined *)0x0;
    iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000d8,in_stack_000000dc,puVar4);
    if (iVar3 == 0) {
      iVar3 = FUN_02188c52();
    }
    return iVar3;
  }
  if (iVar3 == 3) {
    in_stack_000000d0 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000d4 = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000d0 == 0) {
      FUN_02188c52();
    }
    puVar4 = (undefined4 *)FUN_0217583c(0x44);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
      return 1;
    }
    *puVar4 = 0;
    FUN_02004b18(puVar4 + 1,unaff_r5 + 0x17);
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
    iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
    if (iVar3 != 0) {
      FUN_02188c6e();
    }
    iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61c0);
    if (iVar3 != 0) {
      FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
      FUN_02183f3c(unaff_r7,3,1);
      return 3;
    }
    bVar2 = false;
    do {
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        FUN_02188c6e();
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6160);
      if (iVar3 == 0) {
        iVar3 = FUN_02175824(puVar4[0xf],(puVar4[0xe] + 1) * 4);
        if (iVar3 == 0) {
          FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
          return 1;
        }
        puVar4[0xf] = iVar3;
        iVar3 = FUN_0217583c(0x1f);
        if (iVar3 == 0) {
          FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
          return 1;
        }
        *(int *)(puVar4[0xf] + puVar4[0xe] * 4) = iVar3;
        FUN_02189478(*(undefined4 *)(puVar4[0xf] + puVar4[0xe] * 4),(int)register0x00000054 + 0x2f0,
                     0x1f);
        puVar4[0xe] = puVar4[0xe] + 1;
      }
      else {
        iVar3 = FUN_02004c2c(&uStack000000f0,s_uniquenick_021a6168);
        if (iVar3 == 0) {
          if (0 < (int)puVar4[0xe]) {
            iVar3 = FUN_02175824(puVar4[0x10],puVar4[0xe] << 2);
            if (iVar3 == 0) {
              FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
              return 1;
            }
            puVar4[0x10] = iVar3;
            iVar3 = FUN_0217583c(0x15);
            if (iVar3 == 0) {
              FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
              return 1;
            }
            *(int *)(puVar4[0x10] + (puVar4[0xe] + -1) * 4) = iVar3;
            FUN_02189478(*(undefined4 *)(puVar4[0x10] + (puVar4[0xe] + -1) * 4),
                         (int)register0x00000054 + 0x2f0,0x15);
          }
        }
        else {
          iVar3 = FUN_02004c2c(&uStack000000f0,s_ndone_021a61c4);
          if (iVar3 != 0) {
            FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(unaff_r7,3,1);
            return 3;
          }
          bVar2 = true;
        }
      }
    } while (!bVar2);
    puStack00000000 = (undefined1 *)in_stack_0000001c;
    puStack00000004 = (undefined *)0x3;
    iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000d0,in_stack_000000d4,puVar4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else if (iVar3 == 4) {
    in_stack_000000c8 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000cc = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000c8 != 0) {
      puVar4 = (undefined4 *)FUN_0217583c(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      puVar4[1] = unaff_r5[0x4e];
      bVar2 = false;
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      do {
        puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
        iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_02004c2c(&uStack000000f0,s_psrdone_021a61cc);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        else {
          iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61d4);
          if (iVar3 != 0) {
            FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(unaff_r7,3,1);
            return 3;
          }
          puVar4[2] = puVar4[2] + 1;
          uVar6 = FUN_02175824(puVar4[3],puVar4[2] * 0x128);
          puVar4[3] = uVar6;
          iVar3 = puVar4[3];
          if (iVar3 == 0) {
            FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
            return 1;
          }
          iVar8 = (puVar4[2] + -1) * 0x128;
          iVar7 = iVar3 + iVar8;
          FUN_02002488(iVar7,0,0x128);
          *(undefined4 *)(iVar7 + 0x24) = 1;
          uVar6 = FUN_02005f14((int)register0x00000054 + 0x2f0);
          *(undefined4 *)(iVar3 + iVar8) = uVar6;
          bVar1 = false;
          do {
            uVar6 = uStack00000094;
            puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
            iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_02004c2c(&uStack000000f0,s_status_021a61d8);
            if (iVar3 == 0) {
              FUN_02189478(iVar7 + 0x28,(int)register0x00000054 + 0x2f0,0x100);
            }
            else {
              iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6160);
              if (iVar3 == 0) {
                FUN_02189478(iVar7 + 4,(int)register0x00000054 + 0x2f0,0x1f);
              }
            }
            iVar3 = FUN_02004c2c(&uStack000000f0,s_statuscode_021a61e0);
            if (iVar3 == 0) {
              uVar6 = FUN_02005f14((int)register0x00000054 + 0x2f0);
              *(undefined4 *)(iVar7 + 0x24) = uVar6;
            }
            else {
              iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61d4);
              if ((iVar3 == 0) ||
                 (iVar3 = FUN_02004c2c(&uStack000000f0,s_psrdone_021a61cc), iVar3 == 0)) {
                bVar1 = true;
                uStack00000094 = uVar6;
              }
            }
          } while (!bVar1);
        }
      } while (!bVar2);
      puStack00000000 = (undefined1 *)in_stack_0000001c;
      puStack00000004 = (undefined *)0x4;
      iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000c8,in_stack_000000cc,puVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar3 == 5) {
    in_stack_000000c0 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000c4 = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000c0 != 0) {
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61ec);
      if (iVar3 != 0) {
        FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(unaff_r7,3,1);
        return 3;
      }
      iVar3 = FUN_02005f14((int)register0x00000054 + 0x2f0);
      if (iVar3 == 0) {
        iVar8 = FUN_02189328(unaff_r5[2],s__pid__021a61f0,(int)register0x00000054 + 0x2f0,0x200);
        if (iVar8 == 0) {
          FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(unaff_r7,3,1);
          return 3;
        }
        iVar8 = FUN_02005f14((int)register0x00000054 + 0x2f0);
      }
      else {
        *(int *)(in_stack_00000028 + 0x418) = iVar3;
        iVar8 = 0;
      }
      piVar5 = (int *)FUN_0217583c(8);
      if (piVar5 == (int *)0x0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      *piVar5 = iVar3;
      piVar5[1] = iVar8;
      puStack00000000 = (undefined1 *)in_stack_0000001c;
      puStack00000004 = (undefined *)0x0;
      iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000c0,in_stack_000000c4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar3 == 6) {
    in_stack_000000b8 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000bc = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000b8 != 0) {
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a61f8);
      if (iVar3 != 0) {
        FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(unaff_r7,3,1);
        return 3;
      }
      iVar3 = FUN_02005f14((int)register0x00000054 + 0x2f0);
      if (iVar3 != 0) {
        *(int *)(in_stack_00000028 + 0x418) = iVar3;
      }
      iVar8 = FUN_02189328(unaff_r5[2],s__pid__021a61f0,(int)register0x00000054 + 0x2f0,0x200);
      if (iVar8 == 0) {
        if (iVar3 == 0) {
          FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(unaff_r7,3,1);
          return 3;
        }
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_02005f14((int)register0x00000054 + 0x2f0);
      }
      piVar5 = (int *)FUN_0217583c(8);
      if (piVar5 == (int *)0x0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      *piVar5 = iVar3;
      piVar5[1] = iVar8;
      puStack00000000 = (undefined1 *)in_stack_0000001c;
      puStack00000004 = (undefined *)0x0;
      iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000b8,in_stack_000000bc);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar3 == 7) {
    in_stack_000000b0 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000b4 = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000b0 != 0) {
      puVar4 = (undefined4 *)FUN_0217583c(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,s_others_021a61fc);
      if (iVar3 != 0) {
        FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(unaff_r7,3,1);
        return 3;
      }
      bVar2 = false;
      do {
        puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
        iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_02004c2c(&uStack000000f0,s_odone_021a6204);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        else {
          iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a620c);
          if (iVar3 != 0) {
            FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(unaff_r7,3,1);
            return 3;
          }
          iVar3 = FUN_02175824(puVar4[2],(puVar4[1] + 1) * 0xac);
          if (iVar3 == 0) {
            FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
            return 1;
          }
          puVar4[2] = iVar3;
          iVar3 = puVar4[2];
          iVar8 = puVar4[1];
          iVar7 = iVar3 + iVar8 * 0xac;
          FUN_02002488(iVar7,0,0xac);
          puVar4[1] = puVar4[1] + 1;
          uVar6 = FUN_02005f14((int)register0x00000054 + 0x2f0);
          *(undefined4 *)(iVar3 + iVar8 * 0xac) = uVar6;
          bVar1 = false;
          do {
            uVar6 = uStack00000094;
            puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
            iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6160);
            if (iVar3 == 0) {
              FUN_02189478(iVar7 + 4,(int)register0x00000054 + 0x2f0,0x1f);
            }
            else {
              iVar3 = FUN_02004c2c(&uStack000000f0,s_uniquenick_021a6168);
              if (iVar3 == 0) {
                FUN_02189478(iVar7 + 0x23,(int)register0x00000054 + 0x2f0,0x15);
              }
              else {
                iVar3 = FUN_02004c2c(&uStack000000f0,s_first_021a6210);
                if (iVar3 == 0) {
                  FUN_02189478(iVar7 + 0x38,(int)register0x00000054 + 0x2f0,0x1f);
                }
                else {
                  iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6218);
                  if (iVar3 == 0) {
                    FUN_02189478(iVar7 + 0x57,(int)register0x00000054 + 0x2f0,0x1f);
                  }
                  else {
                    iVar3 = FUN_02004c2c(&uStack000000f0,s_email_021a618c);
                    if (iVar3 == 0) {
                      FUN_02189478(iVar7 + 0x76,(int)register0x00000054 + 0x2f0,0x33);
                    }
                    else {
                      iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a620c);
                      if ((iVar3 == 0) ||
                         (iVar3 = FUN_02004c2c(&uStack000000f0,s_odone_021a6204), iVar3 == 0)) {
                        bVar1 = true;
                        uStack00000094 = uVar6;
                      }
                    }
                  }
                }
              }
            }
          } while (!bVar1);
        }
      } while (!bVar2);
      puStack00000000 = (undefined1 *)in_stack_0000001c;
      puStack00000004 = (undefined *)0x8;
      iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000b0,in_stack_000000b4,puVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar3 == 8) {
    in_stack_000000a8 = *(int *)(in_stack_0000001c + 0xc);
    in_stack_000000ac = *(undefined4 *)(in_stack_0000001c + 0x10);
    if (in_stack_000000a8 != 0) {
      iStack00000038 = 0;
      puVar4 = (undefined4 *)FUN_0217583c(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
      iVar3 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(&uStack000000f0,&DAT_021a6220);
      if (iVar3 != 0) {
        FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(unaff_r7,3,1);
        return 3;
      }
      uVar6 = FUN_02005f14((int)register0x00000054 + 0x2f0);
      puVar4[1] = uVar6;
      uVar6 = FUN_0217583c(puVar4[1] << 2);
      puVar4[2] = uVar6;
      if (puVar4[2] == 0) {
        FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
        return 1;
      }
      iVar3 = 0;
      bVar2 = false;
      do {
        puStack00000000 = (undefined1 *)((int)register0x00000054 + 0x2f0);
        iVar8 = FUN_02189160(unaff_r7,unaff_r5[2],&uStack00000094,&uStack000000f0);
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar8 = FUN_02004c2c(&uStack000000f0,&DAT_021a6160);
        if (iVar8 == 0) {
          uVar6 = FUN_0217583c(0x15);
          *(undefined4 *)(puVar4[2] + iVar3) = uVar6;
          if (*(int *)(puVar4[2] + iVar3) == 0) {
            FUN_0218912c(unaff_r7,s_Out_of_memory__021a5f98);
            return 1;
          }
          FUN_02189478(*(int *)(puVar4[2] + iVar3),(int)register0x00000054 + 0x2f0,0x15);
          iVar3 = iVar3 + 4;
          iStack00000038 = iStack00000038 + 1;
        }
        else {
          iVar8 = FUN_02004c2c(&uStack000000f0,s_usdone_021a6224);
          if (iVar8 != 0) {
            FUN_0218913c(unaff_r7,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(unaff_r7,3,1);
            return 3;
          }
          if (iStack00000038 != puVar4[1]) {
            FUN_02002068(s_count____arg_>numSuggestedNicks_021a622c,s_gpiSearch_c_021a5fc8,0,0x515);
          }
          puVar4[1] = iStack00000038;
          bVar2 = true;
        }
      } while (!bVar2);
      puStack00000000 = (undefined1 *)in_stack_0000001c;
      puStack00000004 = (undefined *)0x9;
      iVar3 = FUN_02183ec4(unaff_r7,in_stack_000000a8,in_stack_000000ac,puVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else {
    FUN_02002068(&DAT_021a6108,s_gpiSearch_c_021a5fc8,0,0x52a);
  }
  unaff_r5[0x50] = 1;
  return 0;
}

