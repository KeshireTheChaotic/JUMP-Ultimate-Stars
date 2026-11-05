
void FUN_02165774(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  DAT_0216e82c = param_1;
  FUN_02164034(param_1 + 0xb00);
  *(undefined2 *)(DAT_0216e82c + 0x648) = 0;
  *(undefined2 *)(DAT_0216e82c + 0x64a) = 0;
  *(undefined1 *)(DAT_0216e82c + 0xa90) = 1;
  *(undefined1 *)(DAT_0216e82c + 0xa91) = 1;
  *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
  FUN_02164f10();
  *(undefined4 *)(DAT_0216e82c + 0xab4) = *param_2;
  *(undefined4 *)(DAT_0216e82c + 0xab8) = param_2[1];
  *(undefined4 *)(DAT_0216e82c + 0xabc) = param_2[2];
  *(undefined4 *)(DAT_0216e82c + 0xac0) = param_2[3];
  *(undefined4 *)(DAT_0216e82c + 0xac4) = param_2[4];
  *(undefined4 *)(DAT_0216e82c + 0xac8) = param_2[5];
  *(undefined1 *)(DAT_0216e82c + 0xa92) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(DAT_0216e82c + 0xacc) = 2;
  FUN_02054b44();
  FUN_0206a404(DAT_0216e82c + 0x64c);
  FUN_02054b44();
  uVar1 = FUN_02161c68();
  *(undefined4 *)(DAT_0216e82c + 0xaa4) = uVar1;
  return;
}

