
undefined2 FUN_021644a0(void)

{
  undefined2 uVar1;
  
  if (*(int *)(DAT_0216e828 + 0x40) != 7) {
    FUN_02055684();
  }
  FUN_02164cb8(1);
  uVar1 = FUN_02164408(*(undefined2 *)(DAT_0216e828 + 0x60));
  *(undefined2 *)(DAT_0216e828 + 0x5c) = uVar1;
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_decided_channel____d_0216c030,*(undefined2 *)(DAT_0216e828 + 0x5c));
  }
  return *(undefined2 *)(DAT_0216e828 + 0x5c);
}

