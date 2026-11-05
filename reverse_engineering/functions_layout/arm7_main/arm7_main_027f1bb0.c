
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1bb0(undefined2 *param_1)

{
  if ((*(ushort *)(*(int *)(param_1 + 4) + 4) & 0xff) == 0) {
    *(int *)(_DAT_0380fff4 + 0x5a8) = *(int *)(_DAT_0380fff4 + 0x5a8) + 1;
  }
  else {
    *(uint *)(_DAT_0380fff4 + 0x5a4) =
         *(int *)(_DAT_0380fff4 + 0x5a4) + (*(ushort *)(*(int *)(param_1 + 4) + 4) & 0xff);
  }
  param_1[2] = param_1[2] + 1;
  *param_1 = 0;
  return;
}

