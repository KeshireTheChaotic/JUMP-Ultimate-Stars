
void FUN_02167204(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  *param_1 = *param_1 & 0xc1fffcff | 0x200;
  puVar3 = *(undefined2 **)
            (DAT_0216e870 + (uint)((uint *)(DAT_0216e870 + 0x400U) <= param_1) * 4 + 0x800);
  uVar1 = FUN_02051d14(1);
  uVar2 = FUN_02050750(*(byte *)((int)puVar3 + 3) + 1,*puVar3);
  if (uVar2 == *(byte *)(puVar3 + 1)) {
    FUN_02055684();
  }
  *(uint **)(puVar3 + (uint)*(byte *)((int)puVar3 + 3) * 2 + 2) = param_1;
  *(char *)((int)puVar3 + 3) = (char)uVar2;
  FUN_02051d5c(uVar1);
  return;
}

