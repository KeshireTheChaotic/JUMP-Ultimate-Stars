
/* JUS-SCENE jus_Scene25_Create [scene-map] scene table 0209e32c row 25 create; slot-1 overlay 1 */

void jus_Scene25_Create(void)

{
  undefined4 uVar1;
  
  if (*pcRam0206f814 == -1) goto LAB_0206f80c;
  func_0x02071874();
  if (pcRam0206f814[8] == '\0') {
    func_0x02071bb8((int)*pcRam0206f814);
    goto LAB_0206f80c;
  }
  switch(*(undefined4 *)(iRam0206f818 + 0x10)) {
  case 0:
    goto code_r0x0206f7cc;
  case 1:
    break;
  case 2:
    goto code_r0x0206f7cc;
  case 3:
    goto code_r0x0206f7cc;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    goto code_r0x0206f7cc;
  case 0xb:
    goto code_r0x0206f7cc;
  case 0xc:
    goto code_r0x0206f7cc;
  case 0xd:
    goto code_r0x0206f7cc;
  case 0xe:
    goto code_r0x0206f7cc;
  case 0xf:
    break;
  case 0x10:
    goto code_r0x0206f7cc;
  case 0x11:
    break;
  case 0x12:
code_r0x0206f7cc:
    uVar1 = 1;
    goto code_r0x0206f7d8;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
  }
  uVar1 = 0;
code_r0x0206f7d8:
  if (*(int *)(pcRam0206f814 + 0x30) == -1) {
    func_0x02071bf4((int)*pcRam0206f814,(int)*(short *)(pcRam0206f814 + 0x16),uVar1);
  }
  else {
    func_0x02071bf4((int)*pcRam0206f814,*(int *)(pcRam0206f814 + 0x30),uVar1);
  }
LAB_0206f80c:
  func_0x0215277c();
  return;
}

