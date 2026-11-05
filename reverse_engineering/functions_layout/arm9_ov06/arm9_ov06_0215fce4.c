
void FUN_0215fce4(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 1 << (param_2 & 0xff)) != 0) {
    *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + param_2 * 2 + 0x16);
  }
  return;
}

