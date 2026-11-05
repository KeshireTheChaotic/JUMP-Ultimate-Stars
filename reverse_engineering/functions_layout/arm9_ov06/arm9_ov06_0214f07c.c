
void FUN_0214f07c(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_02172960 + 0x16e) == '\0') {
    return;
  }
  for (iVar1 = 1; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
    func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar1 * 4 + 300),
                    (&DAT_02170dc8)[*(char *)(param_1 + 0x9b)]);
  }
  return;
}

