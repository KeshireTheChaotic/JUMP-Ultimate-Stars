
void FUN_02191978(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_021919a0(param_3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 0x73);
    *(char *)((int)puVar1 + 0xd) = (char)param_3;
  }
  return;
}

