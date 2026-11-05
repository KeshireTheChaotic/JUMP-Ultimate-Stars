
undefined4 FUN_020104b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = DAT_020a1e00;
  do {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    for (uVar5 = 0; uVar3 = (**(code **)(*piVar4 + 0x1c))(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
      iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,uVar5);
      if (param_1 == iVar1) {
        (**(code **)(*piVar4 + 0x58))(piVar4,uVar5);
        uVar2 = FUN_0200fac4();
        return uVar2;
      }
    }
    piVar4 = (int *)piVar4[5];
  } while( true );
}

