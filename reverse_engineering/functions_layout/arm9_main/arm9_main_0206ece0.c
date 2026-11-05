
/* JUS-SCENE jus_Scene12_Create [scene-map] scene table 0209e32c row 12 create; slot-1 overlay 6 */

void jus_Scene12_Create(void)

{
  int iVar1;
  
  iVar1 = *(int *)(iRam0206ed7c + 0x80);
  if (*(char *)(iRam0206ed7c + 0x16) != '\0') {
    *(undefined1 *)(iRam0206ed7c + 0x16) = 0;
    if (iVar1 == 1) {
      func_0x0214cd20(9);
      return;
    }
    if (iVar1 == 6) {
      func_0x0214cd20(7);
      return;
    }
    func_0x0214cd20(8);
    return;
  }
  switch(iVar1) {
  case 0:
    break;
  case 1:
    goto code_r0x0206ed70;
  case 2:
    break;
  case 3:
    break;
  case 4:
  default:
LAB_0206ed6c:
    FUN_02070758();
    goto code_r0x0206ed70;
  case 5:
    goto LAB_0206ed6c;
  case 6:
    func_0x02070714();
    goto code_r0x0206ed70;
  }
  func_0x0207069c();
code_r0x0206ed70:
  func_0x0214cd20(iVar1);
  return;
}

