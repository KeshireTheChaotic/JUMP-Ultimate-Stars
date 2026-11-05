
/* WARNING: Removing unreachable block (ram,0x02188c5e) */
/* WARNING: Removing unreachable block (ram,0x02188c68) */

int FUN_0218792c(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_4d0;
  int aiStack_478 [2];
  code *pcStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [4];
  undefined1 auStack_464 [4];
  int iStack_460;
  undefined4 uStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  int iStack_450;
  undefined4 uStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined4 uStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  int iStack_424;
  int iStack_420;
  int iStack_41c;
  undefined1 auStack_418 [512];
  char acStack_218 [516];
  
  iVar3 = *param_1;
  piVar10 = *(int **)(param_2 + 4);
  iVar4 = FUN_02183728(param_1,piVar10[1],piVar10 + 6,auStack_464,1,&DAT_021a5fd4);
  if (iVar4 != 0) {
    FUN_02188c6e();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    iVar4 = FUN_02189298(param_1,piVar10[1],aiStack_478);
    if (iVar4 != 0) {
      FUN_02188c6e();
    }
    if (aiStack_478[0] == 4) {
      FUN_0218913c(param_1,0xd01,s_Could_not_connect_to_the_search_m_021a5fd8);
      FUN_02183f3c(param_1,4,0);
      return 4;
    }
    if (aiStack_478[0] != 3) {
      FUN_02188c5a();
    }
    iVar4 = *piVar10;
    if (iVar4 == 1) {
      FUN_02183b94(param_1,piVar10 + 6,s__search__021a6004);
      FUN_02183b94(param_1,piVar10 + 6,s__sesskey__021a6010);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x198));
      FUN_02183b94(param_1,piVar10 + 6,s__profileid__021a601c);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x1a0));
      FUN_02183b94(param_1,piVar10 + 6,s__namespaceid__021a6028);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x470));
      if ((char)piVar10[10] != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__nick__021a6038);
        FUN_02183b94(param_1,piVar10 + 6,piVar10 + 10);
      }
      if (*(char *)((int)piVar10 + 0x47) != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__uniquenick__021a6040);
        FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0x47);
      }
      if ((char)piVar10[0x17] != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__email__021a6050);
        FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x17);
      }
      if (*(char *)((int)piVar10 + 0x8f) != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__firstname__021a6058);
        FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0x8f);
      }
      if (*(char *)((int)piVar10 + 0xae) != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__lastname__021a6064);
        FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0xae);
      }
      if (piVar10[0x4c] != 0) {
        FUN_02183b94(param_1,piVar10 + 6,s__icquin__021a6070);
        FUN_02183b70(param_1,piVar10 + 6,piVar10[0x4c]);
      }
      if (0 < piVar10[0x4d]) {
        FUN_02183b94(param_1,piVar10 + 6,s__skip__021a607c);
        FUN_02183b70(param_1,piVar10 + 6,piVar10[0x4d]);
      }
    }
    else if (iVar4 == 2) {
      FUN_02183b94(param_1,piVar10 + 6,s__valid__021a6084);
      FUN_02183b94(param_1,piVar10 + 6,s__email__021a6050);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x17);
    }
    else if (iVar4 == 3) {
      FUN_02183b94(param_1,piVar10 + 6,s__nicks__021a608c);
      FUN_02183b94(param_1,piVar10 + 6,s__email__021a6050);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x17);
      FUN_02183b94(param_1,piVar10 + 6,s__pass__021a6094);
      FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0xcd);
      FUN_02183b94(param_1,piVar10 + 6,s__namespaceid__021a6028);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x470));
    }
    else if (iVar4 == 4) {
      FUN_02183b94(param_1,piVar10 + 6,s__pmatch__021a609c);
      FUN_02183b94(param_1,piVar10 + 6,s__sesskey__021a6010);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x198));
      FUN_02183b94(param_1,piVar10 + 6,s__profileid__021a601c);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x1a0));
      FUN_02183b94(param_1,piVar10 + 6,s__productid__021a60a8);
      FUN_02183b70(param_1,piVar10 + 6,piVar10[0x4e]);
    }
    else if (iVar4 == 5) {
      FUN_02183b94(param_1,piVar10 + 6,s__check__021a60b4);
      FUN_02183b94(param_1,piVar10 + 6,s__nick__021a6038);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 10);
      FUN_02183b94(param_1,piVar10 + 6,s__email__021a6050);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x17);
      FUN_02183b94(param_1,piVar10 + 6,s__pass__021a6094);
      FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0xcd);
    }
    else if (iVar4 == 6) {
      FUN_02183b94(param_1,piVar10 + 6,s__newuser__021a60bc);
      FUN_02183b94(param_1,piVar10 + 6,s__nick__021a6038);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 10);
      FUN_02183b94(param_1,piVar10 + 6,s__email__021a6050);
      FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x17);
      FUN_02183b94(param_1,piVar10 + 6,s__pass__021a6094);
      FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0xcd);
      FUN_02183b94(param_1,piVar10 + 6,s__productID__021a60c8);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x46c));
      FUN_02183b94(param_1,piVar10 + 6,s__namespaceid__021a6028);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x470));
      FUN_02183b94(param_1,piVar10 + 6,s__uniquenick__021a6040);
      FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0x47);
      if ((char)piVar10[0x3b] != '\0') {
        FUN_02183b94(param_1,piVar10 + 6,s__cdkey__021a60d4);
        FUN_02183b94(param_1,piVar10 + 6,piVar10 + 0x3b);
      }
    }
    else if (iVar4 == 7) {
      FUN_02183b94(param_1,piVar10 + 6,s__others__021a60dc);
      FUN_02183b94(param_1,piVar10 + 6,s__sesskey__021a6010);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x198));
      FUN_02183b94(param_1,piVar10 + 6,s__profileid__021a601c);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x1a0));
      FUN_02183b94(param_1,piVar10 + 6,s__namespaceid__021a6028);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x470));
    }
    else if (iVar4 == 8) {
      FUN_02183b94(param_1,piVar10 + 6,s__uniquesearch__021a60e8);
      FUN_02183b94(param_1,piVar10 + 6,s__preferrednick__021a60f8);
      FUN_02183b94(param_1,piVar10 + 6,(int)piVar10 + 0x47);
      FUN_02183b94(param_1,piVar10 + 6,s__namespaceid__021a6028);
      FUN_02183b70(param_1,piVar10 + 6,*(undefined4 *)(iVar3 + 0x470));
    }
    else {
      FUN_02002068(&DAT_021a6108,s_gpiSearch_c_021a5fc8,0,0x275);
    }
    FUN_02183b94(param_1,piVar10 + 6,s__gamename__021a610c);
    FUN_02183b94(param_1,piVar10 + 6,&DAT_020a0604);
    FUN_02183b94(param_1,piVar10 + 6,s__final__021a6118);
    *(undefined4 *)(param_2 + 0x14) = 4;
    iVar4 = FUN_02188c5a();
  }
  if (iVar4 != 4) {
    FUN_02188c5a();
  }
  iVar4 = FUN_02183824(param_1,piVar10[1],piVar10 + 2,auStack_468,auStack_464,&DAT_021a5fd4);
  if (iVar4 != 0) {
    if (iVar4 != 3) {
      FUN_02188c6e();
    }
    FUN_0218913c(param_1,0xd01,s_There_was_an_error_reading_from_t_021a6120);
    FUN_02183f3c(param_1,3,0);
    return 3;
  }
  iVar4 = FUN_02004d40(piVar10[2],s__final__021a6118);
  if (iVar4 == 0) {
    FUN_02188c5a();
  }
  aiStack_478[1] = 0;
  *(undefined4 *)(param_2 + 0x14) = 5;
  iVar4 = FUN_021893dc(param_1,piVar10[2],1);
  if (iVar4 != 0) {
    piVar10[0x50] = 1;
    return 4;
  }
  iVar4 = *piVar10;
  if (iVar4 == 1) {
    bVar2 = false;
    uStack_428 = 0;
    iStack_424 = 0;
    iStack_41c = 0;
    iStack_420 = 0x601;
    do {
      iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar4 != 0) {
        FUN_02188c6e();
      }
      iVar4 = FUN_02004c2c(auStack_418,s_bsrdone_021a614c);
      if (iVar4 == 0) {
        iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
        if (iVar4 != 0) {
          FUN_02188c6e();
        }
        iVar4 = FUN_02004c2c(auStack_418,&DAT_021a6154);
        if ((iVar4 == 0) && (iVar4 = FUN_02004c2c(acStack_218,&DAT_021a6108), iVar4 != 0)) {
          iStack_420 = 0x600;
        }
        bVar2 = true;
      }
      else {
        iVar4 = FUN_02004c2c(auStack_418,&DAT_021a615c);
        if (iVar4 != 0) {
          FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(param_1,3,1);
          return 3;
        }
        iStack_424 = iStack_424 + 1;
        iVar4 = FUN_02175824(iStack_41c,iStack_424 * 0xac);
        iStack_41c = iVar4;
        if (iVar4 == 0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
          return 1;
        }
        iVar9 = (iStack_424 + -1) * 0xac;
        iVar8 = iVar4 + iVar9;
        FUN_02002488(iVar8,0,0xac);
        uVar7 = FUN_02005f14(acStack_218);
        *(undefined4 *)(iVar4 + iVar9) = uVar7;
        bVar1 = false;
        do {
          iVar4 = aiStack_478[1];
          iVar9 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
          if (iVar9 != 0) {
            FUN_02188c6e();
          }
          iVar9 = FUN_02004c2c(auStack_418,&DAT_021a6160);
          if (iVar9 == 0) {
            FUN_02189478(iVar8 + 4,acStack_218,0x1f);
          }
          else {
            iVar9 = FUN_02004c2c(auStack_418,s_uniquenick_021a6168);
            if (iVar9 == 0) {
              FUN_02189478(iVar8 + 0x23,acStack_218,0x15);
            }
            else {
              iVar9 = FUN_02004c2c(auStack_418,s_firstname_021a6174);
              if (iVar9 == 0) {
                FUN_02189478(iVar8 + 0x38,acStack_218,0x1f);
              }
              else {
                iVar9 = FUN_02004c2c(auStack_418,s_lastname_021a6180);
                if (iVar9 == 0) {
                  FUN_02189478(iVar8 + 0x57,acStack_218,0x1f);
                }
                else {
                  iVar9 = FUN_02004c2c(auStack_418,s_email_021a618c);
                  if (iVar9 == 0) {
                    FUN_02189478(iVar8 + 0x76,acStack_218,0x33);
                  }
                  else {
                    iVar9 = FUN_02004c2c(auStack_418,&DAT_021a615c);
                    if ((iVar9 == 0) ||
                       (iVar9 = FUN_02004c2c(auStack_418,s_bsrdone_021a614c), iVar9 == 0)) {
                      bVar1 = true;
                      aiStack_478[1] = iVar4;
                    }
                  }
                }
              }
            }
          }
        } while (!bVar1);
      }
      iVar4 = iStack_420;
    } while (!bVar2);
    pcStack_470 = *(code **)(param_2 + 0xc);
    uStack_46c = *(undefined4 *)(param_2 + 0x10);
    if (pcStack_470 != (code *)0x0) {
      (*pcStack_470)(param_1,&uStack_428);
    }
    if (((iVar4 == 0x600) && (iStack_420 == 0x600)) &&
       (iVar4 = FUN_02188c88(param_1,piVar10 + 10,(int)piVar10 + 0x47,piVar10 + 0x17,
                             (int)piVar10 + 0x8f,(int)piVar10 + 0xae,piVar10[0x4c],
                             iStack_424 + piVar10[0x4d],*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)),
       iVar4 != 0)) {
      FUN_02188c6e();
    }
    FUN_02175814(iStack_41c);
    iStack_41c = 0;
    iVar4 = FUN_02188c52();
  }
  if (iVar4 == 2) {
    iStack_430 = *(int *)(param_2 + 0xc);
    uStack_42c = *(undefined4 *)(param_2 + 0x10);
    if (iStack_430 == 0) {
      FUN_02188c52();
    }
    iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
    if (iVar3 != 0) {
      FUN_02188c6e();
    }
    iVar3 = FUN_02004c2c(auStack_418,&DAT_021a61bc);
    if (iVar3 != 0) {
      FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    puVar5 = (undefined4 *)FUN_0217583c(0x3c);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
      return 1;
    }
    *puVar5 = 0;
    FUN_02189478(puVar5 + 1,piVar10 + 0x17,0x33);
    if (acStack_218[0] == '0') {
      puVar5[0xe] = 0;
    }
    else {
      puVar5[0xe] = 1;
    }
    iVar3 = FUN_02183ec4(param_1,iStack_430,uStack_42c,puVar5,param_2,0);
    if (iVar3 == 0) {
      iVar3 = FUN_02188c52();
    }
    return iVar3;
  }
  if (iVar4 == 3) {
    iStack_438 = *(int *)(param_2 + 0xc);
    uStack_434 = *(undefined4 *)(param_2 + 0x10);
    if (iStack_438 == 0) {
      FUN_02188c52();
    }
    puVar5 = (undefined4 *)FUN_0217583c(0x44);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
      return 1;
    }
    *puVar5 = 0;
    FUN_02004b18(puVar5 + 1,piVar10 + 0x17);
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
    if (iVar3 != 0) {
      FUN_02188c6e();
    }
    iVar3 = FUN_02004c2c(auStack_418,&DAT_021a61c0);
    if (iVar3 != 0) {
      FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    bVar2 = false;
    do {
      iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar3 != 0) {
        FUN_02188c6e();
      }
      iVar3 = FUN_02004c2c(auStack_418,&DAT_021a6160);
      if (iVar3 == 0) {
        iVar3 = FUN_02175824(puVar5[0xf],(puVar5[0xe] + 1) * 4);
        if (iVar3 == 0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
          return 1;
        }
        puVar5[0xf] = iVar3;
        iVar3 = FUN_0217583c(0x1f);
        if (iVar3 == 0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
          return 1;
        }
        *(int *)(puVar5[0xf] + puVar5[0xe] * 4) = iVar3;
        FUN_02189478(*(undefined4 *)(puVar5[0xf] + puVar5[0xe] * 4),acStack_218,0x1f);
        puVar5[0xe] = puVar5[0xe] + 1;
      }
      else {
        iVar3 = FUN_02004c2c(auStack_418,s_uniquenick_021a6168);
        if (iVar3 == 0) {
          if (0 < (int)puVar5[0xe]) {
            iVar3 = FUN_02175824(puVar5[0x10],puVar5[0xe] << 2);
            if (iVar3 == 0) {
              FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
              return 1;
            }
            puVar5[0x10] = iVar3;
            iVar3 = FUN_0217583c(0x15);
            if (iVar3 == 0) {
              FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
              return 1;
            }
            *(int *)(puVar5[0x10] + (puVar5[0xe] + -1) * 4) = iVar3;
            FUN_02189478(*(undefined4 *)(puVar5[0x10] + (puVar5[0xe] + -1) * 4),acStack_218,0x15);
          }
        }
        else {
          iVar3 = FUN_02004c2c(auStack_418,s_ndone_021a61c4);
          if (iVar3 != 0) {
            FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          bVar2 = true;
        }
      }
    } while (!bVar2);
    iVar3 = FUN_02183ec4(param_1,iStack_438,uStack_434,puVar5,param_2,3);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else if (iVar4 == 4) {
    iStack_440 = *(int *)(param_2 + 0xc);
    uStack_43c = *(undefined4 *)(param_2 + 0x10);
    if (iStack_440 != 0) {
      puVar5 = (undefined4 *)FUN_0217583c(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      puVar5[1] = piVar10[0x4e];
      bVar2 = false;
      *puVar5 = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      do {
        iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_02004c2c(auStack_418,s_psrdone_021a61cc);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        else {
          iVar3 = FUN_02004c2c(auStack_418,&DAT_021a61d4);
          if (iVar3 != 0) {
            FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          puVar5[2] = puVar5[2] + 1;
          uVar7 = FUN_02175824(puVar5[3],puVar5[2] * 0x128);
          puVar5[3] = uVar7;
          iVar3 = puVar5[3];
          if (iVar3 == 0) {
            FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
            return 1;
          }
          iVar4 = (puVar5[2] + -1) * 0x128;
          iVar9 = iVar3 + iVar4;
          FUN_02002488(iVar9,0,0x128);
          *(undefined4 *)(iVar9 + 0x24) = 1;
          uVar7 = FUN_02005f14(acStack_218);
          *(undefined4 *)(iVar3 + iVar4) = uVar7;
          bVar1 = false;
          do {
            iVar3 = aiStack_478[1];
            iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_02004c2c(auStack_418,s_status_021a61d8);
            if (iVar4 == 0) {
              FUN_02189478(iVar9 + 0x28,acStack_218,0x100);
            }
            else {
              iVar4 = FUN_02004c2c(auStack_418,&DAT_021a6160);
              if (iVar4 == 0) {
                FUN_02189478(iVar9 + 4,acStack_218,0x1f);
              }
            }
            iVar4 = FUN_02004c2c(auStack_418,s_statuscode_021a61e0);
            if (iVar4 == 0) {
              uVar7 = FUN_02005f14(acStack_218);
              *(undefined4 *)(iVar9 + 0x24) = uVar7;
            }
            else {
              iVar4 = FUN_02004c2c(auStack_418,&DAT_021a61d4);
              if ((iVar4 == 0) || (iVar4 = FUN_02004c2c(auStack_418,s_psrdone_021a61cc), iVar4 == 0)
                 ) {
                bVar1 = true;
                aiStack_478[1] = iVar3;
              }
            }
          } while (!bVar1);
        }
      } while (!bVar2);
      iVar3 = FUN_02183ec4(param_1,iStack_440,uStack_43c,puVar5,param_2,4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar4 == 5) {
    iStack_448 = *(int *)(param_2 + 0xc);
    uStack_444 = *(undefined4 *)(param_2 + 0x10);
    if (iStack_448 != 0) {
      iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_02004c2c(auStack_418,&DAT_021a61ec);
      if (iVar4 != 0) {
        FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      iVar4 = FUN_02005f14(acStack_218);
      if (iVar4 == 0) {
        iVar3 = FUN_02189328(piVar10[2],s__pid__021a61f0,acStack_218,0x200);
        if (iVar3 == 0) {
          FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(param_1,3,1);
          return 3;
        }
        iVar3 = FUN_02005f14(acStack_218);
      }
      else {
        *(int *)(iVar3 + 0x418) = iVar4;
        iVar3 = 0;
      }
      piVar6 = (int *)FUN_0217583c(8);
      if (piVar6 == (int *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      *piVar6 = iVar4;
      piVar6[1] = iVar3;
      iVar3 = FUN_02183ec4(param_1,iStack_448,uStack_444,piVar6,param_2,0);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar4 == 6) {
    iStack_450 = *(int *)(param_2 + 0xc);
    uStack_44c = *(undefined4 *)(param_2 + 0x10);
    if (iStack_450 != 0) {
      iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_02004c2c(auStack_418,&DAT_021a61f8);
      if (iVar4 != 0) {
        FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      iVar4 = FUN_02005f14(acStack_218);
      if (iVar4 != 0) {
        *(int *)(iVar3 + 0x418) = iVar4;
      }
      iVar3 = FUN_02189328(piVar10[2],s__pid__021a61f0,acStack_218,0x200);
      if (iVar3 == 0) {
        if (iVar4 == 0) {
          FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
          FUN_02183f3c(param_1,3,1);
          return 3;
        }
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_02005f14(acStack_218);
      }
      piVar6 = (int *)FUN_0217583c(8);
      if (piVar6 == (int *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      *piVar6 = iVar4;
      piVar6[1] = iVar3;
      iVar3 = FUN_02183ec4(param_1,iStack_450,uStack_44c,piVar6,param_2,0);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar4 == 7) {
    iStack_458 = *(int *)(param_2 + 0xc);
    uStack_454 = *(undefined4 *)(param_2 + 0x10);
    if (iStack_458 != 0) {
      puVar5 = (undefined4 *)FUN_0217583c(0xc);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(auStack_418,s_others_021a61fc);
      if (iVar3 != 0) {
        FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      bVar2 = false;
      do {
        iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_02004c2c(auStack_418,s_odone_021a6204);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        else {
          iVar3 = FUN_02004c2c(auStack_418,&DAT_021a620c);
          if (iVar3 != 0) {
            FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          iVar3 = FUN_02175824(puVar5[2],(puVar5[1] + 1) * 0xac);
          if (iVar3 == 0) {
            FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
            return 1;
          }
          puVar5[2] = iVar3;
          iVar3 = puVar5[2];
          iVar4 = puVar5[1];
          iVar9 = iVar3 + iVar4 * 0xac;
          FUN_02002488(iVar9,0,0xac);
          puVar5[1] = puVar5[1] + 1;
          uVar7 = FUN_02005f14(acStack_218);
          *(undefined4 *)(iVar3 + iVar4 * 0xac) = uVar7;
          bVar1 = false;
          do {
            iVar3 = aiStack_478[1];
            iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_02004c2c(auStack_418,&DAT_021a6160);
            if (iVar4 == 0) {
              FUN_02189478(iVar9 + 4,acStack_218,0x1f);
            }
            else {
              iVar4 = FUN_02004c2c(auStack_418,s_uniquenick_021a6168);
              if (iVar4 == 0) {
                FUN_02189478(iVar9 + 0x23,acStack_218,0x15);
              }
              else {
                iVar4 = FUN_02004c2c(auStack_418,s_first_021a6210);
                if (iVar4 == 0) {
                  FUN_02189478(iVar9 + 0x38,acStack_218,0x1f);
                }
                else {
                  iVar4 = FUN_02004c2c(auStack_418,&DAT_021a6218);
                  if (iVar4 == 0) {
                    FUN_02189478(iVar9 + 0x57,acStack_218,0x1f);
                  }
                  else {
                    iVar4 = FUN_02004c2c(auStack_418,s_email_021a618c);
                    if (iVar4 == 0) {
                      FUN_02189478(iVar9 + 0x76,acStack_218,0x33);
                    }
                    else {
                      iVar4 = FUN_02004c2c(auStack_418,&DAT_021a620c);
                      if ((iVar4 == 0) ||
                         (iVar4 = FUN_02004c2c(auStack_418,s_odone_021a6204), iVar4 == 0)) {
                        bVar1 = true;
                        aiStack_478[1] = iVar3;
                      }
                    }
                  }
                }
              }
            }
          } while (!bVar1);
        }
      } while (!bVar2);
      iVar3 = FUN_02183ec4(param_1,iStack_458,uStack_454,puVar5,param_2,8);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else if (iVar4 == 8) {
    iStack_460 = *(int *)(param_2 + 0xc);
    uStack_45c = *(undefined4 *)(param_2 + 0x10);
    if (iStack_460 != 0) {
      iStack_4d0 = 0;
      puVar5 = (undefined4 *)FUN_0217583c(0xc);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      iVar3 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_02004c2c(auStack_418,&DAT_021a6220);
      if (iVar3 != 0) {
        FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      uVar7 = FUN_02005f14(acStack_218);
      puVar5[1] = uVar7;
      uVar7 = FUN_0217583c(puVar5[1] << 2);
      puVar5[2] = uVar7;
      if (puVar5[2] == 0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
        return 1;
      }
      iVar3 = 0;
      bVar2 = false;
      do {
        iVar4 = FUN_02189160(param_1,piVar10[2],aiStack_478 + 1,auStack_418,acStack_218);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_02004c2c(auStack_418,&DAT_021a6160);
        if (iVar4 == 0) {
          uVar7 = FUN_0217583c(0x15);
          *(undefined4 *)(puVar5[2] + iVar3) = uVar7;
          if (*(int *)(puVar5[2] + iVar3) == 0) {
            FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
            return 1;
          }
          FUN_02189478(*(int *)(puVar5[2] + iVar3),acStack_218,0x15);
          iVar3 = iVar3 + 4;
          iStack_4d0 = iStack_4d0 + 1;
        }
        else {
          iVar4 = FUN_02004c2c(auStack_418,s_usdone_021a6224);
          if (iVar4 != 0) {
            FUN_0218913c(param_1,1,s_Error_reading_from_the_search_se_021a6194);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          if (iStack_4d0 != puVar5[1]) {
            FUN_02002068(s_count____arg_>numSuggestedNicks_021a622c,s_gpiSearch_c_021a5fc8,0,0x515);
          }
          puVar5[1] = iStack_4d0;
          bVar2 = true;
        }
      } while (!bVar2);
      iVar3 = FUN_02183ec4(param_1,iStack_460,uStack_45c,puVar5,param_2,9);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  else {
    FUN_02002068(&DAT_021a6108,s_gpiSearch_c_021a5fc8,0,0x52a);
  }
  piVar10[0x50] = 1;
  return 0;
}

