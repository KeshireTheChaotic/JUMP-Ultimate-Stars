
void FUN_02164c78(int *param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [12];
  
  if (((param_1 != (int *)0x0) && (FUN_02164d3c(&local_18,*param_1), local_18 < -0xfffff)) ||
     (FUN_02164d3c(&local_1c,*param_1), 0 < local_1c)) {
    iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x50);
    *(undefined4 *)(iVar1 + 0xc) = 0xfff00000;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    FUN_0214f784(iVar1,1);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_0214dc68(auStack_14,&local_20,&local_24,&local_28);
    iVar1 = FUN_0215e2ec(*param_1,0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_14,0);
  }
  return;
}

