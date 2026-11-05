
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eafc8(undefined2 *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined2 *)(_DAT_0380fff4 + 900);
  do {
    *puVar1 = *param_1;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x10);
  return 0;
}

