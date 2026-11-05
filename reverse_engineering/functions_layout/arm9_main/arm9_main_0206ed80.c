
/* JUS-SCENE jus_Scene12_Exit [scene-map] scene table 0209e32c row 12 exit; slot-1 overlay 6 */

void jus_Scene12_Exit(char *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0206efdc;
  switch(param_2) {
  case 0:
    *(int *)(PTR_DAT_0206efdc + 0x18c) = (int)param_1[1];
    break;
  case 1:
    *(int *)(PTR_DAT_0206efdc + 0x18c) = (int)*param_1;
    break;
  case 2:
    *(undefined4 *)(PTR_DAT_0206efdc + 0x18c) = 4;
    break;
  case 3:
    *(undefined4 *)(PTR_DAT_0206efdc + 0x18c) = 0xc;
    return;
  case 4:
    PTR_DAT_0206efdc[0x16] = 1;
    *(undefined4 *)(puVar3 + 0x18c) = 0xc;
    return;
  }
  switch(*(undefined4 *)(PTR_DAT_0206efdc + 0x80)) {
  case 0:
    if (param_2 == 0) {
      func_0x020727c8();
      puVar3 = (undefined *)0x0;
      puVar1 = PTR_DAT_0206efe0;
      if (PTR_DAT_0206efe0[8] != '\0') {
        puVar1 = (undefined *)(int)(char)*PTR_DAT_0206efe0;
        puVar3 = (undefined *)0xffffffff;
      }
      if (PTR_DAT_0206efe0[8] != '\0' && puVar1 != puVar3) {
        func_0x02071818();
      }
    }
    break;
  case 1:
    if ((param_2 == 0) && (func_0x020727c8(), PTR_DAT_0206efe0[0x4a] != '\0')) {
      if ((PTR_DAT_0206efe0[10] == '\0') && (PTR_DAT_0206efe0[0x48] != -1)) {
        func_0x02071994();
      }
      puVar3 = PTR_DAT_0206efdc;
      *(undefined4 *)(PTR_DAT_0206efdc + 0xc) = 0;
      puVar3[0x13] = 1;
    }
    break;
  case 2:
    goto code_r0x0206ef30;
  case 3:
code_r0x0206ef30:
    if (param_2 == 0) {
      func_0x020727c8();
    }
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    iVar2 = FUN_02087724();
    if (iVar2 != 2 && param_2 == 0) {
      func_0x020727c8();
      iVar2 = FUN_02086bd4();
      if (iVar2 != 0) {
        iVar2 = *(int *)(PTR_DAT_0206efe4 + 8);
        func_0x020726d8();
        if (PTR_DAT_0206efe4[0x2d] == '\0') {
          if (PTR_DAT_0206efec[iVar2] == '\0') {
            func_0x02072750();
          }
        }
        else if (PTR_DAT_0206efe8[iVar2] == '\0') {
          func_0x02072750();
        }
        FUN_0208779c();
      }
    }
  }
  switch(*(undefined4 *)(PTR_DAT_0206efdc + 0x80)) {
  case 0:
    break;
  case 1:
    return;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    return;
  case 6:
    iVar2 = FUN_02087724();
    if (iVar2 == 2) {
      return;
    }
    break;
  default:
    return;
  }
  func_0x02071324(*(undefined4 *)(PTR_DAT_0206efe4 + 0xc));
  if (PTR_DAT_0206efe4[0x20] == '\x01') {
    func_0x02071958(PTR_DAT_0206efe4[0x24]);
  }
  if (PTR_DAT_0206efe4[0x20] == '\a') {
    func_0x02071a94(PTR_DAT_0206efe4[0x24]);
  }
  if (PTR_DAT_0206efe4[0x20] == '\b') {
    func_0x020719f4(PTR_DAT_0206efe4[0x24]);
    return;
  }
  return;
}

