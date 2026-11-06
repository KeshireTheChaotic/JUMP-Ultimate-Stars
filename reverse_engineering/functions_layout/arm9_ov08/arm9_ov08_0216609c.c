
undefined4 FUN_0216609c(ushort *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = OS_DisableIrqMask(1);
  if ((uint)(byte)param_1[1] != (uint)*(byte *)((int)param_1 + 3)) {
    uVar1 = FUN_02050750((uint)*(byte *)((int)param_1 + 3) + (uint)*param_1 + -1);
    *(undefined1 *)((int)param_1 + 3) = uVar1;
    uVar3 = *(undefined4 *)(param_1 + (uint)*(byte *)((int)param_1 + 3) * 2 + 2);
  }
  OS_EnableIrqMask(uVar2);
  return uVar3;
}

