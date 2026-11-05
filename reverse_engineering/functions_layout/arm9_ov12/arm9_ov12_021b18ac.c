
void FUN_021b18ac(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

