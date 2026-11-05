
void FUN_02154814(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [8];
  
  iVar1 = (int)(param_2 * 0x30 + ((uint)(param_2 * 0x30 >> 2) >> 0x1d)) >> 3;
  if (param_3 == 0) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 0xc;
  }
  FUN_0214e6e4(auStack_14,0,iVar1,0x20,iVar1 + 6);
  FUN_0214e958(*(undefined4 *)(param_1 + 0x10),auStack_14,uVar2);
  return;
}

