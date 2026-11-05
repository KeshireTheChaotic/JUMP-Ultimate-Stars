
undefined4 FUN_02077e70(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_2 + 0x3c) & 0x1000) != 0) {
    return 1;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x56c) == 0) goto LAB_02077f60;
  if ((*(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) & 0x10) == 0) {
LAB_02077f3c:
    bVar1 = false;
  }
  else if (*(int *)(param_1 + 0x574) == 0) {
    iVar2 = (**(code **)(param_1 + 0x5e8))(param_1,*(undefined4 *)(param_1 + 0x5ec),2,param_2,0,0);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x56c) == param_2) ||
         (((uint)*(byte *)(param_1 + 0x5d0) & 1 << *(sbyte *)(param_2 + 0x42)) != 0)) {
        FUN_02078a70(param_1);
        goto LAB_02077f3c;
      }
      *(int *)(param_1 + 0x574) = param_2;
      (**(code **)(param_1 + 0x5e8))
                (param_1,*(undefined4 *)(param_1 + 0x5ec),4,*(undefined1 *)(param_2 + 0x42),0,0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x56c);
  if ((*(uint *)(iVar2 + 0x3c) & 2) != 0) {
    return 1;
  }
LAB_02077f60:
  if (iVar2 == param_2) {
    (**(code **)(param_1 + 0x5e8))
              (param_1,*(undefined4 *)(param_1 + 0x5ec),4,*(undefined1 *)(param_2 + 0x42),0,0);
  }
  else {
    uVar3 = 0;
    iVar2 = (**(code **)(param_1 + 0x5e8))(param_1,*(undefined4 *)(param_1 + 0x5ec),2,param_2,0,0);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x56c);
    if ((iVar2 != 0) &&
       (*(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffece,
       *(short *)(*(int *)(param_1 + 0x56c) + 0x18) < *(short *)(param_2 + 0x18))) {
      uVar3 = 1;
    }
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 0x101;
    *(int *)(param_1 + 0x56c) = param_2;
    (**(code **)(param_1 + 0x5e8))
              (param_1,*(undefined4 *)(param_1 + 0x5ec),1,*(undefined1 *)(param_2 + 0x42),uVar3,0);
  }
  return 0;
}

