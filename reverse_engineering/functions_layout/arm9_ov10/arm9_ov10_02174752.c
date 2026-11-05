
void FUN_02174752(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r4;
  code *unaff_r5;
  int *unaff_r6;
  undefined4 uVar5;
  code *in_stack_00000000;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined2 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined1 in_stack_00000058;
  int in_stack_0000005c;
  undefined1 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined1 uStack0000006c;
  undefined4 uStack00000070;
  int in_stack_00000074;
  undefined4 uStack00000084;
  undefined1 auStack_7ffffffe [2147483646];
  
  DAT_021a7374 = DAT_021a3bd8;
  DAT_021a7378 = 1;
  DAT_021a737c = 0x1000;
  DAT_021a7384 = in_stack_00000000;
  DAT_021a738c = 20000;
  DAT_021a7380 = unaff_r5;
  *(undefined4 *)(*unaff_r6 + 0x1004) = in_stack_00000028;
  iVar1 = FUN_021745e0(*unaff_r4,&DAT_021a7374);
  if (iVar1 != 0) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(1);
    FUN_021750ca();
  }
  iVar1 = FUN_02174574(*unaff_r4);
  if (iVar1 != 0) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(1);
    FUN_021750ca();
  }
  iVar1 = FUN_02052f4c(DAT_020aab78);
  FUN_021744e8(*unaff_r4,iVar1 + -1);
  if (*(int *)(*unaff_r4 + 0x1ba0) != 0) {
    FUN_020532f8(*unaff_r4 + 0x1b34);
  }
  iVar1 = *unaff_r4;
  if (*(int *)(iVar1 + 0x1020) == 2) {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
LAB_021747ee:
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(3);
    iVar1 = FUN_021750ca();
  }
  else if (*(int *)(iVar1 + 0x1020) != 8) goto LAB_021747ee;
  iVar1 = FUN_02173964(iVar1,in_stack_0000002c);
  if (iVar1 != 1) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(2);
    FUN_021750ca();
  }
  FUN_02173920(*unaff_r4,s_httpresult_021a3c84);
  iVar1 = FUN_02005f14();
  if (DAT_020a0c10 == 0x22) {
    FUN_021746cc(2);
    FUN_021750ca();
  }
  if (iVar1 != 200) {
    if (iVar1 != 0x12e) {
      FUN_0217405c(DAT_021a7370);
      FUN_021746cc(10);
      goto code_r0x021750ca;
    }
    DAT_021a736c = 1;
    if (*(int *)(*unaff_r6 + 0x1118) != 0) {
      *(undefined4 *)(*unaff_r6 + 0x1004) = 0xfffffffa;
      FUN_0217405c(DAT_021a7370);
      DAT_021a7374 = DAT_021a3720;
      DAT_021a7378 = 0;
      DAT_021a737c = 0x200;
      DAT_021a7384 = in_stack_00000000;
      DAT_021a738c = 20000;
      DAT_021a7380 = unaff_r5;
      iVar1 = FUN_02004c2c(DAT_021a3720,s_https___nas_nintendowifi_net_ac_021a3c90);
      if (iVar1 != 0) {
        DAT_021a7388 = 1;
      }
      iVar1 = FUN_021745e0(DAT_021a7370,&DAT_021a7374);
      if (iVar1 != 0) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(1);
        FUN_021750ca();
      }
      iVar1 = FUN_02173854((int)register0x00000054 + 0x248);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_02173420(DAT_021a7370,(int)register0x00000054 + 0x248,1), iVar1 == 0)) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
      else {
        iVar1 = FUN_02173e78(DAT_021a7370,s_action_021a3cb0,s_message_021a3cb8,7);
        if (iVar1 == 0) {
          uVar5 = *(undefined4 *)(DAT_021a7364 + 0x1118);
          uVar2 = FUN_02004b04(uVar5);
          iVar1 = FUN_02173e78(DAT_021a7370,s_HotSpotResponse_021a3cc0,uVar5,uVar2);
          if (iVar1 == 0) {
            (*in_stack_00000000)
                      (s_FREE_DWCnetcheck_>body_wayport_021a3cd0,
                       *(undefined4 *)(DAT_021a7364 + 0x1118),0);
            *(undefined4 *)(DAT_021a7364 + 0x1118) = 0;
            iVar1 = FUN_02174574(DAT_021a7370);
            if (iVar1 == 0) {
              iVar1 = FUN_02052f4c(DAT_020aab78);
              FUN_021744e8(DAT_021a7370,iVar1 + -1);
              if (*(int *)(DAT_021a7370 + 0x1ba0) != 0) {
                FUN_020532f8(DAT_021a7370 + 0x1b34);
              }
              if (*(int *)(DAT_021a7370 + 0x1020) == 2) {
                *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
              }
              else if (*(int *)(DAT_021a7370 + 0x1020) == 8) {
                FUN_0217405c();
                FUN_021746cc(7);
                goto code_r0x021750ca;
              }
              FUN_0217405c(DAT_021a7370);
              FUN_021746cc(3);
            }
            else {
              FUN_0217405c(DAT_021a7370);
              FUN_021746cc(1);
            }
            goto code_r0x021750ca;
          }
        }
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
      goto code_r0x021750ca;
    }
    iVar3 = *(int *)(*unaff_r4 + 0x1a04);
    if (iVar3 == 0) {
      FUN_0217405c();
      FUN_021746cc(2);
      goto code_r0x021750ca;
    }
    iVar4 = FUN_02004b04(iVar3);
    uVar2 = (*unaff_r5)(s_ALLOC_DWCnetcheck_>body_302_021a3c00,iVar4 + 1);
    *(undefined4 *)(*unaff_r6 + 0x1114) = uVar2;
    iVar4 = *(int *)(*unaff_r6 + 0x1114);
    if (iVar4 == 0) {
      FUN_0217405c(DAT_021a7370);
      FUN_021746cc(4);
      goto code_r0x021750ca;
    }
    uVar2 = FUN_02004b04(iVar3);
    FUN_02004b94(iVar4,iVar3,uVar2);
  }
  FUN_0217405c(*unaff_r4);
  FUN_0206a4f8(&uStack00000070);
  if (in_stack_00000074 == 0 && uStack00000070 == 0) {
    *(undefined4 *)(*unaff_r6 + 0x1004) = in_stack_00000030;
    DAT_021a7390 = in_stack_00000034;
    DAT_021a73c4 = (undefined1)in_stack_00000034;
    DAT_021a73d0 = *(undefined4 *)(*unaff_r6 + 0x1108);
    DAT_021a73d4 = *(undefined4 *)(*unaff_r6 + 0x110c);
    iVar3 = FUN_02173340(&DAT_021a7390,*unaff_r4);
    if (iVar3 != 0) {
      FUN_021746cc(5);
      goto code_r0x021750ca;
    }
    FUN_02173200();
    iVar3 = FUN_021731c8();
    if (iVar3 != 0x15) {
      iVar1 = FUN_021731c8();
      if (iVar1 == 9) {
        *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
      }
      else {
        FUN_02173168(&uStack00000084);
        if ((DAT_021a7368 == 1) &&
           ((uStack00000084 == -0x5b06 || (iVar1 = FUN_021731c8(), iVar1 == 0xb)))) {
          *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
          FUN_02173228();
          FUN_021746cc(0xb);
          goto code_r0x021750ca;
        }
        *(int *)(DAT_021a7364 + 0x1004) = uStack00000084;
      }
      FUN_02173228();
      FUN_021746cc(6);
      goto code_r0x021750ca;
    }
    FUN_02173228();
  }
  if (iVar1 == 200) {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
    FUN_021746cc(0xb);
  }
  else {
    *(undefined4 *)(*unaff_r6 + 0x1004) = in_stack_00000038;
    DAT_021a7374 = DAT_021a3720;
    DAT_021a7378 = in_stack_0000003c;
    DAT_021a737c = 0x1000;
    DAT_021a7384 = in_stack_00000000;
    DAT_021a738c = 40000;
    DAT_021a7380 = unaff_r5;
    iVar1 = FUN_02004c2c(DAT_021a3720,s_https___nas_nintendowifi_net_ac_021a3c90);
    if (iVar1 != 0) {
      DAT_021a7388 = 1;
    }
    iVar1 = FUN_021745e0(*unaff_r4,&DAT_021a7374);
    if (iVar1 == 0) {
      iVar1 = FUN_02173854((int)register0x00000054 + 0x248);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_02173420(*unaff_r4,(int)register0x00000054 + 0x248,1), iVar1 == 0)) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
      else {
        iVar1 = FUN_02173e78(*unaff_r4,s_action_021a3cb0,s_parse_021a3cf0,5);
        if (iVar1 == 0) {
          uVar5 = *(undefined4 *)(*unaff_r6 + 0x1114);
          uVar2 = FUN_02004b04(uVar5);
          iVar1 = FUN_02173e78(*unaff_r4,&DAT_021a3cf8,uVar5,uVar2);
          if (iVar1 == 0) {
            (*in_stack_00000000)
                      (s_FREE_DWCnetcheck_>body_302_021a3c1c,*(undefined4 *)(*unaff_r6 + 0x1114),
                       in_stack_00000040);
            *(undefined4 *)(*unaff_r6 + 0x1114) = in_stack_00000044;
            iVar1 = FUN_02174574(*unaff_r4);
            if (iVar1 != 0) {
              FUN_0217405c(DAT_021a7370);
              FUN_021746cc(1);
              goto code_r0x021750ca;
            }
            iVar1 = FUN_02052f4c(DAT_020aab78);
            FUN_021744e8(*unaff_r4,iVar1 + -1);
            if (*(int *)(*unaff_r4 + 0x1ba0) != 0) {
              FUN_020532f8(*unaff_r4 + 0x1b34);
            }
            iVar1 = *(int *)(*unaff_r4 + 0x1020);
            if (iVar1 == 2) {
              *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
            }
            else {
              if (iVar1 == 3) {
                FUN_0217405c();
                if (DAT_021a7368 == 1) {
                  *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
                  FUN_021746cc(0xb);
                }
                else {
                  FUN_021746cc(3);
                }
                goto code_r0x021750ca;
              }
              if (iVar1 == 8) {
                iVar1 = FUN_02173964(*unaff_r4,in_stack_00000048);
                if (iVar1 == 1) {
                  FUN_02173920(*unaff_r4,s_httpresult_021a3c84);
                  iVar1 = FUN_02005f14();
                  if (DAT_020a0c10 == 0x22) {
                    FUN_0217405c(DAT_021a7370);
                    FUN_021746cc(2);
                  }
                  else if (iVar1 == 200) {
                    iVar1 = FUN_021738ec(*unaff_r4,s_returncd_021a3d00,&uStack0000006c,4);
                    if (iVar1 < 1) {
                      FUN_0217405c(DAT_021a7370);
                      FUN_021746cc(9);
                    }
                    else {
                      iVar1 = FUN_02005f14(&uStack0000006c);
                      if (DAT_020a0c10 == 0x22) {
                        FUN_0217405c(DAT_021a7370);
                        FUN_021746cc(9);
                      }
                      else if ((DAT_021a7368 == 1) && (iVar1 == 0x72)) {
                        *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
                        FUN_021746cc(0xb);
                      }
                      else if (iVar1 < 100) {
                        iVar1 = FUN_021738ec(*unaff_r4,&DAT_021a3d0c,in_stack_0000004c,
                                             in_stack_0000004c);
                        if (iVar1 < 1) {
                          FUN_0217405c(DAT_021a7370);
                          FUN_021746cc(9);
                        }
                        else {
                          iVar3 = FUN_021738ec(*unaff_r4,&DAT_021a3d10,in_stack_00000050,
                                               in_stack_00000050);
                          if (iVar3 < 1) {
                            FUN_0217405c(DAT_021a7370);
                            FUN_021746cc(9);
                          }
                          else {
                            iVar4 = FUN_021738ec(*unaff_r4,&DAT_021a3d18,in_stack_00000054,
                                                 in_stack_00000054);
                            in_stack_0000000c = (*unaff_r5)(s_ALLOC_url_021a3c38,iVar1 + 1);
                            if (in_stack_0000000c == 0) {
                              FUN_0217405c(DAT_021a7370);
                              FUN_021746cc(4);
                            }
                            else {
                              in_stack_00000010 = (*unaff_r5)(s_ALLOC_data_len_021a3c44,iVar3 + 1);
                              if (in_stack_00000010 == 0) {
                                FUN_0217405c(DAT_021a7370);
                                FUN_021746cc(4);
                              }
                              else if ((iVar4 < 1) ||
                                      (in_stack_00000018 =
                                            (*unaff_r5)(s_ALLOC_wait_len_021a3c54,iVar4 + 1),
                                      in_stack_00000018 != 0)) {
                                iVar1 = FUN_021738ec(*unaff_r4,&DAT_021a3d0c,in_stack_0000000c,
                                                     iVar1 + 1);
                                if (iVar1 < 0) {
                                  FUN_0217405c(DAT_021a7370);
                                  FUN_021746cc(9);
                                }
                                else {
                                  *(undefined1 *)(in_stack_0000000c + iVar1) = in_stack_00000058;
                                  iVar1 = FUN_021738ec(*unaff_r4,&DAT_021a3d10,in_stack_00000010,
                                                       iVar3 + 1);
                                  if (iVar1 < 0) {
                                    FUN_0217405c(DAT_021a7370);
                                    FUN_021746cc(9);
                                  }
                                  else {
                                    *(char *)(in_stack_00000010 + iVar1) = (char)in_stack_0000005c;
                                    if (0 < iVar4) {
                                      iVar1 = FUN_021738ec(*unaff_r4,&DAT_021a3d18,in_stack_00000018
                                                           ,iVar4 + 1);
                                      if (iVar1 < 0) {
                                        FUN_0217405c(DAT_021a7370);
                                        FUN_021746cc(9);
                                        goto code_r0x021750ca;
                                      }
                                      *(undefined1 *)(in_stack_00000018 + iVar1) = in_stack_00000060
                                      ;
                                      in_stack_0000005c = FUN_02005f14(in_stack_00000018);
                                      if (DAT_020a0c10 == 0x22) {
                                        FUN_0217405c(DAT_021a7370);
                                        FUN_021746cc(9);
                                        goto code_r0x021750ca;
                                      }
                                      in_stack_0000005c = in_stack_0000005c * 1000;
                                      if (180000 < in_stack_0000005c) {
                                        in_stack_0000005c = 180000;
                                      }
                                    }
                                    FUN_0217405c(*unaff_r4);
                                    *(undefined4 *)(*unaff_r6 + 0x1004) = in_stack_00000064;
                                    DAT_021a7378 = in_stack_00000068;
                                    DAT_021a737c = 0x1000;
                                    DAT_021a7384 = in_stack_00000000;
                                    DAT_021a738c = 120000;
                                    DAT_021a7374 = in_stack_0000000c;
                                    DAT_021a7380 = unaff_r5;
                                    iVar1 = FUN_021745e0(*unaff_r4,&DAT_021a7374);
                                    if (iVar1 == 0) {
                                      iVar1 = FUN_02173e14(*unaff_r4,in_stack_00000010);
                                      if (iVar1 == 0) {
                                        iVar1 = FUN_02174574(*unaff_r4);
                                        if (iVar1 == 0) {
                                          iVar1 = FUN_02052f4c(DAT_020aab78);
                                          FUN_021744e8(*unaff_r4,iVar1 + -1);
                                          if (*(int *)(*unaff_r4 + 0x1ba0) != 0) {
                                            FUN_020532f8(*unaff_r4 + 0x1b34);
                                          }
                                          iVar1 = *(int *)(*unaff_r4 + 0x1020);
                                          if (iVar1 == 2) {
                                            *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
                                          }
                                          else if (iVar1 == 8) {
                                            iVar1 = FUN_02173964(*unaff_r4,1);
                                            if (iVar1 == 1) {
                                              iVar1 = *(int *)(*unaff_r4 + 0x1a04);
                                              if (iVar1 == 0) {
                                                FUN_0217405c();
                                                FUN_021746cc(2);
                                              }
                                              else {
                                                iVar3 = FUN_02004b04(iVar1);
                                                uVar2 = (*unaff_r5)(
                                                  s_ALLOC_DWCnetcheck_>body_wayport_021a3c64,
                                                  iVar3 + 1);
                                                *(undefined4 *)(*unaff_r6 + 0x1118) = uVar2;
                                                iVar3 = *(int *)(*unaff_r6 + 0x1118);
                                                if (iVar3 == 0) {
                                                  FUN_0217405c(DAT_021a7370);
                                                  FUN_021746cc(4);
                                                }
                                                else {
                                                  uVar2 = FUN_02004b04(iVar1);
                                                  FUN_02004b94(iVar3,iVar1,uVar2);
                                                  FUN_0217405c(*unaff_r4);
                                                  FUN_02052ea0(in_stack_0000005c);
                                                  FUN_02174752();
                                                }
                                              }
                                            }
                                            else {
                                              FUN_0217405c(DAT_021a7370);
                                              FUN_021746cc(2);
                                            }
                                            goto code_r0x021750ca;
                                          }
                                          FUN_0217405c(DAT_021a7370);
                                          FUN_021746cc(3);
                                        }
                                        else {
                                          FUN_0217405c(DAT_021a7370);
                                          FUN_021746cc(1);
                                        }
                                      }
                                      else {
                                        FUN_0217405c(DAT_021a7370);
                                        FUN_021746cc(8);
                                      }
                                    }
                                    else {
                                      FUN_0217405c(DAT_021a7370);
                                      FUN_021746cc(1);
                                    }
                                  }
                                }
                              }
                              else {
                                FUN_0217405c(DAT_021a7370);
                                FUN_021746cc(4);
                              }
                            }
                          }
                        }
                      }
                      else {
                        FUN_0217405c(DAT_021a7370);
                        FUN_021746cc(6);
                      }
                    }
                  }
                  else {
                    FUN_0217405c(DAT_021a7370);
                    if ((DAT_021a7368 == 1) && (iVar1 == 0x12e)) {
                      *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
                      FUN_021746cc(0xb);
                    }
                    else {
                      FUN_021746cc(2);
                    }
                  }
                }
                else {
                  FUN_0217405c(DAT_021a7370);
                  FUN_021746cc(2);
                }
                goto code_r0x021750ca;
              }
            }
            FUN_0217405c(DAT_021a7370);
            FUN_021746cc(3);
            goto code_r0x021750ca;
          }
        }
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
    }
    else {
      FUN_0217405c(DAT_021a7370);
      FUN_021746cc(1);
    }
  }
code_r0x021750ca:
  if (in_stack_0000000c != 0) {
    (*in_stack_00000000)(s_FREE_url_021a3d20,in_stack_0000000c,0);
  }
  if (in_stack_00000010 != 0) {
    (*in_stack_00000000)(s_FREE_data_021a3d2c,in_stack_00000010,0);
  }
  if (in_stack_00000018 != 0) {
    (*in_stack_00000000)(s_FREE_wait_021a3d38,in_stack_00000018,0);
  }
  return;
}

