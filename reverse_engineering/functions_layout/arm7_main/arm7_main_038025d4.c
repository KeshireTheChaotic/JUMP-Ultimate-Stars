
undefined4 FUN_038025d4(int param_1,uint param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  FUN_037ff660(param_1);
  if (*(uint *)(param_1 + 0x38) <= param_2) {
    FUN_037ff65c();
    return 0;
  }
  uVar4 = *(uint *)(param_1 + param_2 * 4 + 0x3c);
  *(char *)param_4 = (char)uVar4;
  switch(*(undefined1 *)param_4) {
  case 0:
    break;
  case 1:
    goto LAB_03802674;
  case 2:
    goto LAB_03802674;
  case 3:
    goto LAB_03802674;
  case 4:
    goto LAB_03802674;
  case 5:
LAB_03802674:
    iVar3 = 5;
    puVar1 = (undefined2 *)(param_1 + (uVar4 >> 8));
    do {
      param_4 = param_4 + 1;
      *param_4 = *puVar1;
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
LAB_03802744:
    FUN_037ff65c();
    return 1;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    iVar3 = param_1 + (uVar4 >> 8);
    uVar4 = (uint)*(byte *)(param_1 + (uVar4 >> 8));
    if ((param_3 < (int)uVar4) || ((int)(uint)*(byte *)(iVar3 + 1) < param_3)) {
      FUN_037ff65c();
      return 0;
    }
    puVar1 = (undefined2 *)((param_3 - uVar4) * 0xc + iVar3);
    iVar3 = 6;
    do {
      puVar1 = puVar1 + 1;
      *param_4 = *puVar1;
      iVar3 = iVar3 + -1;
      param_4 = param_4 + 1;
    } while (iVar3 != 0);
    goto LAB_03802744;
  case 0x11:
    iVar3 = 0;
    param_1 = param_1 + (uVar4 >> 8);
    while ((int)(uint)*(byte *)(param_1 + iVar3) < param_3) {
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        FUN_037ff65c();
        return 0;
      }
    }
    iVar2 = 6;
    puVar1 = (undefined2 *)(iVar3 * 0xc + param_1 + 8);
    do {
      *param_4 = *puVar1;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
      param_4 = param_4 + 1;
    } while (iVar2 != 0);
    goto LAB_03802744;
  }
  FUN_037ff65c();
  return 0;
}

