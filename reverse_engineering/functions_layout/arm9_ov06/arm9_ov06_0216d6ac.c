
void FUN_0216d6ac(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  FUN_0216d69c();
  piVar1 = (int *)FUN_0216d69c(*(undefined4 *)(param_1 + 0x30));
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + *(short *)(param_1 + 0x60);
  local_20 = *(int *)(param_1 + 0x3c) +
             ((int)(((*piVar1 + (int)*(short *)(param_1 + 0x44)) - *(int *)(param_1 + 0x3c)) *
                   (uint)*(ushort *)(param_1 + 0x5e)) >> 8);
  iVar2 = *(int *)(param_1 + 0x34) * (int)*(short *)(param_1 + 0x48) +
          *(int *)(param_1 + 0x38) * (int)*(short *)(param_1 + 0x4a);
  local_1c = *(int *)(param_1 + 0x40) +
             ((int)(((piVar1[1] + (int)*(short *)(param_1 + 0x46)) - *(int *)(param_1 + 0x40)) *
                   (uint)*(ushort *)(param_1 + 0x5e)) >> 8);
  *(short *)(param_1 + 100) =
       *(short *)(param_1 + 100) +
       (short)((uint)*(ushort *)(param_1 + 0x20) *
               (*(int *)(param_1 + 0x34) - (iVar2 * *(short *)(param_1 + 0x48) >> 0x10)) >> 8);
  *(short *)(param_1 + 0x66) =
       *(short *)(param_1 + 0x66) +
       (short)((uint)*(ushort *)(param_1 + 0x20) *
               (*(int *)(param_1 + 0x38) - (iVar2 * *(short *)(param_1 + 0x4a) >> 0x10)) >> 8);
  FUN_02166a1c(param_1 + 0x4c,&local_20);
  local_20 = local_20 + *(short *)(param_1 + 100);
  local_1c = local_1c + *(short *)(param_1 + 0x66);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x5a);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (int)*(short *)(param_1 + 0x5c);
  FUN_0216d800(*(undefined4 *)(param_1 + 0x2c),&local_20);
  if (0xff < *(ushort *)(param_1 + 0x5e)) {
    *(undefined2 *)(iVar3 + 0x24) = 0;
    *(undefined2 *)(iVar3 + 0x26) = 0;
    *(code **)(param_1 + 0x54) = FUN_0216d82c;
  }
  return;
}

