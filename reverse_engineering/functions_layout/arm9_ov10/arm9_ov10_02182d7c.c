
int FUN_02182d7c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 local_1158;
  undefined1 auStack_1124 [16];
  undefined1 auStack_1114 [4096];
  undefined1 local_114 [256];
  
  iVar12 = *param_1;
  iVar1 = FUN_02189328(param_2,&DAT_021a5164,auStack_1114,0x1000);
  if (iVar1 == 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar1 = FUN_02005f14(auStack_1114);
  iVar2 = FUN_02189328(param_2,&DAT_021a51a8,auStack_1114,0x1000);
  if (iVar2 == 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  uVar3 = FUN_02005f14(auStack_1114);
  iVar2 = FUN_02189328(param_2,s__date__021a51ac,auStack_1114,0x1000);
  if (iVar2 == 0) {
    local_1158 = FUN_0200199c(0);
  }
  else {
    local_1158 = FUN_02005f14(auStack_1114);
  }
  if (iVar1 < 0x65) {
    if (iVar1 < 100) {
      if ((iVar1 < 3) && (0 < iVar1)) {
        if (iVar1 == 1) {
          iVar1 = *(int *)(iVar12 + 0x1bc);
          uVar5 = *(undefined4 *)(iVar12 + 0x1c0);
          if (iVar1 != 0) {
            puVar11 = (undefined4 *)FUN_0217583c(0xc);
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
              return 1;
            }
            iVar12 = FUN_02189328(param_2,s__msg__021a5170,auStack_1114,0x1000);
            if (iVar12 == 0) {
              FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
              FUN_02183f3c(param_1,3,1);
              return 3;
            }
            iVar12 = FUN_02004b04(auStack_1114);
            uVar4 = FUN_0217583c(iVar12 + 1);
            puVar11[2] = uVar4;
            if (puVar11[2] == 0) {
              FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
              return 1;
            }
            FUN_02004b18(puVar11[2],auStack_1114);
            *puVar11 = uVar3;
            puVar11[1] = local_1158;
            iVar1 = FUN_02183ec4(param_1,iVar1,uVar5,puVar11,0,2);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
        else if (iVar1 == 2) {
          iVar1 = FUN_02187628(param_1,uVar3);
          if (iVar1 == 0) {
            FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
            return 1;
          }
          iVar2 = FUN_02189328(param_2,s__msg__021a5170,auStack_1114,0x1000);
          if (iVar2 == 0) {
            FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          puVar10 = (undefined1 *)FUN_02004d40(auStack_1114,s__signed__021a51c4);
          if (puVar10 == (undefined1 *)0x0) {
            FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          *puVar10 = 0;
          iVar2 = FUN_02004b04(puVar10 + 8);
          if (iVar2 != 0x20) {
            FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
            FUN_02183f3c(param_1,3,1);
            return 3;
          }
          FUN_02175814(*(undefined4 *)(iVar1 + 0x10));
          *(undefined4 *)(iVar1 + 0x10) = 0;
          uVar5 = FUN_02001e9c(puVar10 + 8);
          *(undefined4 *)(iVar1 + 0x10) = uVar5;
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
          iVar1 = *(int *)(iVar12 + 0x1ac);
          uVar5 = *(undefined4 *)(iVar12 + 0x1b0);
          if (iVar1 != 0) {
            puVar11 = (undefined4 *)FUN_0217583c(0x40c);
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
              return 1;
            }
            FUN_02189478(puVar11 + 2,auStack_1114,0x401);
            *puVar11 = uVar3;
            puVar11[1] = local_1158;
            iVar1 = FUN_02183ec4(param_1,iVar1,uVar5,puVar11,0,6);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_02187628(param_1,uVar3);
      if (iVar1 == 0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
        return 1;
      }
      if (*(int *)(iVar1 + 8) == 0) {
        uVar5 = FUN_0217583c(0x18);
        *(undefined4 *)(iVar1 + 8) = uVar5;
        puVar10 = *(undefined1 **)(iVar1 + 8);
        if (puVar10 == (undefined1 *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
          return 1;
        }
        iVar2 = 0x18;
        do {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = *(int *)(iVar12 + 0x430);
        *(int *)(iVar12 + 0x430) = iVar2 + 1;
        **(int **)(iVar1 + 8) = iVar2;
      }
      puVar11 = *(undefined4 **)(iVar1 + 8);
      iVar1 = FUN_02189328(param_2,s__msg__021a5170,auStack_1114,0x1000);
      if (iVar1 == 0) {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      iVar1 = FUN_02189328(auStack_1114,&DAT_021a51d0,auStack_1124,0x10);
      if (iVar1 == 0) {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      uVar5 = FUN_02005f14(auStack_1124);
      puVar11[1] = uVar5;
      FUN_02175814(puVar11[2]);
      puVar11[2] = 0;
      iVar1 = FUN_02189328(auStack_1114,&DAT_021a51d4,local_114,0x100);
      if (iVar1 == 0) {
        local_114[0] = 0;
      }
      uVar5 = FUN_02001e9c(local_114);
      puVar11[2] = uVar5;
      if (puVar11[2] == 0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
        return 1;
      }
      FUN_02175814(puVar11[3]);
      puVar11[3] = 0;
      iVar1 = FUN_02189328(auStack_1114,&DAT_021a51dc,local_114,0x100);
      if (iVar1 == 0) {
        local_114[0] = 0;
      }
      uVar5 = FUN_02001e9c(local_114);
      puVar11[3] = uVar5;
      if (puVar11[3] == 0) {
        FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
        return 1;
      }
      iVar1 = FUN_02189328(auStack_1114,&DAT_021a51e4,auStack_1124,0x10);
      if (iVar1 == 0) {
        puVar11[4] = 0;
      }
      else {
        iVar1 = FUN_02005f14(auStack_1124);
        uVar8 = FUN_02005f14(auStack_1124);
        uVar6 = FUN_02005f14(auStack_1124);
        uVar7 = FUN_02005f14(auStack_1124);
        puVar11[4] = iVar1 << 0x18 | (uVar8 & 0xff00) << 8 | uVar6 >> 0x18 | uVar7 >> 8 & 0xff00;
      }
      iVar1 = FUN_02189328(auStack_1114,&DAT_021a51ec,auStack_1124,0x10);
      if (iVar1 == 0) {
        puVar11[5] = 0;
      }
      else {
        uVar8 = FUN_02005f14(auStack_1124);
        puVar11[5] = (int)(uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      iVar1 = *(int *)(iVar12 + 0x1b4);
      uVar5 = *(undefined4 *)(iVar12 + 0x1b8);
      if (iVar1 != 0) {
        puVar9 = (undefined4 *)FUN_0217583c(0xc);
        if (puVar9 == (undefined4 *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
          return 1;
        }
        *puVar9 = uVar3;
        puVar9[2] = *puVar11;
        puVar9[1] = local_1158;
        iVar1 = FUN_02183ec4(param_1,iVar1,uVar5,puVar9,0,5);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
    }
  }
  else if ((iVar1 < 0x67) && (100 < iVar1)) {
    if (iVar1 == 0x65) {
      iVar1 = FUN_02189328(param_2,s__msg__021a5170,auStack_1114,0x1000);
      if (iVar1 == 0) {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      iVar1 = FUN_02004d40(auStack_1114,&DAT_021a51ec);
      if (iVar1 == 0) {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      if (*(char *)(iVar1 + 3) == '\0') {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      uVar5 = FUN_02005f14(iVar1 + 3);
      iVar1 = FUN_02004d40(auStack_1114,&DAT_021a51f0);
      if (iVar1 == 0) {
        local_114[0] = 0;
      }
      else {
        FUN_02189478(local_114,iVar1 + 3,0x100);
      }
      iVar1 = *(int *)(iVar12 + 0x1c4);
      uVar4 = *(undefined4 *)(iVar12 + 0x1c8);
      if (iVar1 != 0) {
        puVar11 = (undefined4 *)FUN_0217583c(0x108);
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a51b4);
          return 1;
        }
        *puVar11 = uVar3;
        puVar11[1] = uVar5;
        FUN_02004b18(puVar11 + 2,local_114);
        iVar1 = FUN_02183ec4(param_1,iVar1,uVar4,puVar11,0,0);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
    }
    else if (iVar1 == 0x66) {
      iVar1 = FUN_02189328(param_2,s__msg__021a5170,auStack_1114,0x1000);
      if (iVar1 == 0) {
        FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5178);
        FUN_02183f3c(param_1,3,1);
        return 3;
      }
      FUN_02182c24(param_1,uVar3,0x67,&DAT_021a51f4);
    }
  }
  return 0;
}

