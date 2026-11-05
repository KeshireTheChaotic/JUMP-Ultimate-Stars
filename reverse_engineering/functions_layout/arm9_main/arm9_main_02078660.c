
undefined4 FUN_02078660(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 != (undefined4 *)0x0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((*(char *)(puVar1 + 0x10) == '\0') && ((puVar1[0xf] & 0x1000) == 0)) {
        if (param_2 == 0) {
          return 1;
        }
        if ((param_3 == 0) || (puVar1 != *(undefined4 **)(param_1 + 0x56c))) {
          *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) =
               *(uint *)(*(int *)(param_1 + 0x56c) + 0x3c) & 0xfffff000;
          puVar1[0xf] = puVar1[0xf] | 0x101;
          *(undefined4 **)(param_1 + 0x56c) = puVar1;
          (**(code **)(param_1 + 0x5e8))
                    (param_1,*(undefined4 *)(param_1 + 0x5ec),1,*(undefined1 *)((int)puVar1 + 0x42),
                     0,0,param_4);
          return 1;
        }
      }
    }
  }
  return 0;
}

