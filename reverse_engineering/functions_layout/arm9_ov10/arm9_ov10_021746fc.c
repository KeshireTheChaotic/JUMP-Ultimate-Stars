
void FUN_021746fc(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int local_2e4;
  int local_2e0;
  int local_2d8;
  int local_294;
  undefined1 auStack_284 [4];
  int iStack_280;
  int iStack_27c;
  int aiStack_26c [113];
  undefined1 auStack_a8 [148];
  
  pcVar6 = *(code **)(DAT_021a7364 + 0x1108);
  pcVar1 = *(code **)(DAT_021a7364 + 0x110c);
  local_2e4 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_294 = 0;
  DAT_021a7374 = DAT_021a3bd8;
  DAT_021a7378 = 1;
  DAT_021a737c = 0x1000;
  DAT_021a738c = 20000;
  DAT_021a7380 = pcVar6;
  DAT_021a7384 = pcVar1;
  *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffffe;
  iVar2 = FUN_021745e0(DAT_021a7370,&DAT_021a7374);
  if (iVar2 != 0) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(1);
    FUN_021750ca();
  }
  iVar2 = FUN_02174574(DAT_021a7370);
  if (iVar2 != 0) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(1);
    FUN_021750ca();
  }
  iVar2 = FUN_02052f4c(DAT_020aab78);
  FUN_021744e8(DAT_021a7370,iVar2 + -1);
  if (*(int *)(DAT_021a7370 + 0x1ba0) != 0) {
    FUN_020532f8(DAT_021a7370 + 0x1b34);
  }
  if (*(int *)(DAT_021a7370 + 0x1020) == 2) {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
LAB_021747ee:
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(3);
    iVar2 = FUN_021750ca();
  }
  else {
    iVar2 = DAT_021a7370;
    if (*(int *)(DAT_021a7370 + 0x1020) != 8) goto LAB_021747ee;
  }
  iVar2 = FUN_02173964(iVar2,0);
  if (iVar2 != 1) {
    FUN_0217405c(DAT_021a7370);
    FUN_021746cc(2);
    FUN_021750ca();
  }
  FUN_02173920(DAT_021a7370,s_httpresult_021a3c84);
  iVar2 = FUN_02005f14();
  if (DAT_020a0c10 == 0x22) {
    FUN_021746cc(2);
    FUN_021750ca();
  }
  if (iVar2 != 200) {
    if (iVar2 != 0x12e) {
      FUN_0217405c(DAT_021a7370);
      FUN_021746cc(10);
      goto code_r0x021750ca;
    }
    DAT_021a736c = 1;
    if (*(int *)(DAT_021a7364 + 0x1118) != 0) {
      *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffffa;
      FUN_0217405c(DAT_021a7370);
      DAT_021a7374 = DAT_021a3720;
      DAT_021a7378 = 0;
      DAT_021a737c = 0x200;
      DAT_021a738c = 20000;
      DAT_021a7380 = pcVar6;
      DAT_021a7384 = pcVar1;
      iVar2 = FUN_02004c2c(DAT_021a3720,s_https___nas_nintendowifi_net_ac_021a3c90);
      if (iVar2 != 0) {
        DAT_021a7388 = 1;
      }
      iVar2 = FUN_021745e0(DAT_021a7370,&DAT_021a7374);
      if (iVar2 != 0) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(1);
        FUN_021750ca();
      }
      iVar2 = FUN_02173854(auStack_a8);
      if ((iVar2 == 0) || (iVar2 = FUN_02173420(DAT_021a7370,auStack_a8,1), iVar2 == 0)) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
      else {
        iVar2 = FUN_02173e78(DAT_021a7370,s_action_021a3cb0,s_message_021a3cb8,7);
        if (iVar2 == 0) {
          uVar7 = *(undefined4 *)(DAT_021a7364 + 0x1118);
          uVar3 = FUN_02004b04(uVar7);
          iVar2 = FUN_02173e78(DAT_021a7370,s_HotSpotResponse_021a3cc0,uVar7,uVar3);
          if (iVar2 == 0) {
            (*pcVar1)(s_FREE_DWCnetcheck_>body_wayport_021a3cd0,
                      *(undefined4 *)(DAT_021a7364 + 0x1118),0);
            *(undefined4 *)(DAT_021a7364 + 0x1118) = 0;
            iVar2 = FUN_02174574(DAT_021a7370);
            if (iVar2 == 0) {
              iVar2 = FUN_02052f4c(DAT_020aab78);
              FUN_021744e8(DAT_021a7370,iVar2 + -1);
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
    iVar4 = *(int *)(DAT_021a7370 + 0x1a04);
    if (iVar4 == 0) {
      FUN_0217405c();
      FUN_021746cc(2);
      goto code_r0x021750ca;
    }
    iVar5 = FUN_02004b04(iVar4);
    uVar3 = (*pcVar6)(s_ALLOC_DWCnetcheck_>body_302_021a3c00,iVar5 + 1);
    *(undefined4 *)(DAT_021a7364 + 0x1114) = uVar3;
    iVar5 = *(int *)(DAT_021a7364 + 0x1114);
    if (iVar5 == 0) {
      FUN_0217405c(DAT_021a7370);
      FUN_021746cc(4);
      goto code_r0x021750ca;
    }
    uVar3 = FUN_02004b04(iVar4);
    FUN_02004b94(iVar5,iVar4,uVar3);
  }
  FUN_0217405c(DAT_021a7370);
  FUN_0206a4f8(&iStack_280);
  if (iStack_27c == 0 && iStack_280 == 0) {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffffd;
    DAT_021a7390 = 0;
    DAT_021a73c4 = 0;
    DAT_021a73d0 = *(undefined4 *)(DAT_021a7364 + 0x1108);
    DAT_021a73d4 = *(undefined4 *)(DAT_021a7364 + 0x110c);
    iVar4 = FUN_02173340(&DAT_021a7390,DAT_021a7370);
    if (iVar4 != 0) {
      FUN_021746cc(5);
      goto code_r0x021750ca;
    }
    FUN_02173200();
    iVar4 = FUN_021731c8();
    if (iVar4 != 0x15) {
      iVar2 = FUN_021731c8();
      if (iVar2 == 9) {
        *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
      }
      else {
        FUN_02173168(aiStack_26c);
        if ((DAT_021a7368 == 1) &&
           ((aiStack_26c[0] == -0x5b06 || (iVar2 = FUN_021731c8(), iVar2 == 0xb)))) {
          *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
          FUN_02173228();
          FUN_021746cc(0xb);
          goto code_r0x021750ca;
        }
        *(int *)(DAT_021a7364 + 0x1004) = aiStack_26c[0];
      }
      FUN_02173228();
      FUN_021746cc(6);
      goto code_r0x021750ca;
    }
    FUN_02173228();
  }
  if (iVar2 == 200) {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
    FUN_021746cc(0xb);
  }
  else {
    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffffc;
    DAT_021a7374 = DAT_021a3720;
    DAT_021a7378 = 0;
    DAT_021a737c = 0x1000;
    DAT_021a738c = 40000;
    DAT_021a7380 = pcVar6;
    DAT_021a7384 = pcVar1;
    iVar2 = FUN_02004c2c(DAT_021a3720,s_https___nas_nintendowifi_net_ac_021a3c90);
    if (iVar2 != 0) {
      DAT_021a7388 = 1;
    }
    iVar2 = FUN_021745e0(DAT_021a7370,&DAT_021a7374);
    if (iVar2 == 0) {
      iVar2 = FUN_02173854(auStack_a8);
      if ((iVar2 == 0) || (iVar2 = FUN_02173420(DAT_021a7370,auStack_a8,1), iVar2 == 0)) {
        FUN_0217405c(DAT_021a7370);
        FUN_021746cc(8);
      }
      else {
        iVar2 = FUN_02173e78(DAT_021a7370,s_action_021a3cb0,s_parse_021a3cf0,5);
        if (iVar2 == 0) {
          uVar7 = *(undefined4 *)(DAT_021a7364 + 0x1114);
          uVar3 = FUN_02004b04(uVar7);
          iVar2 = FUN_02173e78(DAT_021a7370,&DAT_021a3cf8,uVar7,uVar3);
          if (iVar2 == 0) {
            (*pcVar1)(s_FREE_DWCnetcheck_>body_302_021a3c1c,*(undefined4 *)(DAT_021a7364 + 0x1114),0
                     );
            *(undefined4 *)(DAT_021a7364 + 0x1114) = 0;
            iVar2 = FUN_02174574(DAT_021a7370);
            if (iVar2 != 0) {
              FUN_0217405c(DAT_021a7370);
              FUN_021746cc(1);
              goto code_r0x021750ca;
            }
            iVar2 = FUN_02052f4c(DAT_020aab78);
            FUN_021744e8(DAT_021a7370,iVar2 + -1);
            if (*(int *)(DAT_021a7370 + 0x1ba0) != 0) {
              FUN_020532f8(DAT_021a7370 + 0x1b34);
            }
            iVar2 = *(int *)(DAT_021a7370 + 0x1020);
            if (iVar2 == 2) {
              *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
            }
            else {
              if (iVar2 == 3) {
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
              if (iVar2 == 8) {
                iVar2 = FUN_02173964(DAT_021a7370,0);
                if (iVar2 == 1) {
                  FUN_02173920(DAT_021a7370,s_httpresult_021a3c84);
                  iVar2 = FUN_02005f14();
                  if (DAT_020a0c10 == 0x22) {
                    FUN_0217405c(DAT_021a7370);
                    FUN_021746cc(2);
                  }
                  else if (iVar2 == 200) {
                    iVar2 = FUN_021738ec(DAT_021a7370,s_returncd_021a3d00,auStack_284,4);
                    if (iVar2 < 1) {
                      FUN_0217405c(DAT_021a7370);
                      FUN_021746cc(9);
                    }
                    else {
                      iVar2 = FUN_02005f14(auStack_284);
                      if (DAT_020a0c10 == 0x22) {
                        FUN_0217405c(DAT_021a7370);
                        FUN_021746cc(9);
                      }
                      else if ((DAT_021a7368 == 1) && (iVar2 == 0x72)) {
                        *(undefined4 *)(DAT_021a7364 + 0x1004) = 0;
                        FUN_021746cc(0xb);
                      }
                      else if (iVar2 < 100) {
                        iVar2 = FUN_021738ec(DAT_021a7370,&DAT_021a3d0c,0,0);
                        if (iVar2 < 1) {
                          FUN_0217405c(DAT_021a7370);
                          FUN_021746cc(9);
                        }
                        else {
                          iVar4 = FUN_021738ec(DAT_021a7370,&DAT_021a3d10,0,0);
                          if (iVar4 < 1) {
                            FUN_0217405c(DAT_021a7370);
                            FUN_021746cc(9);
                          }
                          else {
                            iVar5 = FUN_021738ec(DAT_021a7370,&DAT_021a3d18,0,0);
                            local_2e4 = (*pcVar6)(s_ALLOC_url_021a3c38,iVar2 + 1);
                            if (local_2e4 == 0) {
                              FUN_0217405c(DAT_021a7370);
                              FUN_021746cc(4);
                            }
                            else {
                              local_2e0 = (*pcVar6)(s_ALLOC_data_len_021a3c44,iVar4 + 1);
                              if (local_2e0 == 0) {
                                FUN_0217405c(DAT_021a7370);
                                FUN_021746cc(4);
                              }
                              else if ((iVar5 < 1) ||
                                      (local_2d8 = (*pcVar6)(s_ALLOC_wait_len_021a3c54,iVar5 + 1),
                                      local_2d8 != 0)) {
                                iVar2 = FUN_021738ec(DAT_021a7370,&DAT_021a3d0c,local_2e4,iVar2 + 1)
                                ;
                                if (iVar2 < 0) {
                                  FUN_0217405c(DAT_021a7370);
                                  FUN_021746cc(9);
                                }
                                else {
                                  *(undefined1 *)(local_2e4 + iVar2) = 0;
                                  iVar2 = FUN_021738ec(DAT_021a7370,&DAT_021a3d10,local_2e0,
                                                       iVar4 + 1);
                                  if (iVar2 < 0) {
                                    FUN_0217405c(DAT_021a7370);
                                    FUN_021746cc(9);
                                  }
                                  else {
                                    *(undefined1 *)(local_2e0 + iVar2) = 0;
                                    if (0 < iVar5) {
                                      iVar2 = FUN_021738ec(DAT_021a7370,&DAT_021a3d18,local_2d8,
                                                           iVar5 + 1);
                                      if (iVar2 < 0) {
                                        FUN_0217405c(DAT_021a7370);
                                        FUN_021746cc(9);
                                        goto code_r0x021750ca;
                                      }
                                      *(undefined1 *)(local_2d8 + iVar2) = 0;
                                      local_294 = FUN_02005f14(local_2d8);
                                      if (DAT_020a0c10 == 0x22) {
                                        FUN_0217405c(DAT_021a7370);
                                        FUN_021746cc(9);
                                        goto code_r0x021750ca;
                                      }
                                      local_294 = local_294 * 1000;
                                      if (180000 < local_294) {
                                        local_294 = 180000;
                                      }
                                    }
                                    FUN_0217405c(DAT_021a7370);
                                    *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffffffb;
                                    DAT_021a7378 = 0;
                                    DAT_021a737c = 0x1000;
                                    DAT_021a738c = 120000;
                                    DAT_021a7374 = local_2e4;
                                    DAT_021a7380 = pcVar6;
                                    DAT_021a7384 = pcVar1;
                                    iVar2 = FUN_021745e0(DAT_021a7370,&DAT_021a7374);
                                    if (iVar2 == 0) {
                                      iVar2 = FUN_02173e14(DAT_021a7370,local_2e0);
                                      if (iVar2 == 0) {
                                        iVar2 = FUN_02174574(DAT_021a7370);
                                        if (iVar2 == 0) {
                                          iVar2 = FUN_02052f4c(DAT_020aab78);
                                          FUN_021744e8(DAT_021a7370,iVar2 + -1);
                                          if (*(int *)(DAT_021a7370 + 0x1ba0) != 0) {
                                            FUN_020532f8(DAT_021a7370 + 0x1b34);
                                          }
                                          if (*(int *)(DAT_021a7370 + 0x1020) == 2) {
                                            *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xffffffff;
                                          }
                                          else if (*(int *)(DAT_021a7370 + 0x1020) == 8) {
                                            iVar2 = FUN_02173964(DAT_021a7370,1);
                                            if (iVar2 == 1) {
                                              iVar2 = *(int *)(DAT_021a7370 + 0x1a04);
                                              if (iVar2 == 0) {
                                                FUN_0217405c();
                                                FUN_021746cc(2);
                                              }
                                              else {
                                                iVar4 = FUN_02004b04(iVar2);
                                                uVar3 = (*pcVar6)(
                                                  s_ALLOC_DWCnetcheck_>body_wayport_021a3c64,
                                                  iVar4 + 1);
                                                *(undefined4 *)(DAT_021a7364 + 0x1118) = uVar3;
                                                iVar4 = *(int *)(DAT_021a7364 + 0x1118);
                                                if (iVar4 == 0) {
                                                  FUN_0217405c(DAT_021a7370);
                                                  FUN_021746cc(4);
                                                }
                                                else {
                                                  uVar3 = FUN_02004b04(iVar2);
                                                  FUN_02004b94(iVar4,iVar2,uVar3);
                                                  FUN_0217405c(DAT_021a7370);
                                                  FUN_02052ea0(local_294);
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
                    if ((DAT_021a7368 == 1) && (iVar2 == 0x12e)) {
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
  if (local_2e4 != 0) {
    (*pcVar1)(s_FREE_url_021a3d20,local_2e4,0);
  }
  if (local_2e0 != 0) {
    (*pcVar1)(s_FREE_data_021a3d2c,local_2e0,0);
  }
  if (local_2d8 != 0) {
    (*pcVar1)(s_FREE_wait_021a3d38,local_2d8,0);
  }
  return;
}

