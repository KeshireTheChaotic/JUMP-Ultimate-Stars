
void FUN_02194a7c(int param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x455) == '\t') {
    (*DAT_021a8528)(param_2);
    return;
  }
  cVar1 = *param_2;
  uVar6 = CONCAT11(param_2[3],param_2[4]) + 5;
  if ((((byte)(*(char *)(param_1 + 0x455) - 7U) < 2) && (cVar1 != '\x15')) ||
     ((cVar1 == '\x15' && (7 < uVar6)))) {
    uVar6 = FUN_02194e20(param_1,param_2);
  }
  pbVar3 = (byte *)(param_2 + 5);
  iVar7 = uVar6 - 5;
  switch(cVar1) {
  case '\x14':
    if (*(int *)(param_1 + 0x1d4) == 0) {
      *(undefined1 *)(param_1 + 0x455) = 9;
    }
    else {
      FUN_020517fc(param_1 + 0x2e4,0,8);
      *(undefined1 *)(param_1 + 0x455) = 7;
    }
    break;
  case '\x15':
    if (*pbVar3 == 2) {
      *(undefined1 *)(param_1 + 0x455) = 9;
    }
    break;
  case '\x16':
    do {
      bVar2 = *pbVar3;
      iVar5 = (uint)pbVar3[3] + (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100;
      pbVar4 = pbVar3 + 4;
      if (bVar2 < 0xc) {
        if (bVar2 < 0xb) {
          if ((bVar2 < 3) && (bVar2 != 0)) {
            if (bVar2 == 1) {
              if ((*(char *)(param_1 + 0x454) != '\0') && (*(char *)(param_1 + 0x455) == '\0')) {
                FUN_021955c0(param_1,pbVar4);
              }
            }
            else {
              if (bVar2 != 2) goto LAB_02194bac;
              FUN_0219575c(param_1,pbVar4);
            }
          }
          else {
LAB_02194bac:
            *(undefined1 *)(param_1 + 0x455) = 9;
          }
        }
        else {
          FUN_021957f4(param_1,pbVar4);
        }
      }
      else {
        if ((0x14 < bVar2) || (bVar2 < 0xe)) goto LAB_02194bac;
        if (bVar2 == 0xe) {
          *(undefined1 *)(param_1 + 0x455) = 4;
        }
        else if (bVar2 == 0x10) {
          FUN_021951d4(param_1,pbVar4);
        }
        else {
          if (bVar2 != 0x14) goto LAB_02194bac;
          FUN_02194fe4(param_1,pbVar4);
        }
      }
      FUN_02194c2c(param_1,pbVar3,iVar5 + 4);
      pbVar3 = pbVar4 + iVar5;
      iVar7 = iVar7 - (iVar5 + 4);
    } while ((iVar7 != 0) && (*(char *)(param_1 + 0x455) != '\t'));
    break;
  case '\x17':
    *(char **)(param_1 + 0x824) = param_2;
    *(undefined4 *)(param_1 + 0x82c) = 5;
    *(uint *)(param_1 + 0x828) = uVar6;
    *(undefined1 *)(param_1 + 0x456) = 1;
    return;
  default:
    *(undefined1 *)(param_1 + 0x455) = 9;
  }
  (*DAT_021a8528)(param_2);
  return;
}

