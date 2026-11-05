
void FUN_02164d50(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  if (param_1 != (undefined4 *)0x0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x100000;
    FUN_0214dc68(auStack_14,&local_18,&local_1c,&local_20);
    iVar1 = FUN_0215e2ec(*param_1,0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_14,0);
  }
  return;
}

