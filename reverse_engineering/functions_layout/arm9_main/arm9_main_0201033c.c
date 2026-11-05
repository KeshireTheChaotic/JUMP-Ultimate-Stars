
undefined4 FUN_0201033c(char *param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  char local_38 [32];
  undefined4 uStack_18;
  
  uVar9 = 0;
  uStack_18 = param_4;
  do {
    if (0x1f < uVar9) {
LAB_02010362:
      iVar4 = FUN_020326b0(local_38);
      piVar10 = DAT_020a1e00;
      do {
        if (piVar10 == (int *)0x0) {
          return 0;
        }
        for (uVar9 = 0; uVar8 = (**(code **)(*piVar10 + 0x1c))(), uVar9 < uVar8; uVar9 = uVar9 + 1)
        {
          pcVar5 = (char *)(**(code **)(*piVar10 + 0x18))(piVar10,uVar9);
          if ((pcVar5 != (char *)0x0) &&
             ((iVar6 = (**(code **)(*piVar10 + 0x34))(), iVar6 == 0 ||
              (iVar6 = (**(code **)(*piVar10 + 0x30))(piVar10,uVar9), iVar4 == iVar6)))) {
            bVar3 = false;
            pcVar11 = param_1;
            while( true ) {
              cVar1 = *pcVar11;
              if ((((cVar1 == '\0') || (cVar2 = *pcVar5, cVar2 == '\0')) || (cVar1 == '.')) ||
                 (cVar2 == '.')) goto LAB_020103c8;
              if (cVar1 != cVar2) break;
              pcVar11 = pcVar11 + 1;
              pcVar5 = pcVar5 + 1;
            }
            bVar3 = true;
LAB_020103c8:
            cVar2 = *pcVar5;
            if (((cVar1 != cVar2) && ((cVar1 != '\0' || (cVar2 != '.')))) &&
               ((cVar1 != '.' || (cVar2 != '\0')))) {
              bVar3 = true;
            }
            if (!bVar3) {
              if ((cVar1 == '\0') && (cVar2 == '\0')) {
                uVar7 = (**(code **)(*piVar10 + 0x58))(piVar10,uVar9);
                FUN_0201049c(uVar7,param_1);
                uVar7 = FUN_0200fac4(uVar7);
                return uVar7;
              }
              if (cVar2 != '\0') {
                if ((cVar1 == '.') && (iVar6 = FUN_02004c2c(pcVar11,pcVar5), iVar6 == 0)) {
                  uVar7 = (**(code **)(*piVar10 + 0x58))(piVar10,uVar9);
                  FUN_0201049c(uVar7,param_1);
                  uVar7 = FUN_0200fac4(uVar7);
                  return uVar7;
                }
                if (param_2 != 0) {
                  for (uVar8 = 0; uVar8 < param_3; uVar8 = uVar8 + 1) {
                    iVar6 = FUN_02004c2c(*(undefined4 *)(param_2 + uVar8 * 4),pcVar5);
                    if (iVar6 == 0) {
                      uVar7 = (**(code **)(*piVar10 + 0x58))(piVar10,uVar9);
                      FUN_0201049c(uVar7,param_1);
                      uVar7 = FUN_0200fac4(uVar7);
                      return uVar7;
                    }
                  }
                }
              }
            }
          }
        }
        piVar10 = (int *)piVar10[5];
      } while( true );
    }
    cVar1 = param_1[uVar9];
    local_38[uVar9] = cVar1;
    if (cVar1 == '.') {
      local_38[uVar9] = '\0';
      goto LAB_02010362;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

