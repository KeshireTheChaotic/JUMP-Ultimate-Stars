
undefined4 FUN_0205762c(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x38) <= uVar3) {
    return 0;
  }
LAB_02057648:
  uVar3 = *(uint *)(param_1 + uVar3 * 4 + 0x3c);
  *param_2 = (byte)uVar3;
  bVar1 = *param_2;
  if (0x10 < bVar1) {
    if (bVar1 == 0x11) {
      iVar4 = param_1 + (uVar3 >> 8);
      uVar3 = param_3[1];
      if ((uVar3 < 8) && (*(char *)(iVar4 + uVar3) != '\0')) {
        iVar4 = uVar3 * 0xc + iVar4;
        uVar2 = *(undefined2 *)(iVar4 + 10);
        *(undefined2 *)param_2 = *(undefined2 *)(iVar4 + 8);
        *(undefined2 *)(param_2 + 2) = uVar2;
        uVar2 = *(undefined2 *)(iVar4 + 0xe);
        *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar4 + 0xc);
        *(undefined2 *)(param_2 + 6) = uVar2;
        uVar2 = *(undefined2 *)(iVar4 + 0x12);
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(iVar4 + 0x10);
        *(undefined2 *)(param_2 + 10) = uVar2;
        param_3[1] = param_3[1] + 1;
        return 1;
      }
    }
    goto switchD_0205766c_default;
  }
  if (0xf < bVar1) {
    pbVar5 = (byte *)(param_1 + (uVar3 >> 8));
    uVar3 = param_3[1];
    if (uVar3 < ((uint)pbVar5[1] - (uint)*pbVar5) + 1) {
      uVar2 = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 4);
      *(undefined2 *)param_2 = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 2);
      *(undefined2 *)(param_2 + 2) = uVar2;
      uVar2 = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 8);
      *(undefined2 *)(param_2 + 4) = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 6);
      *(undefined2 *)(param_2 + 6) = uVar2;
      uVar2 = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 0xc);
      *(undefined2 *)(param_2 + 8) = *(undefined2 *)(pbVar5 + uVar3 * 0xc + 10);
      *(undefined2 *)(param_2 + 10) = uVar2;
      param_3[1] = param_3[1] + 1;
      return 1;
    }
    goto switchD_0205766c_default;
  }
  switch(bVar1) {
  case 0:
    goto switchD_0205766c_default;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    goto switchD_0205766c_default;
  }
  iVar4 = param_1 + (uVar3 >> 8);
  uVar2 = *(undefined2 *)(iVar4 + 2);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + (uVar3 >> 8));
  *(undefined2 *)(param_2 + 4) = uVar2;
  uVar2 = *(undefined2 *)(iVar4 + 6);
  *(undefined2 *)(param_2 + 6) = *(undefined2 *)(iVar4 + 4);
  *(undefined2 *)(param_2 + 8) = uVar2;
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(iVar4 + 8);
  *param_3 = *param_3 + 1;
  return 1;
switchD_0205766c_default:
  *param_3 = *param_3 + 1;
  param_3[1] = 0;
  uVar3 = *param_3;
  if (*(uint *)(param_1 + 0x38) <= uVar3) {
    return 0;
  }
  goto LAB_02057648;
}

