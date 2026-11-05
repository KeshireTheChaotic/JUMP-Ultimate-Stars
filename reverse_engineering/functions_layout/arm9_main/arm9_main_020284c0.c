
void FUN_020284c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  piVar1 = (int *)param_1[0xe];
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 == (int *)0x0 || iVar2 == 0) {
    if ((code *)param_1[0x10] == FUN_0202836c) {
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    FUN_0201b45c();
    (*(code *)param_1[0x10])();
    return;
  }
  do {
    iVar2 = FUN_0201b564(param_1[0xe]);
    if (iVar2 != 0) {
      iVar2 = FUN_0201b564(param_1[0xe]);
      if (0 < iVar2) {
        FUN_0201b544(param_1[0xe]);
      }
      if ((((-1 < (char)*(byte *)(param_1 + 10)) && ((*(byte *)(param_1 + 10) & 3) >> 1 == 0)) &&
          ((*(byte *)((int)param_1 + 0x29) & 3) >> 1 == 0)) &&
         ((*(uint *)(param_1[0xd] + 0x248) & (param_1[0xf] & 0x7fffffffU | 0x80000000)) != 0)) {
        if ((code *)param_1[0x10] == FUN_0202836c) {
          (**(code **)(*param_1 + 0x60))();
        }
        else {
          FUN_0201b45c();
          (*(code *)param_1[0x10])();
        }
      }
      uVar3 = (uint)(*(byte *)((int)param_1 + 0x29) >> 7);
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = *(uint *)param_1[0xe];
      }
      if (bVar4 && uVar3 == 0) {
        FUN_02027edc(param_1);
        return;
      }
      return;
    }
    piVar1 = (int *)FUN_0201b524(param_1[0xe]);
    if (piVar1[6] == -0x7ffe0000) {
      FUN_02028330();
    }
    else {
      (**(code **)(*param_1 + 0x7c))(param_1,piVar1);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))();
    }
  } while (-1 < *(char *)((int)param_1 + 0x29));
  return;
}

