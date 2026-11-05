
void FUN_0200f5fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 uStack_80;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  uStack_80 = param_4;
  local_70 = param_1;
  local_6c = param_2;
  local_68 = param_3;
  FUN_0200dabc(in_lr,&local_98);
  if (local_94 == 0) {
    FUN_0200f280();
  }
  FUN_0200f4dc(&local_70,&local_98);
  if (local_70 == 0) {
    local_64 = FUN_0200e818(&local_70,&local_98);
    if (local_64 == 0) {
      FUN_0200f280();
    }
  }
  else {
    local_64 = 0;
  }
  iVar1 = FUN_0200eafc(&local_70,&local_98,&local_a8);
  local_a4 = *(undefined4 *)(iVar1 + 1);
  uVar2 = FUN_0200d9cc(iVar1 + 5,&local_a0);
  FUN_0200d940(uVar2,&local_9c);
  FUN_0200df68(&local_70,&local_98,iVar1);
  FUN_0200ecd8(&local_70,local_9c,local_a8);
  FUN_0200f5cc(&local_70,&local_98,local_98 + local_a0);
  return;
}

