
void FUN_02193cb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 0x455) == '\b') {
    local_2c = 0x15;
    local_2b = 3;
    local_2a = 0;
    local_29 = 0;
    local_28 = 2;
    local_27 = 1;
    local_26 = 0;
    uVar1 = FUN_02194ca8(iVar2,&local_2c);
    FUN_0218eda0(&local_2c,uVar1,0,0,param_1);
  }
  *(undefined1 *)(iVar2 + 0x455) = 0;
  return;
}

