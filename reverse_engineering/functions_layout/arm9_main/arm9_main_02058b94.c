
int FUN_02058b94(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 auStack_4c [6];
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  
  if (param_2 != (code *)0x0) {
    FUN_020517fc(&local_60,0,0x44);
    local_60 = 0x82;
    local_5e = 0;
    local_5c = 0x19;
    local_5a = (undefined2)param_1;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_46 = 0xffff;
    local_4e = 0;
    local_44 = param_3;
    FUN_020554a8(auStack_4c);
  }
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02058044();
  if (iVar2 != 0) {
    OS_RestoreInterrupts(uVar1);
    return iVar2;
  }
  iVar2 = FUN_02058060();
  iVar2 = iVar2 + param_1 * 4;
  *(code **)(iVar2 + 0xcc) = param_2;
  *(undefined4 *)(iVar2 + 0x10c) = param_3;
  if (param_2 != (code *)0x0) {
    local_3e = FUN_02057aa8();
    local_40 = FUN_02057adc();
    (*param_2)(&local_60);
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

