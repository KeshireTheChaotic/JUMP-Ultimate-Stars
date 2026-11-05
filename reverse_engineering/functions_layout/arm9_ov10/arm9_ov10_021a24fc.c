
int FUN_021a24fc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_2c;
  undefined1 auStack_28 [20];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = FUN_021a237c();
  if (iVar1 == 0) {
    FUN_02051890(param_4,local_2c * 0xc + param_2);
    FUN_02071008(local_2c);
    if (param_5 == 0) {
      iVar2 = thunk_FUN_02069c44(param_4);
      if (iVar2 == 2) {
        FUN_020517fc(auStack_28,0,0x14);
        uVar3 = FUN_02069768(param_4);
        FUN_0219c3f8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),auStack_28);
        FUN_0207102c(local_2c,auStack_28);
        FUN_0207106c(local_2c,0,0xff,0,0,0,0);
      }
      else {
        FUN_0207106c(local_2c,0,0,0,0,0,0);
      }
    }
    else {
      FUN_0207102c(local_2c);
      FUN_0207106c(local_2c,0,0,0,0,0,0);
    }
    thunk_FUN_0208c598();
  }
  return iVar1;
}

