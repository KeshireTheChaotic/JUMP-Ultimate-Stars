
void FUN_021551e8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  if (param_3 == 0) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0xb;
  }
  FUN_021502ec(auStack_14,1,param_2 * 3 + 8,0x1f,param_2 * 3 + 0xb);
  FUN_02151058(*(undefined4 *)(param_1 + 0x14),auStack_14,uVar1);
  return;
}

