
int * FUN_0217756c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  piVar1 = DAT_021a759c;
  if ((DAT_021a759c != (int *)0x0) && (piVar1 = (int *)FUN_0217575c(), piVar1 == (int *)0x0)) {
    piVar2 = (int *)DAT_021a759c[1];
    piVar1 = piVar2;
    if (piVar2 < (int *)0x6) {
      piVar1 = (int *)(int)(short)(&switchD_02177594::switchdataD_02177596)[(int)piVar2];
      switch(piVar2) {
      case (int *)0x0:
      case (int *)0x5:
        break;
      case (int *)0x1:
        piVar1 = (int *)FUN_021770c0();
        return piVar1;
      default:
        if (((int *)*DAT_021a759c != (int *)0x0) && (*(int *)*DAT_021a759c != 0)) {
          FUN_021823ac();
        }
        piVar1 = (int *)0x0;
        if (DAT_021a759c[0xc] != 0) {
          lVar5 = OS_GetTick();
          uVar4 = (uint)(lVar5 - *(longlong *)(DAT_021a759c + 0xd));
          uVar6 = FUN_0200d0c4(uVar4 * 0x40,
                               (int)((ulonglong)(lVar5 - *(longlong *)(DAT_021a759c + 0xd)) >> 0x20)
                               * 0x40 | uVar4 >> 0x1a,0x82ea,0);
          iVar3 = (int)((ulonglong)uVar6 >> 0x20);
          uVar4 = (uint)uVar6;
          piVar1 = (int *)(60000 - uVar4);
          if ((uint)(uVar4 < 0xea61) <= (uint)-iVar3) {
            FUN_02177528(6,0xffff1172,60000,-(uint)(uVar4 >= 0xea61) - iVar3);
            piVar1 = DAT_021a759c;
            DAT_021a759c[0xc] = 0;
          }
        }
      }
    }
  }
  return piVar1;
}

