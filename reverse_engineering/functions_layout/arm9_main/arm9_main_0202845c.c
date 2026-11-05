
void FUN_0202845c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  *(byte *)((int)param_1 + 0x29) = *(byte *)((int)param_1 + 0x29) & 0xfd | (param_2 == 0) << 1;
  uVar4 = (uint)*(byte *)(param_1 + 10);
  if ((uVar4 & 0x1f) >> 4 == 0) {
    puVar3 = (uint *)param_1[0xe];
    if (puVar3 != (uint *)0x0) {
      uVar4 = *puVar3;
    }
    if ((puVar3 == (uint *)0x0 || uVar4 == 0) &&
       (((((char)*(byte *)(param_1 + 10) < '\0' || ((*(byte *)(param_1 + 10) & 3) >> 1 != 0)) ||
         ((*(byte *)((int)param_1 + 0x29) & 3) >> 1 != 0)) ||
        ((*(uint *)(param_1[0xd] + 0x248) & (param_1[0xf] & 0x7fffffffU | 0x80000000)) == 0)))) {
      if ((*(byte *)(param_1 + 10) & 1) == 0) {
        return;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      FUN_02027e7c(param_1,0);
      return;
    }
    if (((*(byte *)(param_1 + 10) & 0xf) >> 3 == 0) && ((*(byte *)(param_1 + 10) & 7) >> 2 == 0)) {
      uVar4 = 0;
      if (puVar3 != (uint *)0x0) {
        uVar4 = *puVar3;
      }
      if (puVar3 == (uint *)0x0 || uVar4 == 0) {
        if ((*(byte *)(param_1 + 10) & 1) == 1) {
          return;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 1;
        FUN_02027e7c(param_1,1);
        return;
      }
    }
    (**(code **)(*param_1 + 0x58))();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 1;
    FUN_02027e7c(param_1,1);
    return;
  }
  if ((((uVar4 & 0xf) >> 3 != 0) || ((uVar4 & 7) >> 2 != 0)) &&
     (((*(byte *)(param_1 + 10) & 3) >> 1 == 0 &&
      (((-1 < (char)*(byte *)(param_1 + 10) && ((*(byte *)((int)param_1 + 0x29) & 3) >> 1 == 0)) &&
       ((*(uint *)(param_1[0xd] + 0x248) & (param_1[0xf] & 0x7fffffffU | 0x80000000)) != 0)))))) {
    return;
  }
  piVar1 = (int *)param_1[0xe];
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x5c))();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  FUN_02027e7c(param_1,0);
  return;
}

