
undefined4 FUN_02167248(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0216609c(*(undefined4 *)(DAT_0216e870 + param_1 * 4 + 0x800));
  MIi_CpuCopy32(param_2,uVar1,8);
  return uVar1;
}

