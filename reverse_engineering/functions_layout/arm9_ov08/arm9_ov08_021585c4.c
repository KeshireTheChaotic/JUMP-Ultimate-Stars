
void FUN_021585c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  int local_64;
  int local_60;
  undefined4 local_50 [4];
  undefined1 auStack_40 [44];
  
  uVar1 = FUN_021665f8(0,0);
  FUN_020554a8(&local_6c);
  FUN_020075c4(auStack_40,0x14,u__02X__02X__02X__02X__02X__02X_0216b724,local_6c,local_6b,local_6a,
               local_69,local_68,local_67);
  FUN_02166408(uVar1,DAT_0216a8e0,DAT_0216a8e2,DAT_0216a8e4,DAT_0216a8e6,2,0x480,auStack_40);
  FUN_0206a4f8(&local_64);
  if (local_60 == 0 && local_64 == 0) {
    FUN_020075c4(auStack_40,0x14,u_____________________0216b788);
  }
  else {
    uVar5 = FUN_0200d0d0(local_64,local_60,10,0);
    local_50[3] = FUN_0200d10c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    uVar5 = FUN_0200d0c4(local_64,local_60,10,0);
    iVar3 = 0;
    do {
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar2 = FUN_0200d0d0((int)uVar5,uVar4,10000,0);
      local_50[2 - iVar3] = uVar2;
      uVar5 = FUN_0200d0c4((int)uVar5,uVar4,10000,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    FUN_020075c4(auStack_40,0x14,u__04d__04d__04d__04d_0216b760,local_50[0],local_50[1],local_50[2],
                 local_50[3]);
  }
  FUN_02166408(uVar1,DAT_0216a8e8,DAT_0216a8ea,DAT_0216a8ec,DAT_0216a8ee,2,0x480,auStack_40);
  FUN_02166370(uVar1);
  return;
}

