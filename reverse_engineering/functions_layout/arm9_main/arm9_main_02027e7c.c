
void FUN_02027e7c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)((int)puVar1 + 9) == '\0') {
      if ((*(char *)(puVar1 + 2) == '\0') && (param_2 != 0)) {
        FUN_020119ec();
      }
    }
    else if ((*(char *)(puVar1 + 2) != '\0') || (param_2 == 0)) {
      FUN_0201199c();
    }
  }
  return;
}

