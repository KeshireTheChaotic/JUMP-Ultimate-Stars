
void FUN_02150684(int param_1)

{
  DAT_020afeba = 1;
  *(uint *)(*(int *)(DAT_02172960 + 0x104) + 0x3c) =
       *(uint *)(*(int *)(DAT_02172960 + 0x104) + 0x3c) | 1;
  *(undefined4 *)(param_1 + 0xac) = 6;
  *(byte *)(*(int *)(DAT_02172960 + 0xdc) + 0x11d) =
       *(byte *)(*(int *)(DAT_02172960 + 0xdc) + 0x11d) | 1;
  if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
    func_0x021731f0(*(undefined4 *)(DAT_02172960 + 0x130));
    func_0x0217329c(*(undefined4 *)(DAT_02172960 + 0x130),0xffffffff,1);
  }
  return;
}

