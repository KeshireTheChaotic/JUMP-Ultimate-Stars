
void FUN_0207bac8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      return;
    }
    piVar7 = (int *)puVar6[4];
    while (piVar7 != (int *)0x0) {
      *(byte *)(piVar7 + 4) = *(byte *)(piVar7 + 4) & 0xfe;
      iVar8 = *piVar7;
      bVar9 = *(int *)(piVar7[2] + 0x1c) != 0;
      iVar2 = 0;
      if (bVar9) {
        iVar2 = *(int *)(piVar7[3] + 0x1c);
      }
      if (bVar9 && iVar2 != 0) {
        piVar3 = (int *)puVar6[4];
        while (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
          if (piVar7 != piVar3) {
            iVar5 = piVar7[3];
            iVar4 = piVar3[3];
            bVar9 = iVar5 == iVar4;
            if (bVar9) {
              iVar5 = piVar7[2];
              iVar4 = piVar3[2];
            }
            if (bVar9 && iVar5 == iVar4) {
              bVar1 = *(byte *)(piVar7 + 4);
              if ((((bVar1 & 4) == 0) || ((*(byte *)(piVar3 + 4) & 4) != 0)) &&
                 (((*(byte *)(piVar3 + 4) & 4) == 0 || ((bVar1 & 4) != 0)))) {
                if ((bVar1 & 2) == 0) {
                  *(byte *)(piVar7 + 4) = *(byte *)(piVar7 + 4) | 1;
                }
                if ((int *)iVar8 == piVar3) {
                  iVar8 = iVar2;
                }
                FUN_0207ad04(piVar3,param_1,puVar6);
              }
            }
          }
          piVar3 = (int *)iVar2;
        }
        bVar1 = *(byte *)(piVar7 + 4);
        if ((bVar1 & 3) == 0) {
          if ((bVar1 & 0x10) == 0) {
            FUN_0207ad04(piVar7,param_1,puVar6);
            goto LAB_0207bc10;
          }
          *(byte *)(piVar7 + 4) = bVar1 | 0x21;
        }
        else {
          *(byte *)(piVar7[2] + 0x18) = *(byte *)(piVar7[2] + 0x18) | 4;
          *(byte *)(piVar7[3] + 0x18) = *(byte *)(piVar7[3] + 0x18) | 4;
        }
        if ((*(byte *)(piVar7 + 4) & 2) != 0) {
          *(byte *)(piVar7 + 4) = *(byte *)(piVar7 + 4) & 0xfd;
        }
      }
      else {
        FUN_0207ad04(piVar7,param_1,puVar6);
      }
LAB_0207bc10:
      piVar7 = (int *)iVar8;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}

